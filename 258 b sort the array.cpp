#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
#define s 100010
int a[s];

int main(){
    int n,flag,p,q;
    flag = 0;

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 1; i<n; i++){
        if(a[i] > a[i-1] && flag == 0){
            flag = 0;
        }
        else if(a[i] < a[i-1] && flag == 0){
            flag = 1;
            p =i-1;
        }
        else if(a[i] < a[i-1] && flag == 1){
            flag = 1;
        }
        else if( a[i] > a[i-1] && flag == 1){
            flag = 2;
            q = i-1;
            if(a[i] < a[p]){
                flag = 3;
                break;
            }
        }
        else if(a[i] < a[i-1] && flag == 2){
            flag = 3;
            break;
        }
    }

    if(flag == 2){
        cout << "yes" << endl;
    }
    else if(flag == 3){
        cout << "no" << endl;
    }
    else if(flag == 0){
         cout << "yes" << endl;
    }
    else if(flag == 1){
        cout << "yes" << endl;
    }
}
