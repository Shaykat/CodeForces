#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[100010],b,c[100010];
int n,k;

int main(){
    cin >> n >> k;

    for(int i = 1; i <= n; i++){
        cin >> a[i];
        c[a[i]]++;
        //b[i] = a[i]^k;
    }
    ll ans = 0;
    for(int i = 1; i <= n; i++){
        b = a[i]^k;
        if(c[b] > 0) ans += c[b];
        c[a[i]]--;
        //cout << b[i] << endl;
    }
    cout << ans << endl;
}
