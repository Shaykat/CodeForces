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

#define sz 2010
map<string,int>m;
vector< pii >res;
int sted[2][sz];
int par[sz];
string mk[sz];
int n;

bool compare(const pair<int,int>&i,const pair<int,int>&j){
    return i.first < j.first;
}


int main(){
    string p,q;
    int v = 1;
    sf(n);

    For(i,0,n-1){
        cin >> p >> q;
        if(m.find(p) == m.end()){
            m[p] = v;
            mk[v++] = p;
        }
        if(m.find(q) == m.end()) {
            m[q] = v;
            mk[v++] = q;
        }

        if(par[m[p]] == 0){
            par[m[p]] = m[p];
            par[m[q]] = m[p];
        }
        else{
            par[m[q]] = par[m[p]];
        }
    }

    /*For(i,1,2*n){
        cout << mk[i] << " \n";
    }
    cout << endl;*/

    For(i,1,v-1){
        res.pb(mp(par[i],i));
    }

    int cnt = 0;
    For(i,0,res.size()-1){
        if(sted[0][res[i].ff] == 0){
            sted[0][res[i].ff] = res[i].se;
            cnt++;
        }
        else{
            sted[1][res[i].ff] = res[i].se;
        }
    }

    cout << cnt << endl;
    For(i,1,v-1){
        if(sted[0][i] != 0){
            //cout << res[sted[0][i]].se << endl;
            cout << mk[sted[0][i]] << " " << mk[sted[1][i]] << endl;
        }
    }
    return 0;
}
