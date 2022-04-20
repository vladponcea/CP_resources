#include <bits/stdc++.h>
#define sz(a) ((int)((a).size()))

using namespace std;

// ifstream cin("a.in");
// ofstream cout("a.out");

typedef long long ll;
typedef long double ld;

ll n;

ll solve(ll n){
	ll s = 0;
	while(n){
		s += n*n;
		n--;
	}
	return s%10234573;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	cout << solve(n);


	return 0;
}