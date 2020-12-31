#include <bits/stdc++.h>
using namespace std;

// middle-square-method
int digits = 4;
int seed = 1234;
int msprng_rand(){
    int sq = seed * seed;
    string str = to_string(sq);
    while((int)str.size() < 2 * digits){
        str = "0" + str;
    }
    
    int l = digits/2;
    seed = stoi(str.substr(l, digits));
    return seed;
}

int main(){
    // Middle Square method to generate prng
    for(int i = 0; i < 10; i++){
        cout << msprng_rand() << " ";
    }
    cout<<endl;

    return 0;
}
