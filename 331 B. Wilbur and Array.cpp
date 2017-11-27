#include<bits/stdc++.h>
using namespace std;
#define s 200010
#define ll long long
ll a[s];

int main(){
    ll n,cnt = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    ll  p = 0;
    for(int i = 0; i < n; i++){
        cnt += abs(a[i] - p);
        p = a[i];
    }
    cout << cnt << endl;
}
