#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll n;
ll x,y,z, a,b,c;
int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x >> y >> z;
        a += x;
        b += y;
        c += z;
    }
    if(!a && !b && !c){
        cout << "YES\n";
    }
    else cout << "NO\n";

    return 0;
}
