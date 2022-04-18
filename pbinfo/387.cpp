#include <bits/stdc++.h>
#define sz(a) ((int)((a).size()))

using namespace std;

// ifstream cin("a.in");
// ofstream cout("a.out");

typedef long long ll;
typedef long double ld;

int n;

int solve(int n){
	ll s = 0;
	for(int i = 1; i*i <= n; i++){
		if(n%i == 0){
			if(i%2 == 0)
				s += i;
			if(n/i%2 == 0)
				s += n/i;
		}
		if(i*i == n && i%2 == 0)
			s -= i;
	}
	return s;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	cout << solve(n);

	return 0;
}