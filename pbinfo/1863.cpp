#include <bits/stdc++.h>
using namespace std;

#define ll long long

// ifstream cin("a.in");
// ofstream cout("a.out");

int n;

int numarare(int v[100], int n){
	int cnt = 0;
	for(int i = 0; i < n-1; i++){
		if(v[i] == v[i+1]){
			cnt++;
		}
	}
	return cnt;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a[] = {5, 6, 6, 3, 5, 5}, n = 6;
	cout << numarare(a, n) << '\n';

	return 0;
}
