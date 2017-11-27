#include<bits/stdc++.h>
using namespace std;
#define s 100010
int a[s];
int n,m,p;
int main(){
    int b,c,d;
    p = 0;
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < m; i++){
        cin >> b;
        if(b == 1){
            cin >> c >> d;
            a[c-1] = d-p;
        }
        if(b == 2){
            cin >> c;
            p += c;
        }
        if(b == 3){
            cin >> c;
            cout << a[c-1]+p << endl;
        }
    }
}
