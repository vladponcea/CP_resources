#include <bits/stdc++.h>
#define sz(a) ((int)((a).size()))

using namespace std;

// ifstream cin("a.in");
// ofstream cout("a.out");

typedef long long ll;
typedef long double ld;

int n;

void solve(int n){
	if(n%2 == 1){
		int k = (n+1)/2;
		while(n){
			cout << k << ' ';
			k++;
			n--;
		}
	} else {
		cout << "NU ESTE NOROCOS";
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	solve(n);


	return 0;
}