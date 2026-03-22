#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    for(int i = 5; i>0; i--){
        for(int j = 0; j< i; j++){
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}