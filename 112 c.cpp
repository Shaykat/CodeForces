/*------------------------------------************************************************---------------------------*/
//************************************   Author      : ABDUL MUTALAB SHAYKAT
//************************************   University  : AIUB
//************************************   E-mail      : SHAYKAT2057@GMAIL.COM
//************************************   Problem ID  :
//************************************   Problem Name:
//************************************   Algorithm   :
/*------------------------------------************************************************---------------------------*/

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
#define EL              cout << endl

//Test Case:
#define PC(T,R)         printf("Case %d: %d",T,R);

// operations
#define pb              push_back
#define ppb             pop_back
#define mem(n, val)     memset((n), val, sizeof(n))
#define mp              make_pair
#define ff first
#define se second

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

//operator overloading
class Compare{
    public:
    bool operator()(const int& l, const int& r){
       return l > r;
   }
};

// typedef
typedef long long LL;
typedef unsigned long long ULL;
typedef pair<int, int> PII;
typedef pair<long long, long long> PLL;
typedef pair<int, string> PIS;
typedef priority_queue<int> PQ; // for max heap
typedef priority_queue<int,vector<int>, Compare > P_Q; // for min heap

// constants
const int MOD = 1000000007;
const double EPS = 1e-11;
const double INF = 2e30;
const double PI = 2 * acos( 0.0 );

// manual division
int divide(string a,int base)   {int b = a.size(),c = 0,r = 0,i = 0;
    while(i < b)    {c = c*base + a[i++]-'0';
    if(c/b > 0) {r = r*base + c/b; c = c%b;}}
    if(c == 0) return r;
    return 0;
}

bool Prime(int n){
    int sqt = sqrt(n);
    for (int i=2;i<=sqt;i++){
        if (n%i == 0)   return false;
    }
    return true;
}

// binary operations
int Bset(int N,int pos){return N=N | (1<<pos);}
int Breset(int N,int pos){return N= N & ~(1<<pos);}
bool Bcheck(int N,int pos){return (bool)(N & (1<<pos));}

/////////////////////////////////// template //////////////////////////////
string a;
int n,fr[1000010],res = 0;
queue<char>q;

int main(){
    int st = 0,ed = 0,m = 0,cnt = 0;

    cin >> n;
    cin >> a;

    int l = a.size();
    For(i,0,l-1){
        q.push(a[i]);
        if(a[i] == '1'){
            cnt++;
        }
        fr[i+1] = cnt;
    }
    if(n == 0) {
        while(!q.empty()){
            cnt = 0;
            while(!q.empty() && q.front() != '1'){
                q.pop();
                cnt++;
            }
            if(!q.empty()) q.pop();
            res += (cnt*(cnt+1))/2;
        }
        cout << res << endl;
        return 0;
    }

    while(!q.empty() && q.front() != '1'){
        q.pop();
        st++;
    }

    while(!q.empty()){
        cnt = 0,ed = 0;
        while(!q.empty() && cnt < n){
            if(q.front() == '1' ) cnt++;
            q.pop();
        }

        while(!q.empty() && q.front() != '1'){
            q.pop();
            ed++;
        }

        //cout << "st: " << st << " ed: " << ed << endl;
        if(st != 0 && cnt == n) res += st + 1 + ed*2;
        else if(cnt == n){
            res += 1 + ed;
        }
        st = ed;
    }

    cout << res << endl;

    return 0;
}
/*
10
1011110011111001100

*/

