#include<bits/stdc++.h>
using namespace std;

int main(){

    int r,a,l,t,o;
    string b;
    scanf("%s",&b);
    cout<<b<<endl;
    l = b.size();
    t = b[l-1] - '0';
    o = b[l-2] - '0';
    if((t%2 == 0) && (o == 4 || o == 8 || o == 0)){
        a = 0;
    }
    else if((t%2 == 1) && (o == 2 || o == 6)){
        a = 0;
    }
    if(a == 0){
        r=4;
        cout << r << endl;
    }
    else{
        r = 0;
        cout << r << endl;
    }
}
