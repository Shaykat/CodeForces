#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,a,b,r;

    cin >> n;
    a = n/3;
    b = n%3;

    if(b == 0){
        r = a*2;
    }
    else{
        r = a*2+1;
    }

    cout << r << endl;

}
