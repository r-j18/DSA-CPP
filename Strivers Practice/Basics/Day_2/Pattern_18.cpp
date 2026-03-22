#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    //Outer loop runs 5 times
    for(int i = 0; i<5 ; i++){
        int x =69;
        // Inner loop runs first 1 then 2 then 3 .... then 5 times
        for(int j = i; j>= 0; j--){
            /*x reduced by j every time and j decreases 
            so x incerease in each line*/
            cout << (char) (x-j) << " " ;
               
        }
        cout << "\n";
    }

    return 0;
}