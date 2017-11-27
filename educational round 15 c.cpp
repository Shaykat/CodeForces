#include<bits/stdc++.h>
using namespace std;

// input output
#define pf           printf
#define sf(n)        scanf("%d", &n)
#define sfl(n)       scanf("%lld", &n)
#define sfc(n)       scanf("%c", &n)
#define sff(a,b)     scanf("%d %d", &a, &b)
#define sffll(n,m)    scanf("%lld%lld", &n, &m)
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

// functions
bool compare(const pair<int,int>&i,const pair<int,int>&j)   {  return i.first < j.first;   }
string To_Upper(string a)   {   for(int i = 0;i < a.size()-1;i++){  if(islower(a[i])) a[i] = toupper(a[i]); } return a; }

// @Shaykat@
/////////////////////////////////// template //////////////////////////////


ll n,m;
ll a[100010],b[100010];

bool check(ll u){
    ll lb = 0,pl = 0,p = 0,q = 0;
    while(lb < m){
        while(pl < n && a[pl] >= b[lb]-u && a[pl] <= b[lb]+u){
            pl++;
        }
        if(pl >= n) break;
        lb++;
    }
    if(pl == n) {
        return true;
    }
    return false;
}

int main(){
    sffll(n,m);
    For(i,0,n-1){
        sfl(a[i]);
    }
    For(i,0,m-1){
        sfl(b[i]);
    }
    ll high = 10000000100,low = 0;
    ll x = 0,mid;
    while(high >= low){
        mid = (low+high)/2;
        if(check(mid)) {
            x = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    cout << x << endl;

}
