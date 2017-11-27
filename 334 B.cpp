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


int n,k;
int a[100010];

bool check(int v){
    int c = 0,i = 0,j = 0,r = 0,p = 0,s = n-1;
    s = n-1;
    p =(2*k-n);
    //cout << v << " " << p << endl;
    while(r < p && s >= 0){
        if(a[s] > v) return 0;
        else{
            c++;
            s--;
            r++;
        }
    }
    j = s;
    while(i <= j){
        if(a[i]+a[j] <= v){
            i++;
            j--;
            c++;
        }
        else if(i == j && a[i] <= v){
            i++;
            j--;
            c++;
        }
        else{
            return false;
        }
    }
    if(c <= k) return true;
    return false;
}

int main(){
    sff(n,k);
    int mx = 0;
    For(i,0,n-1){
        sf(a[i]);
        if(a[i] > mx) mx = a[i];
    }

    int high = 2*mx+10,low = 0,mid = 0,x = 0;

    while(high >= low){
        mid = (high+low)/2;
        if(check(mid)){
            x = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    cout << x << endl;
}
