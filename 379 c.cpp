
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i, a, b)    for(int i = a; i <= b; i++)
ll n,m,k,s,x,n0,n1 = 1000000000000,n2 = 1000000000000,n12 = 1000000000000,n21 = 1000000000000;
ll a[200010],b[200010],c[200010],d[200010];
int main(){
    ll p = 0,q = 0,r = 0,t = 0;
    cin >> n >> m >> k;
    cin >> x >> s;
    n0 = x*n;
    For(i,0,m-1){
        cin >> a[i];
    }
    For(i,0,m-1){
        cin >> b[i];
        if(b[i] <= s){
            if(a[i]*n < n1){
                n1 = a[i]*n;
                r = a[i];
                t = b[i];
            }
        }
    }
    For(i,0,k-1){
        cin >> c[i];
    }
    For(i,0,k-1){
        cin >> d[i];
        if(d[i] <= s){
            if((n-c[i])*x < n2) {
                n2 = (n-c[i])*x;

                p = c[i];
                q = d[i];
            }
        }
    }

    if(p == 0 && q == 0 && r == 0 && t == 0){
        cout << n0 << endl;
    }
    else{
        ll lo = 0, hi= k-1,mid,ans = -1,ts,tans= 0,mans = 0;

        for(int i = 0; i < m; i++){
            if(b[i] <= s){
                ts = s - b[i];
                while(lo <= hi){
                    mid = (lo+hi)/2;
                    if(d[mid] <= ts){
                        ans = mid;
                        lo = mid+1;
                    }
                    else{
                        hi = mid-1;
                    }
                }
                tans = (n-c[ans])*b[i];
                n12 = min(n12,tans);
            }
        }
        ll temp1 = min(n1,n0);
        ll temp2 = min(n2,n12);
        temp1 = min(temp1,temp2);
        cout << temp1 << endl;
    }



}
