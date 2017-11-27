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
#define     sz  1005
char a[sz][sz];
int b[sz][sz];
int n,m,fl,tt;
vector<PII>nde;
int main()  {
  BOOST;
  cin>>n>>m;
  FOR(l1,1,n) {
        FOR(l2,1,m) {
            cin>>a[l1][l2];
            if(a[l1][l2]   =='*') {
                    nde.PB(MP(l1,l2));
                    tt++;
                    /*if(l1==l2){
                        tt++;
                    }*/
                b[l1][m+1]++;
                b[n+1][l2]++;
            }
        }
  }
  //cout<<tt<<endl;

  int r,c;
   FOR(l1,1,n) {
        FOR(l2,1,m) {
            //cout << l1 << " " << l2 << " " << b[l1][m+1]+b[n+1][l2] << " " << a[l1][l2] <<endl;
            if(((b[l1][m+1]+b[n+1][l2]) > tt && (a[l1][l2] == '*')) || ((b[l1][m+1]+b[n+1][l2]) >= tt && (a[l1][l2] == '.')) || (b[l1][m+1]>=tt)  || (b[n+1][l2]>=tt)) {
                    //cout<<l1<<" "<<l2<<" "<<b[l1][m+1]+b[n+1][l2]<<" "<<b[l1][m+1]<<" "<<b[n+1][l2]<<endl;
                    if(nde.size() == 2){
                        if(nde[0].F != nde[1].F && nde[0].S != nde[1].S){
                            r = nde[0].F;
                            c = nde[1].S;
                            fl = 1;
                            break;
                        }
                        else{
                            fl=1;
                            r=l1;
                            c=l2;
                        break;
                        }
                    }
                    else{
                        fl=1;
                        r=l1;
                        c=l2;
                        break;
                    }
            }
        }
        if(fl == 1){
            break;
        }
  }
  if(fl == 1){
        cout<<"YES"<<endl;
        cout<<r<<" "<<c<<endl;
  }
  else{
    cout<<"NO"<<endl;
  }

    return 0;
}
