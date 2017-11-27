#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,k,res=0;
int main(){
    cin >> n >> k;
    res = n + (k - n%k);
    cout << res << endl;
}
