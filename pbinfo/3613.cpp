#include <bits/stdc++.h>
using namespace std;

// ifstream cin("a.in");
// ofstream cout("a.out");

int n;

bool pp(int x){
	if(sqrt(x)*sqrt(x) == x)
		return 1;
	return 0;
}

int multiplu(int n){
	int i = 1;
	while(!pp(n*i))
		i++;
	return n*i;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;


	return 0;
}