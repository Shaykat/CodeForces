#include<bits/stdc++.h>
using namespace std;
#define s 100010
queue<int>Q;
int a[s];
int b[s];
int n,p,q,r;
int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a,a+n);
    for(int i = 0; i < n; i++){
        p = a[i];
        if(i == 0) q = 0;
        else q = a[i-1];
        if(p-q > 1) a[i] = q+1;
    }
    cout << a[n-1]+1 << endl;

}
