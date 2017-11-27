 #include<bits/stdc++.h>
 using namespace std;
 #define s 110
 int a[s],b[s],c[s];
 int n,m;
 int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> m;
    for(int j = 0; j < m; j++){
        cin >> b[j];
    }
    sort(a,a+n);
    sort(b,b+m);
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j  = 0; j < m; j++){
            if(c[j] == 0 && abs(a[i]-b[j]) < 2){
                cnt++;
                c[j] = 1;
                break;
            }
        }
    }
    cout << cnt << endl;
 }
