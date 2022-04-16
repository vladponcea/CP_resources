#include <bits/stdc++.h>
using namespace std;

#define ll long long

// ifstream cin("a.in");
// ofstream cout("a.out");

int n;

int suma(int v[], int n){
	if(n == 0){
		return 0;
	}
	return suma(v, n-1)+v[n-1];
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int v[] = {12, 7, 6, 3, 8, 5}, n = 6;
	cout << suma(v, n);

	return 0;
}
