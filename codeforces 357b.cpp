#include<bits/stdc++.h>
using namespace std;
int a[3] = {1234567,123456,1234};
int n,p,q,r;
int main(){
    int flag = 0;
    cin >> n;
    for(int i = 0; i <= 811; i++){
        for(int j = 0; j <= 8101; j++){
            p = a[0]*i + a[1]*j;
            if(p <= n){
                if((n- p)%a[2] == 0) {
                    cout << "Yes\n";
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 1) break;
    }
    if(flag == 0) cout << "No\n";
    return 0;
}
