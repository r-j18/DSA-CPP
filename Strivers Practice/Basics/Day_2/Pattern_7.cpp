#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    //Outer loop runs 5 times i increases with every iteration
    for(int i = 0; i < 5 ; i++){
        //This loop makes first 4 spaces then 3 then 2 ....
        for(int j = 0; j < 5-i-1 ; j= j+1){
            cout << " ";
        }
        //This Loop prints stars first 1 then 2 then ....
        for(int j = 0; j < 2*i + 1 ; j= j+1){
            cout << "*";
        }
        //This loop makes first 4 spaces then 3 then 2 ....
        for(int j = 0; j < 5-i-1 ; j= j+1){
            cout << " ";
        }
        cout << "\n";
    }
    return 0;
}