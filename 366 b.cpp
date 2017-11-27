#include<bits/stdc++.h>
using namespace std;
long long n;
long long a[100010];
long long XOR(long long a, long long b)
{
    return (a + b) % 2;
}
int main(){
    cin >> n;
    long long p = 0;
    long long q = 0;
    for(int i = 0; i < n; i++){
        cin >> p;
        if(p%2 == 0) p = 1;
        else p = 0;

        if(XOR(p,q)) cout << 1 << endl;
        else cout << 2 << endl;
        q = XOR(p,q);

    }
}
