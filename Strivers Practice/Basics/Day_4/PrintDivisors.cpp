#include <bits/stdc++.h>
using namespace std;


vector<int> divisors(int n){
    vector <int> div;
    for(int i =1; i*i <= n ; i++){
        if(n % i == 0){
            div.emplace_back(i);
            if( i != n/i) div.emplace_back(n/i);
        }
    }
    sort(div.begin(), div.end());
    return div;
} 


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    vector <int> d = divisors(n);
    auto end = d.end();
    cout << "[";
    for(auto x : d) {
    cout << " " << x ;
    if( x != *(end-1)) cout << ","   ;
    }
    cout << "]";
    return 0;
}