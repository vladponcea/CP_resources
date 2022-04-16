#include <bits/stdc++.h>
using namespace std;

#define ll long long

// ifstream cin("a.in");
// ofstream cout("a.out");

int n;

int cnt = 0;
int nr_cif_zero(int n){
	if(n == 0 && cnt == 0)
		return 1;
	else if(n == 0)
		return 0;
	else {
		cnt++;
		if(n%10 == 0)
			return nr_cif_zero(n/10)+1;
		else
			return nr_cif_zero(n/10);
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;

	return 0;
}
