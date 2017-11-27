#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,a,b,p,q,c,d,e,f,g,res=0,lcm;
ll gcd(ll a,ll b){
    if(b%a == 0) return a;
    gcd(b%a,a);
}
int main(){
    cin >> n >> a >> b >> p >> q;
    c = n/a;
    d = n/b;
    lcm = (a*b)/gcd(a,b);
    e = n/lcm;
    f = c*p + (d-e)*q;
    g = (c-e)*p + d*q;
    res = max(f,g);
    cout << res << endl;
    //cout << "Hello" << endl;
}
