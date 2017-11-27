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
//int res[130][130];
string str[2][105];
int maxsiz[105];
string tmp;
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
        str[0][l1]=temp;
        siz=temp.size();
        FOR(i,0,siz-1)  {
            if(mymap1.find(temp[i])==mymap1.end()){
                v.PB((int)temp[i]);
                mymap1[temp[i]]=val++;
            }
        }
        if(v.size()==2) {
            sort(ALL(v));
            tmp+=(char)v[0];
            tmp+=(char)v[1];
            str[1][l1]=tmp;
             /*FOR(i,1,l1) {
                if(str[1][i]==tmp) {
                    maxsiz[i]+=siz;
                }
                else{
                    if(str[1][i].size()==1  &&  (str[1][i][0]==tmp[0] || str[1][i][0]==tmp[1])){
                         maxsiz[i]+=siz;
                    }
                }
             }*/
             tmp.clear();

        }
        if(v.size()==1) {
            tmp+=(char)v[0];
            str[1][l1]=tmp;
            //cout<<"baal"<<tmp<<endl;
               /*FOR(j,1,l1) {
                if(str[1][j]==tmp) {
                    maxsiz[j]+=siz;
                }
                else{
                    if(str[1][j].size()==2  &&  (str[1][j][0]==tmp[0] || str[1][j][1]==tmp[0])){
                         maxsiz[j]+=siz;
                    }
                }
             }*/
             tmp.clear();
        }
    }
    int sum=0;
    FOR(l2,1,n) {
        sum=0;
        tmp=str[1][l2];
        //cout<<str[0][l2]<<" ";
        FOR(l2,1,n) {
            if(str[1][l2].size()) {
                if(tmp==str[1][l2]) {
                    sum+=str[0][l2].size();
                }
                else if(tmp.size()!=str[1][l2].size() && tmp.size()==1  && (tmp[0]==str[1][l2][0] ||tmp[0]==str[1][l2][1])){
                    sum+=str[0][l2].size();
                }
                else if(tmp.size()!=str[1][l2].size() && tmp.size()==2  && (tmp[0]==str[1][l2][0] ||tmp[1]==str[1][l2][0])){
                    sum+=str[0][l2].size();
                }
            }
        }
           cout<<sum<<endl;
            mx=max(sum,mx);
    }
    cout<<mx<<endl;

    return 0;
}


