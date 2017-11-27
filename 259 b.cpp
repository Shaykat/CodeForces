#include<bits/stdc++.h>
using namespace std;
#define s 100010
#define FOR(i,j,k) for(i = j; i < k; i++)
#define REV(i,j) for(i = j-1; i >= 0; i--)

int a[s];

int main(){
    int n,p,q=0,r,cnt=0,flag = 0;
    int i,j,k;

    cin >> n;
    FOR(i,0,n){
        cin >> a[i];
    }
    p = s;
    REV(i,n){
        if(a[i] <= p){
            cnt++;
        }
        else if(a[i] > p){
            cout << q << endl;
            q = i-1;
            break;
        }
        p = a[i];
    }
    p = a[n-1];
    //cout << p << " " << q << endl;
    for(i = 0; i < q; i++){
        if(a[i] < p){
            //cout << "flag" << endl;
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        cout << -1 << endl;
    }
    else {
        if(q == 0){
            cout << 0 << endl;
        }
        else{
            cout << cnt << endl;
        }
    }

}
