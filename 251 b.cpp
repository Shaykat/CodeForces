#include<bits/stdc++.h>
using namespace std;
#define s 100010
#define ll long long
int  a[s];

int main(){
    ll n,x,mtime=0;

    cin >> n >> x;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a,a+n);
    for(int i = 0; i < n; i++){
        mtime += a[i]*x;
        if(x == 1){
            x = 1;
        }
        else {
            x--;
        }
    }
    cout << mtime << endl;
}
