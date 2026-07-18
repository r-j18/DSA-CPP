#include <bits/stdc++.h>
using namespace std;


int romanToInt(string s) {
    int integer =0;
    std::unordered_map<char, int> romans = {{'I', 1},
                                            {'V', 5},
                                            {'X', 10},
                                            {'L', 50},
                                            {'C', 100},
                                            {'D', 500},
                                            {'M', 1000}
                                                        };
    for(int i = 0; i < s.size(); i++){
        if(i != s.size()-1){
            if(romans[s[i]]< romans[s[i+1]]){
                integer += romans[s[i+1]] - romans[s[i]];
            }
            else integer += romans[s[i]];
        }
        else integer += romans[s[i]];
    }
    return integer;
}


int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;


    return 0;
}