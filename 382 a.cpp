#include<bits/stdc++.h>
using namespace std;

int n,k;
string a;

int main(){
    cin >> n >> k;
    cin >> a;
    int st = 0,p;
    for(int i = 0; i < n; i++){
        if(a[i] == 'G'){
            st = i;
            break;
        }
    }
    p = st;
    int flag = 0;
    while(st < n && a[st] != 'T'){
        if(a[st+k] == '#'){
            flag = 1;
            break;
        }
        else if(a[st+k] == 'T'){
            flag = 2;
            break;
        }
        st += k;
    }
    if(flag == 2){
        cout << "YES" << endl;
        return 0;
    }
    else{
        while(p >= 0 && a[p] != 'T'){
            if(a[p-k] == '#'){
                flag = 1;
                break;
            }
            else if(a[p-k] == 'T'){
                flag = 2;
                break;
            }
            p -= k;
        }
        if(flag == 2) cout << "YES" << endl;
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
