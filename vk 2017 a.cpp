#include<bits/stdc++.h>
using namespace std;

typedef long long LL;
LL a,b;
int main(){
    cin >> a >> b;
    int cnt = 0;
    while(a <= b){
        a = a*3;
        b = b*2;
        cnt ++;
    }

    cout << cnt << endl;
}
