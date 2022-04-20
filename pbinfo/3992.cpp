#include <bits/stdc++.h>
#define sz(a) ((int)((a).size()))

using namespace std;

// ifstream cin("a.in");
// ofstream cout("a.out");

typedef long long ll;
typedef long double ld;

int n;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	int x, nr = 0;
	while(n){
		cin >> x;
		if(x >= 10 && x <= 99)
			nr++;
		n--;
	}
	cout << nr;


	return 0;
}