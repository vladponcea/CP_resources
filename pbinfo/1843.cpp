#include <bits/stdc++.h>
using namespace std;

#define ll long long

// ifstream cin("a.in");
// ofstream cout("a.out");

int n;

int suma(int v[], int n, int i, int j){
	if(n == 0)
		return 0;
	else if(n >= i && n <= j)
		return suma(v, n-1, i, j);
	else
		return v[n] + suma(v, n-1, i, j);
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a[] = {12, 7, 6, 3, 8, 5}, n = 6, i = 2, j = 4;
	cout << suma(a, n, i, j);

	return 0;
}
