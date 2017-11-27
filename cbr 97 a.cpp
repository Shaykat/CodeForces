#include<bits/stdc++.h>
using namespace std;

int n;
int arr[110],b;

int main(){
    cin >> n;
    int p = 1;
    for(int i = 0; i < n; i++){
        cin >> b;
        arr[b-1] = i+1;
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
