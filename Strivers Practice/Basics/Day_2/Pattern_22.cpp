#include <bits/stdc++.h>
using namespace std;

void p(int n){
        for(int i = 1; i<= 7 ; i++){
            for(int j = 1; j <= 7  ;j++){
                if(i== 1 || i == 7 || j == 7 || j ==1){
                    cout << 4 << " ";
                }
                else if(i== 2 || i == 6 || j == 6 || j == 2){
                    cout << 3 << " " ;
                }
                else if(i== 3 || i == 5 || j == 5 || j == 3){
                    cout << 2 << " " ;
                }
                else if(i== 4 || i == 4 || j == 4 || j == 4){
                    cout << 1 << " " ;
                }
                
            }
            cout <<  endl;
        }
    }
    
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    p(4);

    return 0;
}