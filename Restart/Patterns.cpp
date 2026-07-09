#include <bits/stdc++.h>
using namespace std;

void pattern1(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j =1; j <= n; j++){
            cout << "*";
        }
        cout << "\n" ;
    }
    
}

void pattern2(int n) {
    for(int i = 1; i <=n; i++){
        for(int j =1; j <= i; j++){
            cout << "*";
        }
        cout << "\n";
    }
}

void pattern3(int n) {
    for(int i = 1; i<=n; i++){
        for(int j =1; j <= i; j++){
            cout << j;
        }
        cout << "\n";
    }
}

void pattern4(int n) {
    for(int i = 1; i<=n; i++){
        for(int j =1; j <= i; j++){
            cout << i;
        }
        cout << "\n";
    }
}

void pattern5(int n){
    for(int i = 1; i <=n; i++){
        for(int j = n; j>=i; j--){
            cout << '*';
        }
        cout << "\n";
    }
}


int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    pattern5(n);

    return 0;
}
