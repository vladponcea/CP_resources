#include <bits/stdc++.h>
using namespace std;

#define ll long long

// ifstream cin("a.in");
// ofstream cout("a.out");

int n;

int IncDecRec(int n){
	if(n < 10){
		if(n%2 == 0){
			return n+1;
		}
		else {
			return n-1;
		}
	} else {
		if(n%2 == 0){
			return IncDecRec(n/10)*10 + n%10 + 1;
		} else {
			return IncDecRec(n/10)*10 + n%10 - 1;
		}
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;

	return 0;
}
