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
#define    siz 100005
string  s;
int sz;

int row,col;
int dp[10][10],ts;

int func(int i,int j) {
    if(i>=1   && i<=row && j>=1 && j<=col){
        if(i==row  && j==col)  return 1;
        if(dp[i][j]!=-1)  return dp[i][j];
        return dp[i][j]=func(i,j+1)+func(i+1,j);
    }
    else{
    return 0;
    }
}
int main(){
    BOOST;
    cin>>ts;
    FOR(l1,1,ts)  {
        MEM(dp,-1);
        cin>>row>>col;
        cout<<func(1,1)<<endl;
    }


    return 0;
}
/*
6

3 6 50

2 5 30

2 4 300

1 2 100

1 3 200

*/



