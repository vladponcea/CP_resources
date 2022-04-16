#include <bits/stdc++.h>
using namespace std;

#define ll long long

// ifstream cin("a.in");
// ofstream cout("a.out");

int x, y, ans;

void cmmdc(int a, int b, int &x){
	if(a > b)
		cmmdc(a-b, b, x);
	else if(b > a)
		cmmdc(a, b-a, x);
	else 
		x = a;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> x >> y;
	cmmdc(x, y, ans);
	cout << ans << '\n';

	return 0;
}
