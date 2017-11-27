#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)

int main(){
    int d,h,v,e;
    double a,u,t,v1;

    cin >> d >> h >> v >> e;

    v1 = ((pi/4)*d*d*e);
    a = ((pi/4)*d*d*h);
    if(v <= v1){
        cout << "NO" << endl;
    }
    else {
        u = v - v1;
        t = a/u;
        cout << "YES" << endl;
        printf("%.10lf\n",t);
    }
}
