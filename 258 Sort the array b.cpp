#include<bits/stdc++.h>
using namespace std;
#define s 100010
int a[s];
int n;
vector<int>seg[s];
bool check(int p,int q){
    for(int i = p+1; i <= q; i++){
        if(a[i] < a[i-1]) return false;
    }
    return true;
}

int main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    int i = 1, j = 2,k = 0;
    int st = 1, ed = 1;

    if(check(1,n)) {
        cout << "yes\n" << 1 << " " << 1 << endl;
    }
    else {
        while(i <= n && j <= n){
            if(a[j] < a[i]){
                i++;
                j++;
                if(i >= n){
                    ed = i;
                    seg[k].push_back(st);
                    seg[k++].push_back(ed);
                }
            }
            else{
                ed = i;
                if(ed > st){
                    seg[k].push_back(st);
                    seg[k++].push_back(ed);
                }
                i = i+1;
                j = j+1;
                st = i;
            }
        }
        //cout << k << endl;
        if(k > 1){
            cout << "no\n";
        }
        else{
            st = seg[0][0];
            ed = seg[0][1];
            if(st > 1 && ed < n){
                if(check(1,st-1) && (a[ed] >= a[st-1]) && (a[st] <= a[ed+1]) && check(ed+1,n)){
                    cout << "yes\n" << st << " " << ed << endl;
                }
                else {
                    cout << "no\n";
                }
            }
            else if(st == 1 && ed < n){
                if((a[st] <= a[ed+1]) && check(ed+1,n)){
                    cout << "yes\n" << st << " " << ed << endl;
                }
                else {
                    cout << "no\n";
                }
            }
            else if(st > 1 && ed == n){
                if(check(1,st-1) && (a[ed] >= a[st-1])){
                    cout << "yes\n" << st << " " << ed << endl;
                }
                else {
                    cout << "no\n";
                }
            }
            else {
                cout << "yes\n" << st << " " << ed << endl;
            }
        }
    }
    return 0;
}
