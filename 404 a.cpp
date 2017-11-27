#include<bits/stdc++.h>
using namespace std;

int n,res = 0;

int main(){
    string a;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a;
        if(a == "Tetrahedron"){
            res += 4;
        }
        if(a == "Cube"){
            res += 6;
        }
        if(a == "Octahedron"){
            res += 8;
        }
        if(a == "Dodecahedron"){
            res += 12;
        }
        if(a == "Icosahedron"){
            res += 20;
        }
    }

    cout << res << endl;
}
