#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n,p;

    cin >> n;

    p = n%4;
    if(n == 0){
        cout << 1 << endl;
        return 0;
    }
    if(p == 0) cout << 6 << endl;
    else if(p == 1) cout << 8 << endl;
    else if(p == 2) cout << 4 << endl;
    else if(p == 3) cout<< 2 << endl;

    return 0;
}
