#include<bits/stdc++.h>
using namespace std;

#define s 100
#define ll long long
#define mx 0
#define mn 9223372036854775808
#define pb push_back
int t[s];
int main(){
    int m,p=0,res=0;
    cin >> m;
     for(int i = 0; i < m; i++){
        cin >> t[i];
     }
     t[m] = 90;

     for(int i = 0; i <= m; i++){
        if(t[i]-p > 15){
            res = res + 15;
            break;
        }
        else {
            res = t[i];
            p = t[i];
        }
     }
     cout << res << endl;
}
