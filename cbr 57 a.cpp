#include<bits/stdc++.h>
using namespace std;

string a,b;
int main(){
    cin >> a >> b;
    int l = a.size();
    for(int i = 0; i < l; i++){
        if(a[i] == b[i]) cout << 0;
        else cout << 1;
    }
    cout << endl;

    return 0;
}
