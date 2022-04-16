#include <bits/stdc++.h>
using namespace std;

// ifstream cin("a.in");
// ofstream cout("a.out");

int n;

int multipli(int a, int b, int c){
	while(a%c != 0)
		a++;
	while(b%c != 0)
		b--;
	return (b-a)/c + 1;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;


	return 0;
}