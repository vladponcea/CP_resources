#include <bits/stdc++.h>
using namespace std;

#define ll long long

// ifstream cin("a.in");
// ofstream cout("a.out");

int n;

int elimcif(int n, int c){
	int ans = 0, p=1;
	while(n){
		if(n%10 != c){
			ans = ans + n%10*p;
			p *= 10;
		}
		n /= 10;
	}
	return ans;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout << elimcif(2454, 4) << '\n' << elimcif(1157, 8) << '\n';

	return 0;
}
