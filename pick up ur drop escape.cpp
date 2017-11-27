#include<bits/stdc++.h>

using namespace std;

#define PF           printf
#define SF(n)        scanf("%d", &n)
#define SFF(a,b)     scanf("%d %d", &a, &b)
#define SFFF(a,b,c)  scanf("%d %d %d", &a, &b, &c)
#define INF_I        2147483647    //max limit
#define INF          1999999999
#define PB           push_back
#define MEM(n, val)  memset((n), val, sizeof(n))
#define F            first
#define S            second
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define ROF(i, a, b) for(int i = a; i >= b; i--)
#define ALL(c)       c.begin(), c.end()
#define BOOST        std::ios_base::sync_with_stdio(false);
#define INP          freopen("in.txt", "r", stdin);
#define OUT          freopen("out.txt", "w", stdout);
#define MP           make_pair
#define INIT_RAND    srand(time(NULL))
#define MOD          1000000007
#define A_SZ         1000000

typedef long long LL;
typedef unsigned long long ULL;
typedef pair<int, int> PII;
typedef pair<long long, long long> PLL;
typedef priority_queue<int> P_Q;
typedef stringstream SS;
#define    sz 22
int n,k,cnt;
int ar[sz];
int mx;
vector <int> s;
         if(pos==n) {
    if(a.size()==k) {
        int temp=0;
        FOR(i,0,k-1){
        //cout<<" "<<a[i];
        temp=temp ^ a[i];
        }
       // cout<<endl;
         mx=max(mx,temp);
    }
    return;

   }

   if(a.size()<k){
    rec(pos+1,a);
   a.PB(ar[pos]);
   rec(pos+1,a);
   }

}
int main(){
    BOOST;
    int ts;
    cin>>ts;
    FOR(l1,1,ts) {
    MEM(ar,0);
    mx=-INF;
    cin>>n>>k;
    FOR(l1,0,n-1) {
        cin>>ar[l1];
    }
     rec(0, s);
    cout<<mx<<" "<<cnt<<endl;
    s.clear();
    }



    return 0;
}
/*


*/




