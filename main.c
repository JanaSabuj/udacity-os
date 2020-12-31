#include <stdio.h>
#include <time.h>

int main(void) {
    printf("Hello World\n");

    clock_t start_time;
    start_time = clock();

    printf("clock start = %ld\n", start_time);
    time_t now;
    now = time(NULL);
    printf("Hours since epoch = %ld\n", now/3600);


    printf("%s", ctime(&now));

    for(int i = 0; i < 1000000000; i++);
    
    clock_t endtime;
    endtime = clock();

    printf("seconds elapsed: %ld", (endtime - start_time)/CLOCKS_PER_SEC);

  return 0;
}