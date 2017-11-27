#include<bits/stdc++.h>
using namespace std;

string a,b;

int main(){
    cin >> a >> b;
    for(int i = 0; i < a.size(); i++) a[i] = tolower(a[i]);
    for(int i = 0; i < b.size(); i++) b[i] = tolower(b[i]);
    //cout << a << endl;
    if(a > b) cout << 1 << endl;
    else if(a < b) cout << -1 << endl;
    else cout << 0 << endl;

    return 0;
}
