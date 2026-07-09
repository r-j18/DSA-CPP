#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    int age;
    for (int i =0; i <5; i++){
        cin >> age;
        if(age < 18){
            cout << "Not an Adult \n";
        }
        else{
            cout << "Adult \n";
        }
    }
    

    return 0;
}