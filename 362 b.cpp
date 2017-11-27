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

ll p,q,r,sz,t;
string st;
char ex[20],res[1000000];
int main(){
    cin >> st;
    sz = st.size()-1;
    int i = 0;
    while(st[i] != '.'){
        i++;
    }
    p = i;
    i = 0;
    while(st[i] != 'e'){
        i++;
    }
    q = i-1;
    r = q - p;
    int m = 0;
    for(int j = i+1; j <= sz; j++){
        ex[m++] = st[j];
    }
    ex[m] = '\0';
    int n = atoi(ex);
    m = 0;
    //cout << n << endl;
    if(n == 0){
        for(int j = 0; j <= q; j++){
            res[m++] = st[j];//cout << st[j];
        }
        res[m] = '\0';
        for(int j = m-1; j >= 0; j--){
            if(res[j] != '0') {
                p = j;
                //cout << p << endl;
                break;
            }
        }
        //cout << p << endl;
        if(res[p] == '.') p--;
        q = 0;
    }
    else if(n <= r){
        for(int j = 0; j <= q; j++){
            if(j == p+n && j != q){
                 res[m++] = st[j];//cout << st[j] << '.';
                 res[m++] = '.';
                 continue;
            }
            if(st[j] == '.') continue;
            else res[m++] = st[j];//cout << st[j];
        }
        res[m] = '\0';
        for(int j = m-1; j >= 0; j--){
            if(res[j] != '0') {
                p = j;
                //cout << p << endl;
                break;
            }
        }
        if(res[p] == '.') p--;
        q = 0;
        //cout << endl;
    }
    else {
        t = n - r;
        for(int j = 0; j <= q+t; j++){
            if(st[j] == '.') continue;
            if(j > q) res[m++] = '0'; //cout << '0';
            else res[m++] = st[j];//cout << st[j];
        }
        res[m] = '\0';
        p = m-1;
        //cout << endl;
        for(int j = 0; j < m; j++){
            if(res[j] != '0') {
                q = j;
                //cout << p << endl;
                break;
            }
        }
        if(res[q] == '.'){
            res[q-1] = '0';
            q--;
        }
    }
    // cout << p << q << endl;
    for(int j = q; j <= p; j++){
        cout << res[j];
    }
    cout << endl;

}
