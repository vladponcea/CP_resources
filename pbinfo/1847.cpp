#include <bits/stdc++.h>
using namespace std;

#define ll long long

// ifstream cin("a.in");
// ofstream cout("a.out");

int n;

bool prim(int x){
	int cnt = 0;
	for(int i = 2; i <= x/2; i++){
		if(x%i == 0)
			cnt++;
	}
	if(cnt == 0)
		return 1;
	else
		return 0;
}

void P(int x[], int n, int &s){
	for(int i = 0; i < n; i++){
		if(prim(i))
			s += i;
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;

	return 0;
}
