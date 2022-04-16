#include <bits/stdc++.h>
using namespace std;

#define ll long long

// ifstream cin("a.in");
// ofstream cout("a.out");

int n;

void afisvec(int v[], int n){
	if(n != 0){
		afisvec(v, --n);
		cout << v[n] << ' ';
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n = 5, a[] = {3, 6, 5, 4, 2};
	afisvec(a, n);

	return 0;
}
