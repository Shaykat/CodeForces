#include<bits/stdc++.h>
using namespace std;
#define s 1010
int a[s];
int n;
int main(){
    int i,j,scnt = 0,dcnt = 0;

    cin >> n;
    for(int k = 0; k < n; k++){
        cin >> a[k];
    }
    i = 0;
    j = n-1;
    int p,q,c = 0;
    while(i <= j){
        p = a[i];
        q = a[j];
        if(c%2 == 0){
            if(p > q){
                scnt += p;
                i++;
            }
            else {
                scnt += q;
                j--;
            }
            c++;
        }
        else{
            if(p > q){
                dcnt += p;
                i++;
            }
            else {
                dcnt += q;
                j--;
            }
            c++;
        }

    }
    cout << scnt << " " << dcnt << endl;
}
