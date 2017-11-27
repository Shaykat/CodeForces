#include<bits/stdc++.h>
using namespace std;
#define s 100010
int a[s];
int mx,mn,dif = 0,mxl=0,st, ed, l,n;
int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int flag = 0,j=1;
    for(int i = 0; i < n; ){
        dif = mx - mn;
        st = i;
        ed = i;
        j = 1;
        l = 0;
        mx = 0;
        mn = 1000000000;
        while(i-j >= 0 && abs(a[i] - a[i-j]) <= 1) {
            if(a[i-j] >= a[i]){
                mx = a[i-j];
                mn = a[i];
                dif = mx - mn;
            }
            if(a[i-j] <= a[i]){
                mx = a[i];
                mn = a[i-j];
                dif = mx -mn;
            }
            st = i-j;
            j++;
        }
        while(dif <= 1 && i < n){
            if(a[i] >= mx) mx = a[i];
            if(a[i] <= mn) mn= a[i];
            dif = mx - mn;
            if(dif <= 1){
                ed++;
                i++;
            }
        }
        l = ed - st;
        //cout << ed << " " << st << endl;
        if(l > mxl) mxl = l;
    }
    cout << mxl << endl;
}
/*
5
1 2 3 3 2
*/
