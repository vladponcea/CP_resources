#include <bits/stdc++.h>
using namespace std;

#define ll long long

// ifstream cin("a.in");
// ofstream cout("a.out");

int n, k, c;

int cnt = 0;
void cnt_cif(int n, int k, int &x){
	if(n == 0 && cnt == 0 && k == 0)
		x = 1;
	else if(n == 0){
		x = 0;
	} else {
		cnt++;
		if(n % 10 >= k){
			cnt_cif(n/10, k, x);
			x++;
		} else {
			cnt_cif(n/10, k, x);
		}
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> k;
	cnt_cif(n, k, c);
	cout << c;

	return 0;
}
