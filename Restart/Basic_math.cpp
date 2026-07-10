#include <bits/stdc++.h>
using namespace std;

void count_digits(int n){
    int count = 0;
    while(n!=0){
        n = n/10;
        count++;
    }
    cout << count;
}

void rev_num(int n){
    int rev = 0;
    while(n!=0){

        rev = 10*rev + n%10;
        n = n/10;
    }
    cout << rev;
}


void palindrome(int n){
    int rev = 0;
    int num = n;
    while(n!=0){

        rev = 10*rev + n%10;
        n = n/10;
    }
    cout << (rev == num);
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
    palindrome(n);

    return 0;
}