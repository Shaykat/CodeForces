#include<bits/stdc++.h>
using namespace std;
#define s 1010
#define ll long long
ll n,x;
int main(){
    char a;
    ll b,dis=0;

    cin >> n >> x;
    for(int i = 0; i < n; i++){
        cin >> a;
        cin >> b;
        if(a == '+'){
            x += b;
        }
        else if(a == '-'){
            if(x < b){
                dis++;
            }
            else {
                x -= b;
            }
        }
    }
    cout << x << " " << dis << endl;
}
