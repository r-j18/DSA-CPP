#include <bits/stdc++.h>

using namespace std;
    //Time limit exceeded
    string longestPalindrome(string s) {
        string longest = "";
        for(int i = 0; i< s.size(); i++){
            string stri = "";
            for(int j = 0; j < s.size(); j++){
                stri += s[j];
                std::string rev(stri.rbegin(), stri.rend()) ;
                if( rev == stri){
                    if(stri.size()> longest.size()) {
                        longest = stri;
                    }
                }
            }
        }
        return longest;
    }

    //New approach
    string longestPalindrome(string s) {
        

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