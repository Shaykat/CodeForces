#include<bits/stdc++.h>
using namespace std;

int n,d;
string a[110];
int b[110];
int main(){
    cin >> n >> d;
    for(int i = 0; i < d; i++){
        cin >> a[i];
    }
    for(int i = 0; i < d; i++){
        int flag = 0;
        for(int j = 0; j < n; j++){
            if(a[i][j] == '0'){
                flag = 1;
                b[i] = 2;
                break;
            }
        }
        if(flag == 0){
            b[i] = 1;
        }
    }
    int mx = 0,k = 0,cnt = 0;
    while(k < d){
        if(b[k] == 2 && k < d){
            while(b[k] == 2 && k < d){
                k++;
                cnt++;
            }
            if(cnt > mx) {
                mx = cnt;
            }
            cnt = 0;
        }
        else {
            k++;
        }
    }
    cout << mx << endl;
    return 0;
}
