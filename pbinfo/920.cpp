#include <bits/stdc++.h>
using namespace std;

#define ll long long

// ifstream cin("a.in");
// ofstream cout("a.out");

int n;

void cifmaxmin(int n, int &maxi, int &mini){
	if(n == 0){
		maxi = 0;
		mini = 0;
	} else {
		maxi = n%10;
		mini = n%10;
		while(n){
			if(n%10 > maxi){
				maxi = n%10;
			}
			if(n%10 < mini){
				mini = n%10;
			}
			n /= 10;
		}
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;

	return 0;
}
