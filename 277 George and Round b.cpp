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
typedef priority_queue<int> pq;

// functions
bool compare(const pair<int,int>&i,const pair<int,int>&j){  return i.first < j.first;   }
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
#define sz 3010
#define sz1 1000010

int a[sz],b[sz];
int falg[sz1];
int n,m;
int main(){
    int cnt = 0;
    sff(n,m);
    For(i,0,n-1){
        sf(a[i]);
    }
    For(i,0,m-1){
        sf(b[i]);
    }
    sort(a,a+n);
    sort(b,b+m);

    int i = 0, j = 0;
    while(i < n){
        while(j < m && a[i] > b[j]){
            j++;
        }
        if(a[i] <= b[j]){
            cnt++;
            i++;
            j++;
        }
        if(j >= m) break;
    }

    cout << n - cnt << endl;
}
