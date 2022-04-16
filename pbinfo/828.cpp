#include <bits/stdc++.h>
using namespace std;

#define ll long long

// ifstream cin("a.in");
// ofstream cout("a.out");

int n;

int mp(int x){
	if(x >= 12){
		return x-1;
	} else {
		return mp(mp(x+2));
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;

	return 0;
}
