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

void pattern6(int n){
    for(int i = 1; i <=n; i++){
        for(int j = 1; j<= n-i+1 ; j++){
            cout << j;
        }
        cout << "\n";
    }
}

void pattern7(int n){
    for(int i =1; i <= n; i++){
        for(int j = 1; j < n-i+1; j++){
            cout << " ";
        }
        for(int k = 1; k <= 2*i-1 ; k++){
            cout << "*";
        }
        for(int j = 1; j < n-i+1; j++){
            cout << " ";
        }
        cout << "\n";
    }
}

void pattern8(int n){
    for(int i = 1; i <= n; i++){
        for(int j =1; j <= i-1; j++ ){
            cout << " ";
        }
        for(int k = 2*n - 1; k >= 2*i -1 ; k--){
            cout << "*";
        }
        for(int j =1; j <= i-1; j++ ){
            cout << " ";
        }
        cout << "\n";
    }
}

void pattern9(int n){
    for(int i =1; i <= n; i++){
        for(int j = 1; j < n-i+1; j++){
            cout << " ";
        }
        for(int k = 1; k <= 2*i-1 ; k++){
            cout << "*";
        }
        for(int j = 1; j < n-i+1; j++){
            cout << " ";
        }
        cout << "\n";
    }
    for(int i = 1; i <= n; i++){
        for(int j =1; j <= i-1; j++ ){
            cout << " ";
        }
        for(int k = 2*n - 1; k >= 2*i -1 ; k--){
            cout << "*";
        }
        for(int j =1; j <= i-1; j++ ){
            cout << " ";
        }
        cout << "\n";
    }
}

void pattern10(int n){
    for(int i = 1; i<= 2*n-1; i++){
        if(i <= n){
            for(int j = 1; j<= i; j++){
                cout << "*";
            }
            cout << "\n";
        }
        else{
            for(int j = n-1; j >=i-n; j-- ){
                cout << "*";
            }
            cout << "\n";
        }
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
    pattern10(n);

    return 0;
}
