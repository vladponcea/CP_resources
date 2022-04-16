#include <bits/stdc++.h>
using namespace std;

// ifstream cin("a.in");
// ofstream cout("a.out");

int n;

long long nroot(int n, long long x){
	return round(pow(max(x, -x), 1.0/n));
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;


	return 0;
}