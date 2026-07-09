#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //Outer loop runs 5 times 
    for(int i = 0; i<5 ; i++){
        //Inner loop runs 5 times
        for(int j = 0; j< 5; j++){
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}