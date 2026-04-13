#include <bits/stdc++.h>
using namespace std;


bool isPalindrome(int n){
    int copy_num = n;
    int rev = 0;
    if( n == 0){
        return true;
    }
    else{
        while(copy_num != 0){
            rev =  (rev*10) + copy_num%10;
            copy_num = copy_num/10;
        }
        if (rev == n){
            return true;
        }
        return false;
        
    }
    
    
}



int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    if( isPalindrome(n)){
        cout << "true";
    }
    else{
        cout << "false";
    }

    return 0;
}