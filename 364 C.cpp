
#include<bits/stdc++.h>
using namespace std;

// input output
#define pf           printf
#define sf(n)        scanf("%d", &n)
#define sfl(n)        scanf("%lld", &n)
#define sfc(n)        scanf("%c", &n)
#define sff(a,b)     scanf("%d %d", &a, &b)
#define sfff(a,b,c)  scanf("%d %d %d", &a, &b, &c)
#define INP          freopen("in.txt", "r", stdin);  // file input
#define OUT          freopen("out.txt", "w", stdout);  // file output

// operations
#define pb           push_back
#define mem(n, val)  memset((n), val, sizeof(n))
#define mp           make_pair
#define ff first
#define se second

// constant
#define MOD          1000000007
#define inf   1<<30                                           //infinity value
#define eps   1e-9

// Loop
#define For(i, a, b) for(int i = a; i <= b; i++)
#define Ror(i, a, b) for(int i = a; i >= b; i--)
#define all(v)       v.begin(), v.end()

// functions
#define gcd(a,b)     ll _gcd(int a,int b){ if(b%a == 0) return a; _gcd(b%a,a); }
#define lcm(a,b)     ((a*b)/gcd(a,b))

// binary tree || segment tree
#define cnd          tr[idx]
#define lnd          tr[idx << 1]
#define rnd          tr[lnd + 1]
#define leftcl       lnd,st,mid
#define rightcl      rnd,mid+1,ed

// typedef
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;
typedef pair<int, string> pis;
typedef priority_queue<int> pq;

// @Shaykat@
/////////////////////////////////// template //////////////////////////////

#define sz 100010
int a[sz],b[sz],c[sz];
int n,cnt=0;
char ch;
int main(){
    sf(n);
    For(i,0,n-1){
        cin >> ch;
        a[i] = (int)ch;
        if(c[a[i]] == 0) cnt++;
        c[a[i]] = 1;
    }
    mem(b,-1);
    int p = a[0],flag = 0,st = 0, ed = 0;
    For(i,0,n-1){
        cout << b[a[i]] << endl;
        if(a[i] != p && flag == 0){
            st = i-1;
            ed = i;
            flag = 1;
        }
        else if(b[a[i]] == -1 && flag == 1){
            ed = i;
        }
        else if(b[a[i]] != -1 && flag && a[i] == a[st]){
            if(ed - st > (i-b[a[st+1]])){
                //cout << "hdh: " << a[st+1] << " " << b[a[st+1]] << endl;
                st++;
                while(b[a[st]] == b[a[st+1]]){
                    st++;
                }
                ed = i;
            }
        }
        p = a[i];
        b[p] = i;
    }
    cout << (ed - st)+1 << endl;
}
/*
9
bcccaacbe
*/
