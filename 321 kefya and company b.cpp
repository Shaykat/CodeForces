#include<bits/stdc++.h>
using namespace std;
#define s 100010
#define ll long long
vector< pair<int,int> >v;
ll n,d;
bool compare(const pair<int,int>&i,const pair<int,int>&j){
    return i.first < j.first;
}
int main(){
    ll a,b,factor,diff,p,mxf,j,m;
    cin >> n >> d;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(),v.end(),compare);
    diff = 0;
    mxf = 0;
    j = 1;
    int i = 0;
    factor = v[0].second;
    m = v.size();
    while(i < m){
        p = v[i].first;
        while(j < m && (v[j].first - p) < d){
            if(j < m){
                b = v[j].second;
                factor += b;
                j++;
            }
        }
        if(factor > mxf) mxf = factor;
        factor -= v[i].second;
        i++;
        if(j > m) break;
    }
    cout << mxf << endl;
}
