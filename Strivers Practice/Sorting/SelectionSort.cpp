#include <bits/stdc++.h>
using namespace std;


void selectionSort(vector<int> &arr){
    for(int i = 0; i < arr.size(); i++){
        int minIndex = min_element(arr.begin()+i, arr.end()) - arr.begin();
        swap(arr[minIndex], arr[i]);
    }
}

void ManualSelecSort(vector<int> &arr){
    int n = arr.size();
    for(int i = 0; i < n-1; i++){
        int minIndex = i;
        for(int j = i; j< n; j++){
            if(arr[minIndex] > arr[j]) minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }
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

    vector<int> arr;

    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        arr.push_back(val);
    }

    ManualSelecSort(arr);
    cout << endl;

    for(auto it : arr){
        cout << it << " ";
    }


    return 0;
}