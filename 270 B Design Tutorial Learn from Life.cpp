#include<bits/stdc++.h>
using namespace std;
#define s 2010
int a[s];
int n,k,cnt = 0;
bool compare(int i, int j){
    return (i > j);
}
int main(){
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a,a+n,compare);

    for(int i = 0; i < n; i += k){
        cnt += (a[i]-1)*2;
    }
    cout << cnt << endl;
}
