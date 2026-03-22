#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int x =1;

    //Outer loop runs 5 times 
    for(int i = 0; i<5 ; i++){
        
        //Inner loop runs once then twice ... then five times
        for(int j = 0; j<= i; j++){
            cout << x;
        }
        //x increases at the end of every outer loop
        x++;
        cout << "\n";
    }

    return 0;
}