#include<bits/stdc++.h>
using namespace std;
#define ld long double

int n,n1,n2;
int a[100010];
int main(){
    cin >> n >> n1 >> n2;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a,a+n);

    int p = min(n1,n2);
    int q = max(n1,n2);

    int i = 1, j = 1;
    ld sum1 = 0.0, sum2 = 0.0;
    while(i <= p){
        sum1 += a[n-i++];
    }
    while(j <= q){
        sum2 += a[n-i++];
        j++;
    }

    sum1 = sum1/p;
    sum2 = sum2/q;

    cout << fixed << setprecision(8) << sum1+sum2 << endl;

    return 0;
}
