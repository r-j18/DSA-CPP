#include <bits/stdc++.h>
using namespace std;


int GCD(int n1, int n2){
    int temp;
    int count =0;
    while(n2 != 0){
        
        temp = n2;

        n2 = n1 % n2;

        n1 = temp;
        count ++;
        cout << count << endl;
    }    
    cout << "First Method done" ;
    return n1;
}

int GCD2(int a, int b){
    int temp;
    int count = 0;
        while (a != 0){
            temp = b;
            b = a; 
            if(a > temp) a = a-temp;
            else a = temp - a;
            count ++;
            cout << count << endl;
        }
        return b;
    
        
        
    
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n1, n2;
    cin >> n1 >> n2;
    cout << GCD(n1, n2) << endl;
    cout << GCD2(n1, n2);

    return 0;
}