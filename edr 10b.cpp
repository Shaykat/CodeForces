#include<bits/stdc++.h>
using namespace std;
#define s  500010
int a[s];
int cf[s];
int main(){
    int n,m;
    int cnt = 0,tcnt = 0;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    //sort(a,a+n);
    memset(cf,0,sizeof(cf));
    int p = a[0];
    for(int i = 0; i < n; i++){
        p = a[i];
        cf[p]++;
    }
    /*for(int j = 1; j <= m; j++){
        cout << cf[j] << endl;
    }*/
    for(int i = 1; i < m; i++){
        for(int j = i+1; j <= m; j++){
            tcnt += cf[j];
            //cout << tcnt << endl;
        }
        tcnt *= cf[i];
        cnt += tcnt;
        tcnt = 0;
    }
    cout << cnt << endl;

}
