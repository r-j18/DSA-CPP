#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int age;
    cin >> age;
    if(age < 18){
        cout << "Not an Adult";
    }
    else{
        cout << "Adult";
    }

    return 0;
}