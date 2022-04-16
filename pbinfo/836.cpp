#include <bits/stdc++.h>
using namespace std;

#define ll long long

// ifstream cin("a.in");
// ofstream cout("a.out");

int n;

void afisvec(int v[], int n){
	if(n != 0){
		cout << v[--n] << ' ';
		afisvec(v, n);
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a[] = {2, 5, 4, 7}, n = 4;
	afisvec(a, n);

	return 0;
}
