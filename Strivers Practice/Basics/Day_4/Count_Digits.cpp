#include <bits/stdc++.h>
using namespace std;

//Brute force extraction of digits
int countDigit(int n){
    int digit_count = 0;
    do {
        n = n/10;
        digit_count++;
    } while (n != 0);
    return digit_count;
}

//New approach 
// Log base 10 method
int new_method(int n){
    if(n < 0) return -1;
    if(n == 0) return 1;
    return (int)(log10(n)) + 1;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    cout << countDigit(n) << endl;
    cout << new_method(n);

    return 0;
}