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
#define inf             1000000000000000000                                           //infinity value
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
typedef priority_queue<int> pq;

// manual division
int divide(string a,int base)   {int b = a.size(),c = 0,r = 0,i = 0;
    while(i < b)    {c = c*base + a[i++]-'0';
    if(c/b > 0) {r = r*base + c/b; c = c%b;}}
    if(c == 0) return r;
    return 0;
}

// binary operations
int Bset(int N,int pos){return N=N | (1<<pos);}
int Breset(int N,int pos){return N= N & ~(1<<pos);}
bool Bcheck(int N,int pos){return (bool)(N & (1<<pos));}
// @Shaykat@
/////////////////////////////////// template //////////////////////////////

int n;
int a[100010];
ll dp[100010][3];
string b[100010],c[100010];

string rev(string d){
    int f = d.size()-1;
    For(i,0,(f+1)/2-1){
        swap(d[i],d[f-i]);
        //cout << d[i] << " " << d[f-i] << endl;
    }
    return d;
}

ll call(int i,int p){
    if(i == n-1) return 0;
    if(dp[i][p] != -1) return dp[i][p];

    ll ret = inf, ret1 = inf;
    if(p == 0){
        if(b[i] <= b[i+1]){
            ret = min(ret,call(i+1,0));
            if(b[i] <= c[i+1]) ret1 = min(ret1,call(i+1,1)+a[i+1]);
        }
        else{
            if(b[i] <= c[i+1]) ret1 = min(ret1,call(i+1,1)+a[i+1]);
        }
    }
    else{
        if(c[i] <= b[i+1]){
            ret = min(ret,call(i+1,0));
            if(c[i] <= c[i+1]) ret1 = min(ret1,call(i+1,1)+a[i+1]);
        }
        else{
            if(c[i] <= c[i+1]) ret1 = min(ret1,call(i+1,1)+a[i+1]);
        }
    }
    //cout << ret << endl;
    return dp[i][p] = min(ret,ret1);
}
int main(){
    sf(n);
    For(i,0,n-1){
        sf(a[i]);
    }

    For(i,0,n-1){
        cin >> b[i];
        c[i] = rev(b[i]);
    }
    mem(dp,-1);
    ll res = 0;
    res = min(call(0,0),call(0,1)+a[0]);
    if(res < inf) cout << res << endl;
    else cout << -1 << endl;
}