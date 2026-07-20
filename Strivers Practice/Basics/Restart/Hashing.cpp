#include <bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n[6];
    unordered_map<int, int> mpp;
    for(int i = 0; i< 6; i++){
        cin >> n[i];
        mpp[n[i]]++;
    }

    for( auto it : mpp){
        cout << it.first << "->" << it.second << endl;
    }



    return 0;
}