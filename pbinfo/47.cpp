#include <bits/stdc++.h>
#define sz(a) ((int)((a).size()))

using namespace std;

// ifstream cin("a.in");
// ofstream cout("a.out");

typedef long long ll;
typedef long double ld;

int n;

int solve(int n){
	int ans = 0, nr = 0;
	for(int i = 0; ; i++){
		if(sqrt(i)*sqrt(i) == i){
			ans += i;
			nr++;
		}
		if(nr == n)
			return ans;
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	cout << "Rezultatul este " << solve(n);


	return 0;
}