#include<bits/stdc++.h>
using namespace std;

map<string,int>mymap;
int n,v = 5,res;
string a;
int main(){
    string b;
    cin >> n;
    cin >> a;
    for(int i = 0; i < n; i++){
        b = a[i];
        if(!mymap[b]){
            mymap[b] = v++;
        }
    }
    if(n < 27){
        res = n - mymap.size();
    }
    else{
        res = -1;
    }

    cout << res << endl;
    return 0;
}
