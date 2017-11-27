#include<bits/stdc++.h>
using namespace std;

int n,k,cnt = 0;
int main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> k;
        if(k == 0) cnt++;
    }

    if((cnt == 1 && n > 1) || (n == 1 && cnt == 0)) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
