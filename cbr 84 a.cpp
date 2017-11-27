#include<bits/stdc++.h>
using namespace std;
//long long a;
string a;
int main(){
    int flag = 0,ld = 0;
    cin >> a;
    /*while(a)*/for(int i = 0; i < a.size(); i++){
        //long long p = a%10;
        //a = a/10;
        int p = a[i] - '0';
        //cout << p << endl;
        if(p == 4 || p == 7){
            ld++;
        }
    }
    if(ld == 4 || ld == 7) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}
