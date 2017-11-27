#include<bits/stdc++.h>
using namespace std;
#define mx 1000010
int a[mx];
int main(){
    int n,k;
    int sum = 0,r;

    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int p;
    for(int i = 1; i <= n; i++){
        sum += i;
        if(sum >= k){
            p = i;
            break;
        }
    }
    r = sum - k;
    r += 1;
    //cout << r << endl;
    cout << a[p-r] << endl;
}
