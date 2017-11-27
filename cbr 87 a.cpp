#include<bits/stdc++.h>
using namespace std;

int n;
int a,b,tp = 0, ts = 0;

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        tp -= a;
        tp += b;
        if(tp > ts) ts = tp;
    }
    cout << ts << endl;
    return 0;
}
