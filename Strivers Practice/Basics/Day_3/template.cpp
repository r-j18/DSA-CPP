#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector <int> v = {10, 20, 30, 40};
    vector<int>::iterator i1 = v.end();
    auto i2 = v.back(); 
    
    for(auto i = v.begin(); i != i1 ; i--){
        cout << *(i) << " ";
    }


    return 0;
}