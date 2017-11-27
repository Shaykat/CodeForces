
#include<bits/stdc++.h>
using namespace std;

// input output
#define pf           printf
#define sf(n)        scanf("%d", &n)
#define sfl(n)       scanf("%lld", &n)
#define sfc(n)       scanf("%c", &n)
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
typedef priority_queue<int> p_q;

// compare
// functions
string To_Upper(string a)   {for(int i = 0;i < a.size()-1;i++){  if(islower(a[i])) a[i] = toupper(a[i]); } return a; }

// manual division
int divide(string a,int base)   {int b = a.size(),c = 0,r = 0,i = 0;
    while(i < b)    {c = c*base + a[i++]-'0';
    if(c/b > 0) {r = r*base + c/b; c = c%b;}}
    if(c == 0) return r;
    return 0;
}
// @Shaykat@
/////////////////////////////////// template //////////////////////////////
#define sz 100010
int n,p = 0;
vector<int>v[sz];
vector<int>pr;
map<int,int>m;
priority_queue <pii> pq;
int main(){
    sf(n);
    For(i,0,n-1){
        sf(p);
        if(m.find(p) == m.end()){
            pr.pb(p);
        }
        m[p]++;
    }
    For(i,0,pr.size()-1){
        p = pr[i];
        pq.push(mp(m[p],p));
    }
    int r1=0,r2=0,r3=0,l = 0;
    while(pq.size() > 2){
        r1 = pq.top().se;
        m[r1]--;
        pq.pop();

        r2 = pq.top().se;
        m[r2]--;
        pq.pop();

        r3 = pq.top().se;
        m[r3]--;
        pq.pop();

        v[l].pb(r3); v[l].pb(r2); v[l].pb(r1);
        sort(v[l].begin(),v[l].end());
        l++;

        if(m[r1] > 0) pq.push(mp(m[r1],r1));
        if(m[r2] > 0) pq.push(mp(m[r2],r2));
        if(m[r3] > 0) pq.push(mp(m[r3],r3));
    }
    pf("%d\n",l);
    For(i,0,l-1){
        pf("%d %d %d\n",v[i][2],v[i][1],v[i][0]);
    }
    return 0;
}
