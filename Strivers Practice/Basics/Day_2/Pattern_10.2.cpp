#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    //Outer loop runs 9 times i increases with every iteration
    for(int i = 0; i <= 9 ; i++){
        //When the iteration crosses 5th row it reverses the logic
        if(i<5){
            for(int j = 0; j <= i; j++){
            cout << "*";
        }
        for(int j = 0; j < 5-i; j++){
            cout << " ";
        }
        cout << "\n";
        }
        if (i>5){
                for(int j = 0; j <= 9-i; j++){
                    cout << "*";
                }
                for(int j = 0; j < i; j++){
                    cout << " ";
                }
            cout << "\n";
        }
    }
            


    return 0;
}