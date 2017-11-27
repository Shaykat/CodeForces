#include<bits/stdc++.h>
using namespace std;
#define s 1010
int a[s];

int main(){
    int n,h,res=0;

    cin >> n >> h;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        if(a[i] > h){
            res += 2;
        }
        else {
            res++;
        }
    }
    cout << res << endl;
}
