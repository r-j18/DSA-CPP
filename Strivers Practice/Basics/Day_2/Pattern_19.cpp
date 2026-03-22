#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    for(int i =0; i<5; i++){
        cout << endl;
            for(int j = 0; j <5 - i; j++ ){
                cout << "*";
            }
            for(int j = 0; j < 2*i; j++){
                cout << " ";
            }
            for(int j = 0; j <5 - i; j++ ){
                cout << "*";
            }
        
    }

    for(int i =0; i<5; i++){
            for(int j = 0; j <i; j++ ){
                cout << "*";
            }
            for(int j = 0; j < 10 - 2*i; j++){
                cout << " ";
            }
            for(int j = 0; j <i; j++ ){
                cout << "*";
            }
        cout << endl;
    }
    
    return 0;
}