#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    //Outer loop runs 5 times i increases with every iteration
    for(int i = 0; i<=5 ; i++){
        //Inner loop runs 5 then 4 then 3 ... then once
        for(int j = 1; j <= 5-i; j++){
            cout << j;
        }
        cout << "\n";
    }

    return 0;
}