#include<bits/stdc++.h>
using namespace std;

#define s 1010
#define ll long long
#define mx 0
#define mn 9223372036854775808
#define pb push_back
vector<int>v[s];
int a[s];
int b[s];
int c[s];
int n,k;

bool compare(const pair<int,int>p1,const pair<int,int>p2){
    return p1.second < p2.second;
}
int main(){
    int low,up,d=0,p,r,vp;

    cin >> n >> k;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }

    for(int i = 0; i < n; i++){
        c[i] = b[i]/a[i];
        vp = a[i] - b[i]%a[i];
        v[i].pb(vp);
        v[i].pb(c[i]);
    }
    sort(c,c+n);
    vector<int> ::iterator it,ite;
   // iterator it = v.begin();
    //iterator ite = v.end();
    sort(v.begin(),v.end());
    p = c[0];
    r = p;
    /*while(1){
        low = lower_bound(c,c+n,p) - c;
        up = upper_bound(c,c+n,p) - c;
        d += up - low;
        if(k-d == 0){
            r = r+1;
            break;
        }
        else if(k-d < 0 ){
            r = r;
            break;
        }
        else{
            r = r+1;
        }
        k -= d;
        if(d < n){
            p = c[d];
        }
        cout << p << " " << d << endl;
    }*/
    cout << v[0][1] << endl;
}
