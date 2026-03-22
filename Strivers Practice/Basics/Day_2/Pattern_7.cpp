#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    //Outer loop runs 5 times i increases with every iteration
    for(int i = 0; i < 5 ; i++){
        
        for(int j = 0; j < 5-i-1 ; j= j+1){
            cout << " ";
        }
        for(int j = 0; j < 2*i + 1 ; j= j+1){
            cout << "*";
        }
        for(int j = 0; j < 5-i-1 ; j= j+1){
            cout << " ";
        }
        cout << "\n";
    }
    return 0;
}