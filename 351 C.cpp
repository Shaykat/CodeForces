#include<bits/stdc++.h>
using namespace std;

#define s 5005
#define ll long long
#define mx 0
#define mn 9223372036854775808
#define pb push_back
int t[s];
int f[s];
int intervel[s][s];

int main(){
    int n,p,m=mx,mv,cnt=0;
    memset(f,0,sizeof(f));
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> t[i];
        //t[i] = rand()%400;
    }

    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            int k = i;
            while(k<=j){
                p = t[k];
                f[p]++;
                if(f[p] == m && p < mv){
                    m = f[p];
                    mv = p;
                    //cnt++;
                    //cout << k << " " << f[p] << endl;
                }
                else if(f[p] > m){
                    m = f[p];
                    mv = p;
                    //cout << i << "->" << k << ": " << f[p] << endl;
                }
                k++;
            }
            memset(f,0,sizeof(f));
            intervel[i][j] = mv;
            m = 0;
            mv = 0;
        }
    }
    memset(f,0,sizeof(f));
    p = 0;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            p = intervel[i][j];
            //cout << i+1 << "->" << j+1 <<":" << p << endl;
            f[p]++;
        }
    }
    for(int i = 1; i <= n; i++){
        cout << f[i] << " ";
    }
    cout << endl;
    //cout << cnt << endl;
    //cout << intervel[1][1] << endl;
}
