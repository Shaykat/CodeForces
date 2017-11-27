#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[10];
int main(){
    ll n,m,cnt = 0,cntp=0,p,q;
    cin >> n >> m;
    if(n > m){
        swap(n,m);
    }
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= m; j++){
            if((i+j)%5 == 0){
                //cout << i+j << endl;
                a[i]++;
                cntp++;
            }
        }
    }
    cnt = (n/5)*cntp;
    p = n%5;
    for(int i = 1; i <= p; i++) cnt += a[i];

    cout << cnt << endl;
    return 0;
}

