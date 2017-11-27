#include<bits/stdc++.h>
using namespace std;

int main(){

    string a;

    cin >> a;
    int l = a.size(),cnt = 0,st = -1,ed = 0,dif = 0;

    for(int i = 0; i < l; i++){
        if(a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U' || a[i] == 'Y'){
            dif = i - st;
            if(dif > cnt) cnt = dif;
            st = i;
        }
    }
    if(cnt == 0) {
        cout << l+1 << endl;
        return 0;
    }

    dif = l-st;
    if(dif > cnt) cnt = dif;

    cout << cnt << endl;
}
