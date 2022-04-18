#include <bits/stdc++.h>
using namespace std;

ifstream f("2prim.in");
ofstream g("2prim.out");

int n;

int prim(int n){
	if(n == 0 || n == 1)
		return 0;
	if(n == 2)
		return 1;
	if(n%2 == 0)
		return 0;
	for(int i = 3; i*i <= n; i+=2){
		if(n%i == 0)
			return 0;
	}
	return 1;
}

int solve(int n){
	int x, ans = 0;
	for(int i = 0; i < n; i++){
		f >> x;
		if(prim(x%100))
			ans++;
	}
	return ans;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	f >> n;
	g << solve(n);

	return 0;
}