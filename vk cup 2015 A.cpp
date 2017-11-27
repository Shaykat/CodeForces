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

bool compare(const pair<int,int>&i,const pair<int,int>&j){
    return i.first < j.first;
}
string To_Upper(string a){
    for(int i = 0; i < a.size(); i++){
        if(islower(a[i])) a[i] = toupper(a[i]);
    }
    return a;
}
// @Shaykat@
/////////////////////////////////// template //////////////////////////////

#define sz 210
int n;
map<string,int>m;
vector<int>G[210];
int level[2010],visited[2010];
int BFS(int src)
{
    queue<int>Q;
    Q.push(src);
    int u,v;
    visited[src] = 1;
    level[src] = 0;
    while(!Q.empty())
    {
        u = Q.front();
        for(int i=0;i<G[u].size();i++)
        {
            v = G[u][i];
            if(!visited[v])
            {
                visited[v] = 1;
                level[v] = level[u] + 1;
                Q.push(v);
            }
        }
        Q.pop();
    }
    return level[u];
}

int main(){
    string p,q,r;
    int v = 1,ml = 0;
    sf(n);
    For(i,0,n-1){
        cin >> p >> r >> q;
        p = To_Upper(p);
        q = To_Upper(q);
        if(m.find(q) == m.end()) m[q] = v++;
        if(m.find(p) == m.end()) m[p] = v++;
        G[m[p]].pb(m[q]);
        G[m[q]].pb(m[p]);
    }


    int l;
    For(i,1,v-1){
        if(!visited[i]){
            l = BFS(1);
            if(l > ml) ml = l;
            //cout << l << endl;
        }
    }
    cout << ml+1 << endl;
}

