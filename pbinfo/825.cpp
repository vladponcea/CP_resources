#include <bits/stdc++.h>
using namespace std;

#define ll long long

// ifstream cin("a.in");
// ofstream cout("a.out");

int n;

int cnt = 0;
int cifmin(int n){
	if(n == 0 && cnt == 0)
		return 0;
	else if(n == 0)
		return 9;
	else{
		cnt++;
		return min(n%10, cifmin(n/10));
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;

	return 0;
}
