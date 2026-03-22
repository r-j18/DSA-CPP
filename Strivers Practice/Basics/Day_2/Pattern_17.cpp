#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    //Outer loop runs 5 times i increases with every iteration
    for(int i = 0; i < 4 ; i++){
        int x =65;
        //This loop makes first 4 spaces then 3 then 2 ....
        for(int j = 0; j < 5-i-1 ; j= j+1){
            cout << " ";
        }
        //This Loop prints A then AB then ABC then ABCD ....
        for(int j = 0; j < i ; j= j+1){
            cout << (char) x;
            x++;   
        }
        //THis loop print A then BA then CBA
        for(int j = i+1; j >0 ; j= j-1){
            cout << (char) x;
            x--;   
        }
        cout << "\n";
    }
    return 0;
}