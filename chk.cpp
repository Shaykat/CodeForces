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
int res[130][130];
int mx=0,n,siz,cnt,val;
map <PII,int>  mymap;
vector <int>  v;
map <char,int>  mymap1;
string temp;
int main(){
    BOOST;
    cin>>n;
    //getchar();
    FOR(l1,1,n)  {
        cnt=0;
        mymap1.clear();
        v.clear();
        cin>>temp;
        siz=temp.size();
        cout<<siz<<endl;
        FOR(i,0,siz-1)  {
            if(mymap1.find(temp[i])==mymap1.end()){
                v.PB((int)temp[i]);
                mymap1[temp[i]]=val++;
            }
        }
        cout<<v.size()<<endl;
        if(v.size()==1){
            res[v[0]][v[0]]+=siz;
            FOR(i,96,125) {
                if(res[v[0]][i]){
                    res[v[0]][i]+=siz;
                    mx=max(mx,res[v[0]][i]);
                }
                if(res[i][v[0]]){
                    res[i][v[0]]+=siz;
                    mx=max(mx,res[i][v[0]]);
                }
            }
            cout<<mx<<endl;
            //mx=max(mx,res[v[0]][1]);
        }
        if(v.size()==2) {
            //ALL(v);
            res[v[0]][v[1]]+=siz;
            res[v[1]][v[0]]+=siz;
            cout<< res[v[0]][v[1]]<<endl;
            mx=max(mx, res[v[0]][v[1]]);
            mx=max(mx, res[v[1]][v[0]]);
        }
    }
    cout<<mx<<endl;

    return 0;
}


