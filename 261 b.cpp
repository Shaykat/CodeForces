#include<bits/stdc++.h>
using namespace std;
#define s 200010
#define ll long long
ll a[s];

int main(){
    ll n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a,a+n);

    ll low,up,nway,mdiff;

    if(a[0] != a[n-1]){
        low = upper_bound(a,a+n,a[0]) - lower_bound(a,a+n,a[0]);
        up = upper_bound(a,a+n,a[n-1]) - lower_bound(a,a+n,a[n-1]);
        nway = up * low;
    }
    else {
        nway = n*(n-1)/2;
    }


    mdiff = a[n-1] - a[0];
    cout << mdiff << " " << nway << endl;
}
