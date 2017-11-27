#include<bits/stdc++.h>
using namespace std;
#define s 120

int arr[s];
int clf[3][s];
int main(){
     int n,k,x;
     memset(arr,0,sizeof(arr));
     memset(arr,0,sizeof(clf));
     cin >> n >> k >> x;

     for(int i = 0; i < n; i++){
          cin >> arr[i];
     }
     int j = 0;
     int t = arr[0];
     for(int i = 0; i < n;){
         while(t == arr[i] && i < n){
               clf[0][j] = arr[i];
               clf[1][j]++;
               i++;
         }
         j++;
         t = arr[i];
     }
     // test upper code
     /*for(int i = 0; i < j; i++){
          cout << clf[1][i] << " ";
     }
     cout << endl;*/
     /*int cnt = 0,res = 0,w,z,y;
     for(int i = 0; i < j; i++){
          if(clf[0][i] == x && clf[1][i] > 1){
              cnt = 2;
              w = clf[0][i+1];
              z = clf[0][i-1];
              y = clf[1][i+1]+clf[1][i-1];

              for(int p = 1; ((w == z) && (y >= 3) && (i+p) < j && (i-p) >= 0) ; p++){
                    cnt += (clf[1][i+p]+clf[1][i-p]);
                    w = clf[0][i+p+1];
                    z = clf[0][i-p+1];
                    y = clf[1][i+p+1]+clf[1][i-p+1];
                    cout << "i-p: " << i-p << endl;
              }
              if(cnt > res) res = cnt;
              cnt = 0;
          }
          else {
               cnt = 0;
          }
     }
     cout << res << endl;*/

}
/*
50 2 1
1 1 2 2 1 2 1 1 2 2 1 2 1 2 1 1 2 2 1 2 1 2 2 1 2 1 2 1 2 2 1 1 2 2 1 1 2 2 1 2 1 1 2 1 1 2 2 1 1 2
*/
