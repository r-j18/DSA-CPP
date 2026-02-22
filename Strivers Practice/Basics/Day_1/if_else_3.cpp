#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int age;
    cin >> age;

    if(age < 18){
        cout << "Not eligible for job";
    }
    else if(age <= 54 ){
        cout << "Eligible for a job";
    }
    else if(age >= 55 && age <= 57 ){
        cout << "Eligible but retirement soon";
    }
    else{
        cout << "Retirement time";
    }

    return 0;
}