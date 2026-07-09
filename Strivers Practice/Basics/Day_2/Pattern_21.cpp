#include <bits/stdc++.h>
using namespace std;

void p(int n){
    for(int i = 1; i<= n; i++){
        for(int j = 1; j <= n; j++){
            if(i== 1 || i == n || j == n || j ==1){
                cout << "*";
            }
            else cout << " ";
        }
        cout <<  endl;
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    p(6);

    return 0;
}