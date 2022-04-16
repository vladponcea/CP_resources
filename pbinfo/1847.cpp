#include <bits/stdc++.h>
using namespace std;

#define ll long long

// ifstream cin("a.in");
// ofstream cout("a.out");

int n;

bool prim(int x){
	for(int i = 2; i <= x/2; i++){
		if(x%i == 0)
			return 0;
	}
	return 1;
}

void P(int x[], int n, int &s){
	s = 0;
	for(int i = 0; i < n; i++){
		if(prim(x[i])){
			s += x[i];
		}
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int s = 0, a[] = {12, 7, 6, 3, 8, 5}, n = 6;
	P(a, n, s);
	cout << s << '\n';

	return 0;
}
