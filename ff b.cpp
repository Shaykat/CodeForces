#include<bits/stdc++.h>
using namespace std;

using namespace std;
int wc[30];

int main(){
    int k;
    string a;

    cin >> a;
    cin >> k;
    for(int i = 0; i < 26 ; i++){
        cin >> wc[i];
    }
    int p,cnt = 0;
    for(int i = 0; i < a.size(); i++){
        p = a[i] - 97;
        cnt += (i+1)*wc[p];
    }
    sort(wc,wc+26);
    //cout << wc[25] << endl;
    for(int i = a.size(); i < k+a.size(); i++){
        cnt += (i+1)*wc[25];
        //cout << cnt << endl;
    }
    cout << cnt << endl;
}
