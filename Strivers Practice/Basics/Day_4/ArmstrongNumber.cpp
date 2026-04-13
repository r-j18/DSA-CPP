#include <bits/stdc++.h>
using namespace std;

int countDigit(int n){
    int digit_count = 0;
    do {
        n = n/10;
        digit_count++;
    } while (n != 0);
    return digit_count;
}

bool isArmstrong(int n){

    int num = 0;
    int ld = 0;
    int duplicate = n;
    int count = countDigit(n);
    while(n != 0){
        ld =  n%10;
        num = num + (int)pow(ld, count);
        n = n/10;
    }
    return num == duplicate;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int x;
    cin >> x;
    cout << isArmstrong(x);
    

    return 0;
}