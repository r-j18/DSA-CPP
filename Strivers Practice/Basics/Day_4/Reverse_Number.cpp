#include <bits/stdc++.h>
using namespace std;

//First try
int reverseNumber(int n){
    int count =0;
    int rev = 0;
    int temp[6];
    do{
        temp[count] = n%10 ;
        n = n/10;
        count ++;
    }while (n != 0 );

    for (int i = 0; i< count; i++){
        rev = rev + (temp[count - i - 1] *(pow(10, i)) );
    }

    return rev;
}

//2nd attempt
int revNum2(int x){
    int rev = 0;
    if (x == 0){
        return 0;
    }
    else {
        while(x != 0){
            rev =  rev*10 + x%10;
            x = x/10;
        }
        return rev;
    }
    
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int x;
    cin >>  x ;
    //cout << reverseNumber(x) << endl;

    
    cout << revNum2(x);

    return 0;
}