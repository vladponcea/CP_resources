#include <bits/stdc++.h>
#define sz(a) ((int)((a).size()))

using namespace std;

// ifstream cin("a.in");
// ofstream cout("a.out");

typedef long long ll;
typedef long double ld;

int n;
ll x, s;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	while(n){
		cin >> x;
		if(x == 1){
			cout << 1 << ' ';
		} else if(x == 2){
			cout << 4 << ' ';
		}
		int i = 1, j = 2, ok = 1;
		while(i <= j && ok){
			s += i;
			if(i == j){
				i = 1;
				j++;
			}
			if(j == x){
				cout << s << ' ';
				ok = 0;
			}
		}

		n--;
	}


	return 0;
}