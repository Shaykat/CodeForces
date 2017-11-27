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
template <class T>
inline std::string to_string (const T& t)
{
    std::stringstream ss;
    ss << t;
    return ss.str();
}

typedef long long LL;
typedef unsigned long long ULL;
typedef pair<int, int> PII;
typedef pair<long long, long long> PLL;
typedef priority_queue<int> P_Q;
typedef stringstream SS;

#define   sz 100005
int s_sum[sz];
//char a[sz];
string s="-";
string tmp;
int n,m;
int l,r;
int main(){
    BOOST;
    cin>>tmp;
    s+=tmp;
    int siz=s.size();
    FOR(l1,1,siz-1)  {
        s_sum[l1]=s_sum[l1-1];
        if(s[l1]==s[l1-1]){
            s_sum[l1]++;
        }
    }
    /*FOR(l1,1,siz-1)  {
        cout<<s_sum[l1]<<"  ";
    }*/
    cout<<endl;
    cin>>m;
    FOR(l2,1,m)  {
        cin>>l>>r;
        cout<<s_sum[r]-s_sum[l]<<endl;
    }



}
