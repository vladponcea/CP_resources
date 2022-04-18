#include <bits/stdc++.h>
#define sz(a) ((int)((a).size()))

using namespace std;

// ifstream cin("a.in");
// ofstream cout("a.out");

typedef long long ll;
typedef long double ld;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, a, b;
	cin >> a >> b >> n;
	int c;
	if(abs(b) > n && abs(a) <= n)
		cout << a;
	else if(abs(a) <= n && abs(b) <= n){
		cout << a << ' ' << b << ' ';
		while(abs(b) <= n){
			c = a + b;
			a = b;
			b = c;
			if(abs(b) <= n)
				cout << b << ' ';
		}
	}

	return 0;
}