#include <bits/stdc++.h>
using namespace std;

#define ll long long

// ifstream cin("a.in");
// ofstream cout("a.out");

int n, nr;

void nr_cif_zero(int n, int &nr){
	nr = 0;
	if(n == 0)
		nr++;
	while(n){
		if(n%10 == 0)
			nr++;
		a /= 10;
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	nr_cif_zero(n, nr);
	cout << nr;


	return 0;
}
