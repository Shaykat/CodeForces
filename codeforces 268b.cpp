#include<bits/stdc++.h>
using namespace std;

int p,q,l,r;
int a,b,c,d,e[2010];
vector<int>t;

int main(){
    memset(e,0,sizeof(e));
    cin >> p >> q >> l >> r;
    for(int i = 0; i < p; i++){
        cin >> a >> b;
        for(int j = a; j <= b; j++){
            e[j] = 1;
        }
    }
    for(int i = 0; i < q; i++){
        cin >> c >> d;
        for(int j = c; j <= d; j++){
            t.push_back(j);
        }
    }
    int cnt = 0,x,y,s;
    s = t.size();
    for(int i = l; i <= r; i++){
        for(int j = 0; j < s; j++){
            x = t[j]+i;
            //cout << "x: " << x << "e: " << e[x] << endl;
            if(e[x] == 1){
                //cout << "x: " << x << "i: " << i << endl;
                cnt++;
                break;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
/*
5 2 27 452
148 154
421 427
462 470
777 786
969 978
245 247
313 322

1 6 364 421
649 688
31 39
438 441
516 524
609 615
708 710
850 851

*/
