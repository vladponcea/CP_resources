#include <bits/stdc++.h>
using namespace std;

#define ll long long

// ifstream cin("a.in");
// ofstream cout("a.out");

int n;

void afis(){
	int x;
	cin >> x;
	if(x != 0)
		afis();
	cout << x << ' ';
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	afis();

	return 0;
}
