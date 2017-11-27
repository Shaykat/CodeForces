#include<bits/stdc++.h>
using namespace std;
#define s 110
#define ll long long
ll n;
ll a[s];
vector<int>seg[20005];
bool check(){
    for(int i = 2; i <= n; i++){
        if(a[i] < a[i-1]) return false;
    }
    return true;
}

int st,ed,cnt=0;
int main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    st = 1;ed = 0;
    int i = 1,j = 2,k = 0;
    while(cnt <= 20000){
        if(check() == true) break;
        else {
            st = 1;
            i = 1;
            j = 2;
            while(i <= n && j <= n){
                if(a[j] < a[i]){
                    swap(a[i],a[j]);
                    i += 2;
                    j += 2;
                    if(i >= n){
                        ed = j-2;
                        if(ed > st){
                            seg[k].push_back(st);
                            seg[k++].push_back(ed);
                        }
                    }
                }
                else {
                    ed = i-1;
                    if(ed > st){
                        seg[k].push_back(st);
                        seg[k++].push_back(ed);
                    }
                    i = j;
                    j = i+1;
                    st = i;
                }
            }
        }
    }
    for(int l = 0; l < k; l++){
        cout << seg[l][0] << " " << seg[l][1] << endl;
    }
}
