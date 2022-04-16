#include <bits/stdc++.h>
using namespace std;

#define ll long long

// ifstream cin("a.in");
// ofstream cout("a.out");

int n;

void F(int n, int a[10], int &k){
	k = 0;
	int ok = 0;
	for(int i = 0; i < n; i++){
		if(a[i] % 2 == 0){
			ok = 1;
			k = k*10 + a[i];
		}
	}
	if(ok == 0)
		k = -1;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a[] = {2, 3, 5, 6, 4, 1}, k;
	n = 6;
	F(n, a, k);
	cout << k << '\n';

	return 0;
}
