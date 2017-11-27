#include<bits/stdc++.h>
using namespace std;

int n,m,p;
int main(){
    cin >> n >> m;

    if(n > m){
        swap(n,m);
    }
    p = 0;
    while((n > 0 && m > 1) ){
        p++;
        n -= 1;
        m -= 2;
        if(n > m) swap(n,m);
        if((n < 2 && m < 2) || (n < 1 || m < 1)) break;
    }
    cout << p << endl;
}
