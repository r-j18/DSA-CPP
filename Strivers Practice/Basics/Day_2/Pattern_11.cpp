#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int x =1;
    //Outer loop runs 5 times
    for(int i = 0; i<5 ; i++){
        
        // Inner loop runs first 1 then 2 then 3 .... then 5 times
        for(int j = 0; j<= i; j++){
            //When i+j is even we print 1 else 0
            if(((i+j) % 2) == 0) cout << 1;
            else cout << 0;
        }
        
        cout << "\n";
    }

    return 0;
}