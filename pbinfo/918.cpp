#include <bits/stdc++.h>
using namespace std;

#define ll long long

// ifstream cin("a.in");
// ofstream cout("a.out");

int n, x;

void sumcif(int n, int &x){
	if(n == 0)
		x = 0;
	else{
		sumcif(n/10, x);
		x += n%10;
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	sumcif(n, x);
	cout << x << '\n';

	return 0;
}
