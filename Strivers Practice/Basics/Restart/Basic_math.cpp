#include <bits/stdc++.h>
using namespace std;

int count_digits(int n){
    int count = 0;
    while(n!=0){
        n = n/10;
        count++;
    }
    return count;
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

void printvector(const vector<int> &v){
    cout << "[";
    for (int i = 0; i < v.size(); i++) {
    cout << v[i];
    if(i != (v.size()-1)){
        cout << ", ";
    }
    }
    cout << "]";
}
//Brute force method
vector <int> returnSortedDivisors(int n){
    vector<int> v = {1};
    for(int i = 2; i<n; i++){
        if(n%i == 0) v.push_back(i);
    }
    v.push_back(n);
    return v;   
}

//Optimised Approach
void printALLDivisors(int n){
    vector<int> v = {1, n};
    for(int i =2; i * i<= n; i++ ){
        if(n % i == 0){
            v.push_back(i);
            if(i*i != n) v.push_back(n/i);
        }
    }
    printvector(v);
}

//Brute Force GDC
int gdc(int a, int b){
    vector <int> da = returnSortedDivisors(a);
    vector <int> db = returnSortedDivisors(b);
    if (da.size() >= db.size()){
        for(int i = da.size()-1; i >= 0; i--){
            for(int j = db.size()-1; j >= 0; j--){
                if (da[i] == db[j]){
                    cout << db[j];
                    return db[j];
                }
            }
        }
    }
    else if (da.size() < db.size()){
        for(int i = db.size()-1; i >= 0; i--){
            for(int j = da.size()-1; j >= 0; j--){
                if (db[i] == da[j]){
                    cout << da[j];
                    return da[j];
                }
            }
        }
    }
    return 1;
}

int euclidGDC(int a, int b){
    int temp = 0;
    while( a != 0 && b != 0){
        if(a >= b){
            temp = b;
            b = a%b;
            a = temp;
        } 
        else {
            temp = a;
            a = b%a;
            b = temp;
        }
    }
    if(a == 0) return b;
    else return a;
}

bool isPrime(int n){
    vector <int> v = returnSortedDivisors(n);
    if(v.size() > 2) return 0;
    else return 1;
}

bool isPrime2 (int n){
    if (n <= 1) return 0;
    for(int i = 2; i <= n/i; i++){
        if( n % i == 0) return 0;
    }
    return 1;
}

bool isArmstrong (int n){
    int digit = count_digits(n);
    int num = n;
    int sum = 0;
    while (n != 0){
    sum = sum + pow(n%10, digit);
    n = n/10;
    }
    if (sum == num) return 1;
    return 0; 
}

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int a, b;
    // cin >> a;
    // cin >> b;
    // cout << euclidGDC(a, b);
    int a; 
    cin >> a;
    cout << isArmstrong(a);
    return 0;
}