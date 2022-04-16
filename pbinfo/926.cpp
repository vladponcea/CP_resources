#include <bits/stdc++.h>
using namespace std;

#define ll long long

// ifstream cin("a.in");
// ofstream cout("a.out");

int n;

int sum3(int v[], int n){
	if(n == 0){
		return 0;
	}
	else if(v[n-1]%3 == 0){
		return sum3(v, n-1)+v[n-1];
	} else {
		return sum3(v, n-1);
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;

	return 0;
}
