#include<bits/stdc++.h>
using namespace std;
#define s 500050
int ar[s];
int main(){
    string a;
    int n,cnt=0;

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> ar[i];
    }
    cin >> a;

    for(int i = 0; i < n; i++){
        if(a[i] == 'B'){
            cnt += ar[i];
        }
    }
    cout << "cnt: " << cnt << endl;
    int i = 0,cntp = 0,cnts = 0,cp=0,cs=0;
    while(a[i++] != 'B' && i <= n){
        cntp++;
    }
    i = n-1;
    while(a[i--] != 'B' && i >= 0){
        cnts++;
    }
    cp = cnt;
    cs = cnt;
    for(int i = 0; i < cntp; i++){
        cp += ar[i];
        //cout << cp << endl;
    }

    for(int i = n-1; i >= (n - cnts); i--){
        cs += ar[i];
    }

    if(cp >= cs){
        //cout << cp << endl;
    }
    else {
        //cout << cs << endl;
    }
}
/*
5
5 4 3 2 1
ABBBA
*/
