#include <bits/stdc++.h>
using namespace std;

#define ll long long

// ifstream cin("a.in");
// ofstream cout("a.out");

int n;

int cifmaxpar(int n){
	int maxi = -1;
	while(n){
		if(n%2 == 0 && n%10 > maxi){
			maxi = n%10;
		}
		n /= 10;
	}
	return maxi;
}

int cnt = 0;
int cifmaxpar2(int n){
	if(n == 0 && cnt == 0){
		return -1;
	} else if(n%2 == 0) {
		return max(n%10, cifmaxpar2(n/10));
	} else {
		return cifmaxpar2(n/10);
	}
}


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout << cifmaxpar2(2165) << '\n';

	return 0;
}
