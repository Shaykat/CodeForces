#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,a,b,c;

int main(){
	cin >> n >> a >> b >> c;
	ll tmp;
	if((n+1)%4 == 0) {
		tmp = 1;
	}
	else if((n+2)%4 == 0){
		tmp = 2;
	}
	else if((n+3)%4 == 0){
		tmp = 3;
	}
	else {
		tmp = 0;
	}
	//cout << tmp << endl;
	if(tmp == 0) cout << 0 << endl;
	else if(tmp == 1) {
        if(a <= b+c && a <= 3*c) cout << a << endl;
        else if(b+c <= a && b+c <= 3*c) cout << b+c << endl;
        else cout << 3*c << endl;
	}
	else if(tmp == 2){
		if(2*a <= b && 2*a <= 2*c) cout << 2*a << endl;
		else if(2*c <= 2*a && 2*c <= b) cout << 2*c << endl;
		else cout << b << endl;
	}
	else {
		if(3*a <= c && 3*a <= a+b) cout << 3*a << endl;
		else if(a+b <= c && a+b < 3*a) cout << a+b << endl;
		else cout << c << endl;
	}
	return 0;
}
