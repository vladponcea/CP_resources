#include <bits/stdc++.h>
using namespace std;

#define ll long long

// ifstream cin("a.in");
// ofstream cout("a.out");

int x, y;

int cmmdc(int a, int b){
	if(a > b){
		return cmmdc(a-b, b);
	} else if(b > a){
		return cmmdc(a, b-a);
	}
	return a;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> x >> y;
	cout << cmmdc(x, y);


	return 0;
}
