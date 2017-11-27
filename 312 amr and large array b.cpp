#include<bits/stdc++.h>
using namespace std;
#define s 1000010
#define s1 100010
int a[s1];
int b[3][s];
int main(){
    memset(b,-1,sizeof(b));
    int n,p,st,ed,mx = 0,mxv = 0,mn = 10000000;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        p = a[i];
        if(p > mxv) mxv = p;
        if(b[0][p] == -1){
            b[0][p] = i;
            b[1][p] = i;
            b[2][p] = 1;
            if(b[2][p] > mx) mx = b[2][p];
            //cout << "mxs: " << mx << endl;
        }
        else{
            b[1][p] = i;
            b[2][p]++;
            if(b[2][p] > mx) mx = b[2][p];
            //cout << "mxe: " << mx << endl;
        }
    }
    //cout << mx << endl;
    for(int i = 1; i <= mxv; i++){
        if(b[2][i] == mx){
            if((b[1][i] - b[0][i]) < mn){
                st = b[0][i];
                ed = b[1][i];
                mn = b[1][i] - b[0][i];
                //cout << mn << endl;
            }
        }
    }
    cout << st+1 << " " << ed+1 << endl;
    return 0;
}
