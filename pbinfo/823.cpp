#include <bits/stdc++.h>
using namespace std;

#define ll long long

// ifstream cin("a.in");
// ofstream cout("a.out");

int n;

int sumcif(int n){
	if(n <= 0)
		return 0;
	return n%10+sumcif(n/10);
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;

	return 0;
}
