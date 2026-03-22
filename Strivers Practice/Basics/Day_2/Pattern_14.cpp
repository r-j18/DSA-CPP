#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    //Outer loop runs 5 times
    for(int i = 0; i<5 ; i++){
        int x =65;
        // Inner loop runs first 1 then 2 then 3 .... then 5 times
        for(int j = 0; j<= i; j++){
            cout << (char) x ;
            // x increases after every inner loop
            x++;
        }
        cout << "\n";
    }

    return 0;
}