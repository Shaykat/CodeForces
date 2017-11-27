#include<bits/stdc++.h>
using namespace std;

string st;
int i,j,k,f=0;
int main(){
    cin >> st;
    i = 0;
    j = st.size()-1;
    for(;i<=j;i++,j--){
        if(((st[i] == st[j]) && (st[i] =='A' || st[i]=='H'|| st[i]=='I' || st[i]=='M' || st[i]=='O' || st[i]=='o' || st[i]=='T' || (st[i] >='U' && st[i]<='Y') || (st[i] >='v' && st[i]<='x')))||((st[i]!=st[j]) && ((st[i]=='b'&& st[j]=='d')||(st[i]=='d'&&st[j]=='b')|| (st[i]=='p'&& st[j]=='q')||(st[i]=='q'&&st[j]=='p')))){
            f=0;
            //cout << st[i] << endl;
        }
        else{
            f=1;
            cout << "NIE\n";
            return 0;
        }
    }
    cout << "TAK\n";
    return 0;
}
