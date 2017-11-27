#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll l;
string n;
int main(){
    cin >> n;
    l = n.size();
    cout << n;
    for(int i = l-1; i >= 0; i--){
        cout << n[i];
    }
    cout << endl;
    return 0;

}
