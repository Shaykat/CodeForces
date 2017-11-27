#include<bits/stdc++.h>
using namespace std;
string a,b,c;
map<char,int>mp;
map<char,int>mf;
int v = 1;
int main(){
    cin >> a >> b >> c;
    int la = a.size(), lb = b.size(), lc = c.size();
    if(la + lb != lc) cout << "NO\n";
    else{
        for(int i = 0; i < la; i++){
           mp[a[i]]++;
        }
        for(int i = 0; i < lb; i++){
           mp[b[i]]++;
        }
        for(int i = 0; i < lc; i++){
           mf[c[i]]++;
        }
        int flag = 0;
        for(int i = 0; i < lc; i++){
            if(mp[c[i]] != mf[c[i]]){
                flag = 1;
                break;
            }
        }
        //cout << mp.size() << " " << mf.size() << endl;
        if(!flag){
            cout << "YES\n";
        }
        else cout << "NO\n";
    }
    return 0;
}
