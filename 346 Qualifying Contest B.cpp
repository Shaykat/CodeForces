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
typedef pair<string, int> psi;
typedef pair<long long, long long> pll;
typedef pair<int, string> pis;
typedef priority_queue<int> pq;

bool compare(const pair<psi,int>&i,const pair<psi,int>&j){
    if(i.ff.se == j.ff.se) return i.se > j.se;
    return i.ff.se < j.ff.se;
}
// @Shaykat@
/////////////////////////////////// template //////////////////////////////

int n,m,q,r;
vector< pair<psi,int> >pr;
vector<string>res[10010];
int b[10010];
string p;
int main(){
    sff(n,m);
    For(i,0,n-1){
        cin >> p;
        sff(q,r);

        pr.pb(mp(mp(p,q),r));
    }
    sort(pr.begin(),pr.end(),compare);
    int i = 0;
    while(i < n){
        if(b[pr[i].ff.se] == 0){
            res[pr[i].ff.se].pb(pr[i].ff.ff);
            b[pr[i].ff.se] = 1;
            i++;
        }
        else if(b[pr[i].ff.se] == 1){
            if(i+1 < n && pr[i].ff.se == pr[i+1].ff.se && pr[i].se == pr[i+1].se){
                b[pr[i].ff.se] = 2;
            }
            else{
                res[pr[i].ff.se].pb(pr[i].ff.ff);
                b[pr[i].ff.se] = 2;
            }
            i++;
        }
        else{
            i++;
        }
    }
    For(i,1,m){
        if(res[i].size() == 2){
            cout << res[i][0] << " " << res[i][1] << endl;
        }
        else{
            cout << "?\n";
        }
    }
    return 0;
}
