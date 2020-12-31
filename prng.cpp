#include <bits/stdc++.h>
using namespace std;

// middle-square-method
int digits = 4;
int seed = 5678;
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
    map<int,int> mp;
    for(int i = 0; i < 100000; i++){
        int val = msprng_rand();
        if(mp[val]){
            cout << "PRNG starts repeating at " << val << endl;
            break;
        }
        else{
            cout << val << " ";
            mp[val]++;
        }
    }
    cout<<endl;

    return 0;
}
