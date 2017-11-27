#include<bits/stdc++.h>
using namespace std;
#define s 1010
queue<int>Q;
int a[s];
int b[s],c[s];
int n;
int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        b[a[i]]++;
    }

    sort(a,a+n);
    int cnt = 0,i=0,j=0;
    while(i < n && j < n){
        if(a[i] == a[j]){
            j++;
        }
        else {
            cnt++;
            i++;
            j++;
        }
    }
    cout << cnt << endl;
}

