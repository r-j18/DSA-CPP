#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    //Outer loop runs 5 times but i decreases with every iteration
    for(int i = 5; i>0; i--){
        //Inner loop runs 5 times then 4 then 3 ... then once
        for(int j = 0; j< i; j++){
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}