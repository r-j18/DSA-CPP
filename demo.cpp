#include <bits/stdc++.h>
using namespace std;


void psr(string &s){
    s = "String not Number \n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s = "100 \n";
    //psr(s);
    cout << s;
    string *pointer = &s;
    string copy = *pointer;
    cout << copy;

    return 0;
}