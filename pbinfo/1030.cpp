#include <bits/stdc++.h>
#define sz(a) ((int)((a).size()))

using namespace std;

// ifstream cin("a.in");
// ofstream cout("a.out");

typedef long long ll;
typedef long double ld;

int n;
vector<int> v;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	int x, s1 = 0, s2 = 0;
	for(int i = 1; i <= n; i++){
		cin >> x;
		v.push_back(x);
	}
	for(int i = 1; i <= n; i++){
		if(i <= n/2)
			s1 += v[i];
		else
			s2 += v[i];
	}
	cout << s1*s2;

	return 0;
}