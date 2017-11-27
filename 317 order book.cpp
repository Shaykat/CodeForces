#include<bits/stdc++.h>
using namespace std;
#define s 100010
vector< pair<int,int> >B;
vector< pair<int,int> >S;
int n,d;
int e[s],f[s],g[s],h[s],sel,buy;
bool compare1(const pair<int,int>&i,const pair<int,int>&j){
    return i.first < j.first;
}
bool compare2(const pair<int,int>&i,const pair<int,int>&j){
    return i.first > j.first;
}
int main(){
    char a;
    int b,c,p,q;
    cin >> n >> d;
    for(int i = 0; i < n; i++){
        cin >> a;
        cin.ignore();
        cin >> b >> c;
        if(a == 'B'){
            B.push_back(make_pair(b,c));
        }
        else if(a == 'S'){
            S.push_back(make_pair(b,c));
        }
    }
    sort(B.begin(),B.end(),compare2);
    sort(S.begin(),S.end(),compare1);
    int k = 0;
    int j = 0;
    for(int i = 0; i < B.size();){
        p = B[i].first;
        while(p == B[i].first && i < B.size()){
            i++;
            e[k] = p;
            f[k] += B[i -1].second;
        }
        k++;
    }
    buy = k;
    k = 0;
    for(int i = 0; i < S.size();){
        p = S[i].first;
        while(p == S[i].first && i < S.size()){
            i++;
            g[k] = p;
            h[k] += S[i -1].second;
        }
        k++;
    }
    sel = k;
    if(d <= sel) sel = d;
    for(int i = sel-1; i >= 0; i--){
        cout << "S " << g[i] << " " << h[i] << endl;
    }

    if(d <= buy) buy = d;
    for(int i = 0; i < buy; i++){
        cout << "B " << e[i] << " " << f[i] << endl;
    }
}
