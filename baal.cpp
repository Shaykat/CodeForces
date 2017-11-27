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
#define    sz 100005
  //for graph
LL n, d,sum=0,mx;
struct  inp{
    LL money;
    LL factor;
};

bool compare(inp A,inp B)  {
    return A.money<B.money;
}

int main(){
    BOOST;
    inp  in[sz];
    cin>>n>>d;
    FOR(l1,0,n-1)  {
        cin>>in[l1].money>>in[l1].factor;
    }
    sort(in,in+n,compare);
    /*cout << endl << "Sorted List:" << endl;
    for( int i = 0; i < n; i++ ) {
        cout << in[i].money << " " << in[i].factor << endl;
    }
    cout << endl;*/
    int p1=0,p2=0,cnt=0;
    while(p1<n)  {
         cnt=0;
        while(p2<n  && (in[p2].money -in[p1].money)<d)  {
            sum+=in[p2].factor;
            p2++;
            cnt++;
            //cout<<"sum "<<sum <<"cnt "<<cnt<<endl;
            //cout<<in[p2].money -in[p1].money<<endl;
        }
        mx=max(mx,sum);
        sum-=in[p1].factor;
        p1++;
        //if(p1)
    }
    cout<<mx<<endl;
    return 0;
}
