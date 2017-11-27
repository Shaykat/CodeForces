#include<bits/stdc++.h>
using namespace std;
#define a 100000
int arra[a];
void sieve()
{
    int i,j;
    int sn = sqrt((double)a);
    arra[0] = 1;
    arra[1] = 1;
    arra[2] = 0;
    memset(arra,0,sizeof(arra));
    for(i=3;i<=sn;i+=2)
    {
        if(arra[i] == 0)
        {
            for(j=2*i;j<a;j+=i)
            {
                arra[j] = 1;
            }
        }
    }
}
int main(){
    sieve();
    int n;
    cin >> n;
    int arr[n];
    int ac[n+n];
    memset(ac,0,sizeof(ac));
    memset(arr,0,sizeof(arr));
    int j = 0,p,cnt = 0,fact=1;
    for(int i = 2; i <= n; i++){
        fact = i;
        if((arra[i] == 0 && i%2 == 1) || i == 2){
            while(fact <= n){
                arr[cnt++] = fact;
                fact = i*fact;

            }
        }
    }

    cout << cnt << endl;
    for(int i = 0; i < cnt; i++){
       cout << arr[i] << " ";
    }
    cout << endl;

}

