#include<bits/stdc++.h>
using namespace std;
#define s 100010
queue<int>Q;
int a[s];
int b[s],c[s];
int n,k,p,cnt,st,ed,q;
int main(){
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cnt = 0;
    p = a[0];
    int i = 0;
    while(a[i] == p && i < n){
        b[p] = 1;
        i++;
    }
    if(i <= n && cnt < k){
        cnt++;
        c[p]++;
        Q.push(p);
        st = i;
        ed = i;
        p = a[i-1];
    }
    for(int j = i; j < n; j++){
        if(cnt >= k) break;
        ed++;
        Q.push(a[j]);
        c[a[j]]++;
        if(b[a[j]] == 1 && a[st-1] == a[j]){
            q = Q.front();
            while(c[q] > 1){
                Q.pop();
                c[q]--;
                st++;
                q = Q.front();
            }
        }
        if(a[j] != p && b[a[j]] != 1){
            cnt++;
            p = a[j];
            b[p] = 1;
        }
    }
    if(cnt == k)
    cout << st << " " << ed << endl;
    else
    cout << -1 << " " << -1 << endl;
    return 0;
}
