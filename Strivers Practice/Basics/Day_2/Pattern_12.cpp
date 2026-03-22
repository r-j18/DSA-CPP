#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    //Outer loop runs 5 times
    for(int i = 1; i<=4 ; i++){
        // Inner loop runs first 1 then 2 then 3 .... then 5 times
        for(int j = 1; j<= i; j++){
            cout << j;
        }
        //Space 
        for(int j = 1; j<= 8- 2*i; j++ ){
            cout << " ";
        }
        //Number backwards
        for(int j = i; j>= 1; j--){
            cout << j;
        }
        cout << "\n";
    }

    return 0;
}