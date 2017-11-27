#include<bits/stdc++.h>
using namespace std;

// input output
#define pf              printf
#define sf(n)           scanf("%d", &n)
#define sfl(n)          scanf("%lld", &n)
#define sfc(n)          scanf("%c", &n)
#define sff(a,b)        scanf("%d %d", &a, &b)
#define sfff(a,b,c)     scanf("%d %d %d", &a, &b, &c)
#define INP             freopen("in.txt", "r", stdin);  // file input
#define OUT             freopen("out.txt", "w", stdout);  // file output

// operations
#define pb              push_back
#define ppb             pop_back
#define mem(n, val)     memset((n), val, sizeof(n))
#define mp              make_pair
#define ff first
#define se second

// constant
#define MOD             1000000007
#define inf             1<<30                                           //infinity value
#define eps             1e-9

// Loop
#define For(i, a, b)    for(int i = a; i <= b; i++)
#define Ror(i, a, b)    for(int i = a; i >= b; i--)
#define all(v)          v.begin(), v.end()

// functions
#define gcd(a,b)        ll _gcd(int a,int b){ if(b%a == 0) return a; _gcd(b%a,a); }
#define lcm(a,b)        ((a*b)/gcd(a,b))

// binary tree || segment tree
#define cnd             tr[idx]
#define lnd             tr[idx << 1]
#define rnd             tr[lnd + 1]
#define leftcl          lnd,st,mid
#define rightcl         rnd,mid+1,ed

// compare
// functions
#define cmpr            bool compare(const pair<int,int>&i,const pair<int,int>&j)   {return i.first < j.first;}
#define tostring(a)     string To_Upper(string a)   {for(int i = 0;i < a.size()-1;i++){  if(islower(a[i])) a[i] = toupper(a[i]); } return a; }

// typedef
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;
typedef pair<int, string> pis;
// @Shaykat@
/////////////////////////////////// template //////////////////////////////

ll n,m,k;
vector<ll>g[100010];
map<pii,ll>pq;
ll s[100010];
ll sp[100010];

int main(){
    ll a,b,c;
    cin >> n >> m >> k;

    For(i,0,m-1){
        cin >> a >> b >> c;
        if(pq.find(mp(a,b)) == pq.end() || pq.find(mp(b,a)) == pq.end()) {
            pq[mp(a,b)] = c;
            pq[mp(b,a)] = c;
        }
        else {
            if(pq[mp(a,b)] > c){
                pq[mp(a,b)] = c;
                pq[mp(b,a)] = c;
            }
        }
        g[a].pb(b);
        g[b].pb(a);
    }
    ll mn = 100000000000000;
    if(k > 0){
        For(i,0,k-1){
            cin >> s[i];
            sp[s[i]] = 1;
        }
        For(i,0,k-1){
            c = s[i];
            int p = g[c].size();
            For(j,0,p-1){
                ll u = g[c][j];
                if(sp[u] == 0){
                    if(pq[mp(s[i],u)] < mn) mn = pq[mp(s[i],u)];
                }
            }
        }
        if(mn < 100000000000000) cout << mn << endl;
        else cout << -1 << endl;
    }
    else{
        cout << -1 << endl;
    }
}
