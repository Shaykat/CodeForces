#include<bits/stdc++.h>
using namespace std;

int n,m;
int a,b[110];

int main(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        cin >> a;
        b[i] = b[i-1] + a;
    }
    int p,q,res = 0;
    for(int i = 0; i < m; i++){
        cin >> p >> q;
        int tp = b[q] - b[p-1];
        if(tp >= 0) res += tp;
    }
    cout << res << endl;
}
