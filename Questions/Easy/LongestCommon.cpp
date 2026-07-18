#include <bits/stdc++.h>
using namespace std;

    string longestCommonPrefix(vector<string>& strs) {
        int index = 0;
        bool flag = true;
        while(flag){
            if(strs[0][index] == strs[1][index] && strs[1][index] == strs[2][index]){
                index ++;
            }
            else flag = false;
        }
        string s;
        for(int i = 0; i< index; i++){
            s += strs[1][i];
        }
        return s;
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