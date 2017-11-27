#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;

#define a 10000010
int array[a];
long long tprime;
void sieve()
{
    int i,j;
    int sn = sqrt((double)a);
    array[0] = 1;
    array[1] = 1;
    array[2] = 0;
    for(i=3;i<=sn;i+=2)
    {
        if(array[i] == 0)
        {
            for(j=i*i;j<a;j+=2*i)
            {
                array[j] = 1;
            }
        }
    }
}

int main(){
    sieve();
    int n;
    int stp;
    cin >> n;

    for(int i = 0; i < n; i++){

        cin >> tprime;
        stp = sqrt(tprime);
        if(stp*stp == tprime){
            if(stp == 2){
                cout << "YES" << endl;
            }
            else if(stp%2 == 0){
                cout << "NO" << endl;
            }
            else if(stp%2 == 1 && array[stp] == 0){
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }
        else{
            cout << "NO" << endl;
        }


    }
}
