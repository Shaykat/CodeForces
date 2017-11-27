#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int minhd,maxhd,h,d;
    cin >> n;
    h = n/7;
    d = n%7;
    if(d > 5){
        minhd = h*2 + (d - 5);
    }
    else {
        minhd = h*2;
    }
    if(d <=2){
        maxhd = h*2 + d;
    }
    else {
        maxhd = h*2 + 2;
    }

    cout << minhd << " " << maxhd << endl;

    return 0;

}
