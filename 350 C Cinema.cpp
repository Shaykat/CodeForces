#include<bits/stdc++.h>
using namespace std;

#define s 200010
#define ll long long
#define mx 0
#define mn 9223372036854775808
ll a[s];
ll b[s];
ll c[s];
ll n,m;

int main(){
    ll p,q,low,high,db,dc,idx=1,mxl=mx,mxs=mx;

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> m;
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }
    for(int i = 0; i < m; i++){
        cin >> c[i];
    }

    sort(a,a+n);

    for(int i = 0; i < m; i++){
       p = b[i];
       q = c[i];

       low = lower_bound(a,a+n,p)-a;
       high = upper_bound(a,a+n,p)-a;
       db = high - low;

       low = lower_bound(a,a+n,q)-a;
       high = upper_bound(a,a+n,q)-a;
       dc = high - low;

       if(db > mxl) {
            idx = i+1;
            mxl = db;
            mxs = dc;
       }
       else if(db == mxl && dc > mxs){
           idx = i+1;
           mxl = db;
           mxs = dc;
       }
    }
    cout << idx << endl;
}
