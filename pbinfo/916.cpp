#include <bits/stdc++.h>
using namespace std;

#define ll long long

// ifstream cin("a.in");
// ofstream cout("a.out");

int n, f;

void factorial(int n, int &f){
	if(n == 0)
		f = 1;
	else{
		factorial(n-1, f);
		f *= n;
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	factorial(n, f);
	cout << f;

	return 0;
}
