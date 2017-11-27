#include<bits/stdc++.h>
using namespace std;

long long n,m;
vector<int>pr[150010];
long long visit[150010],edg = 0,nde = 0;
void dfs(int u){
    nde++;
    //cout << nde << endl;
    visit[u] = 1;

    int l = pr[u].size();
    for(int i = 0; i < l; i++){
        edg++;
        int v = pr[u][i];
        if(!visit[v]){
            dfs(v);
        }
    }
    visit[u] = 2;
}

int main(){
    cin >> n >> m;
    int a,b;
    for(int i = 0; i < m; i++){
        cin >> a >> b;
        pr[a].push_back(b);
        pr[b].push_back(a);
    }

    long long r = 0,f = 0;

    for(int i = 1; i <= n; i++){
        nde = 0, edg = 0, r = 0;
        if(!visit[i]){
            dfs(i);
            r = (nde-1)*(nde);
            r = r/2;
            edg /= 2;
            //cout << nde << " " << edg << " " << r << endl;
            if(edg != r){
                f = 1;
            }
        }
        if(f) break;
    }
    if(f){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }

    return 0;
}
