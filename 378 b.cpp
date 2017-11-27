#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n;
ll a[100010];
ll l = 0,r = 0,f = 0,m = 0,p = 0,x = 0,y= 0;
int main(){

    cin >> n;
    for(int i = 0; i < n; i++){
        int c, d;
        cin >> c >> d;
        l += c;
        r += d;
        if(c != d){
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n;
ll a[100010],s[100010],t[100010];
ll l = 0,r = 0,f = 0,m = 0,p = 0,x = 0,y= 0;
int main(){
    int c,d;
    cin >> n;
    for(int i = 0; i < n; i++){

        cin >> c >> d;
        s[i] = c;
        t[i] = d;
        l += c;
        r += d;
    }
    ll b = abs(l-r);
    //cout << l << " " << r << " " << b << endl;
    for(int i = 0; i < n; i++){
        ll u =0, v = 0;
        u = l - s[i];
        u += t[i];
        v = r - t[i];
        v += s[i];
        //cout << b << " " << abs(u-v) << endl;
        if(abs(u-v) > b){
            b = abs(u-v);
            p = i;
            f = 1;
        }
    }
    if(f == 0) cout << 0 << endl;
    else cout << p+1 << endl;
    return 0;
}

            f = 1;
        }
        if(c <= d)x++;
        if(c >= d)y++;
        a[i] = abs(c-d);
        if(a[i] > m){
            m = a[i];
            p = i;
        }
    }
    ll b = abs(c-d);
    for(int i = 0; i < n; i++){
        ll u =0, v = 0;

    }
    //cout << x << y << n <<  endl;
    if(f == 0 || x == n || y == n) cout << 0 << endl;
    else cout << p+1 << endl;
    return 0;
}
