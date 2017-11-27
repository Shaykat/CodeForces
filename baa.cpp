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

#define   sz 200005
int n;
char s[sz];
char t[sz];
//string s=".";
//string t=".";
string tmp1,tmp2;
vector <int> sv[sz];
vector <int> tv[sz];
vector <int> chk;
map  <pair<char, char>,int> mymap;
int val=1;
int hd,l=-1,r=-1,done;
int tsz,cnt=0;
int main(){
    BOOST;
    cin>>n;
    FOR(l1,1,n) {
        cin>>s[l1];

    }
    /*cin>>tmp1;
    s+=tmp1;
    cin>>tmp2;
    t+=tmp2;*/
    FOR(l2,1,n) {
       cin>>t[l2];
        if(s[l2]!=t[l2]  ) {
            if(mymap.find(make_pair(s[l2],t[l2]))==mymap.end()){
            sv[(int)s[l2]].PB(l2);
            tv[(int)t[l2]].PB(l2);
            chk.PB(l2);
            //mymap.insert(make_pair(s[l2],t[l2]),val++);
            mymap.insert(pair<pair<char,char> , int>(make_pair(s[l2],t[l2]),val++));
            }
            hd++;
        }

    }
    int siz=chk.size();
    //cout<<siz<<endl;
    FOR(i,0,siz-1) {
        tsz=sv[(int)t[chk[i]]].size();
        if(tsz) {
            cnt=1;
            l=chk[i];
            r=sv[(int)t[chk[i]]][0];
            FOR(j,0,tsz-1) {
            	//cout<<t[sv[(int)t[chk[i]]][j]]<<" "<<s[chk[i]]<<endl;
                if(t[sv[(int)t[chk[i]]][j]]==s[chk[i]]) {
                    r=sv[(int)t[chk[i]]][j];
                    done=1;
                    cnt=2;
                    break;
                }
            }
        }
        if(done) break;
    }
    cout<<hd-cnt<<endl;
    cout<<l<<" "<<r<<endl;
    return 0;
}

