#include <bits/stdc++.h>
using namespace std;


void printName(int n, int c){
    if(c == n){
        return;
    }
    cout<< "Romit ";
    c++;
    printName(n, c);
}

void print1toN(int i, int n){
    if(i>n) return;
    cout<< i << " ";
    print1toN(i+1, n);
}

void printNto1(int i, int n){
    if(i>n) return;
    printNto1(i+1, n);
    cout << i << " ";
}

//Parameterized
void sumToN(int i, int n, int sum){
    if(i > n) {
        cout << sum;
        return;
    }
    sum += i;
    i++;
    sumToN(i, n, sum);
}

int sum2(int n){
    if(n == 0) return 0;
    return n + sum2(n-1); 
}

int factorial(int n){
    if(n == 1) return 1;
    return n * factorial(n-1);
}

//My aproach 
void revArray(int n[],int len, int i){ 
    if(i > (int)(len/2)) return;
    int temp = n[i];
    n[i] = n[len-i];
    n[len-i] = temp;
    revArray(n,len, i+1);
}

//Striver's approach
void swap(char a, char b){
    char temp = a;
    a = b;
    b = a;
}

void rev(vector<int>& arr){
    int len = arr.size();
    int p1 = 0;
    int p2 = len -1;
    while(p1< p2){
        swap(arr[p1], arr[p2]);
        p1++;
        p2--;
    }
}

void swa(char& a, char& b){
    char temp = a;
    a = b;
    b = temp;
}

void rev(string& a){
    int len = a.size();
    int p1 =0;
    int p2 = len -1;
    while(p1<p2){
        swa(a[p1], a[p2]);
        p1++;
        p2--;
    }
}

bool isPalindrome(string a){
    string s = a;
    rev(a);
    cout << s << " " << a;
    return (s == a);
}

int fibonacci(int n){
    if( n == 0) return 0;
    if( n == 1)  return 1;
    return fibonacci(n-1) + fibonacci(n-2);
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
    //printName(n, 0);
    // print1toN(1,n);
    // cout << '\n';
    // printNto1(1,n);

    // sumToN(1, n, 0);
    // cout << "\n";
    // cout << sum2(n);

    //cout << factorial(n);
    // int arr[] = {1,2,3,4, 5};
    // int len = 3;
    // revArray(arr,4,  0);
    // for(int i : arr){
    //     cout << i << " ";
    // }

    // string s = "ABCBA";
    // cout << isPalindrome(s);

    cout << fibonacci(5);

    return 0;
}