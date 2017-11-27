#include<bits/stdc++.h>
using namespace std;
#define s 100010
#define ll long long
ll a[s];

int main(){
    ll n,h,k,res = 0,b=0,c=0,p;

    cin >> n >> h >> k;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i< n; i++){
        p = a[i] + c;
        b = p/k;
        c = p%k;
        if(c+a[i+1] > h && i+1 < n){
            res += b+1;
            c = 0;
        }
        else{
            res += b;
        }
    }
    if(c){
        res++;
    }
    cout << res << endl;
}
