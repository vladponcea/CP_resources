#include <bits/stdc++.h>
#define sz(a) ((int)((a).size()))

using namespace std;

// ifstream cin("a.in");
// ofstream cout("a.out");

typedef long long ll;
typedef long double ld;

int n;

ll solve(int n){
	int i = 1;
	ll ans = 1;
	while(n){
		ans *= i;
		i += 2;
		n--;
	}
	return ans;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	cout << solve(n);


	return 0;
}