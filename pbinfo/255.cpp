#include <bits/stdc++.h>
#define sz(a) ((int)((a).size()))

using namespace std;

// ifstream cin("a.in");
// ofstream cout("a.out");

typedef long long ll;
typedef long double ld;

int n;

// int solve(int n){
// 	if(n == 1 || n == 2)
// 		return 1;
// 	else
// 		return solve(n-1)+solve(n-2);
// }

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	int f = 0, f1 = 1, f2 = 1;
	for(int i = 1; i <= n; i++){
		if(i == 1 || i == 2)
			cout << 1 << ' ';
		else{
			f = f1 + f2;
			cout << f << ' ';
			f2 = f1;
			f1 = f;
		}

	}

	return 0;
}