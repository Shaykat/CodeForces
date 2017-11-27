#include<bits/stdc++.h>
using namespace std;


int n,k,f = 0;
string a;
map <char, int> m;

int main()
{
    cin >> n >> k;
    cin >> a;

    int p = 0, f = 0;
    for(int i = 0; i < a.size(); i++){
        p++;
        m[a[i]]++;
        if(m[a[i]] > k){
            f = 1;
            break;
        }
        //cout << m[a[i]] << " " << a[i] << endl;
    }

    if(f == 0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}
