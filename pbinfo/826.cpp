#include <bits/stdc++.h>
using namespace std;

#define ll long long

// ifstream cin("a.in");
// ofstream cout("a.out");

int n;

int cifminpar(int n){
	int mini = 10, ok = 1;
	while(n){
		if(n%2 == 0){
			ok = 0;
			if(n%10 < mini){
				mini = n%10;
			}
		}
		n /= 10;
	}
	if(ok){
		return -1;
	} else {
		return mini;
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;

	return 0;
}
