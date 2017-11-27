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

ll n,a;
ll b[100010];

int main(){
    cin >> n >> a;
    For(i,0,n-1){
        cin >> b[i];
    }
    sort(b,b+n);
    ll res = 0,p1 = 0,p2 = 0;
    if(n > 2){
        if(a >= b[0] && a <= b[n-1]){
            if(abs(a - b[0]) < abs(b[n-1]-a)){
                if(abs(a-b[0]) < abs(b[n-2]-a)){
                    res = 2*abs(a-b[0])+abs(b[n-2]-a);
                }
                else{
                    res = abs(a-b[0])+2*abs(b[n-2]-a);
                }
            }
            else if(abs(a - b[0]) > abs(b[n-1]-a)){
                if(abs(a-b[1]) > abs(b[n-1]-a)){
                    res = abs(a-b[1])+2*abs(b[n-1]-a);
                }
                else{
                    res = 2*abs(a-b[1])+abs(b[n-1]-a);
                }
            }
            else{
                if(abs(a-b[0]) < abs(b[n-2]-a)){
                    p1 = 2*abs(a-b[0])+abs(b[n-2]-a);
                }
                else{
                    p1 = abs(a-b[0])+2*abs(b[n-2]-a);
                }

                if(abs(a-b[1]) > abs(b[n-1]-a)){
                    p2 = abs(a-b[1])+2*abs(b[n-1]-a);
                }
                else{
                    p2 = 2*abs(a-b[1])+abs(b[n-1]-a);
                }

                res = min(p1,p2);
            }

        }
        else if(a < b[0]){
            res = abs(b[n-2]-a);
        }
        else {
            res = abs(a - b[1]);
        }
    }
    if(n == 2){
        if(abs(a - b[0]) < abs(b[n-1]-a)){
          res = abs(a - b[0]);
        }
        else{
            res = abs(b[n-1]-a);
        }
    }
    cout << res << endl;
}
