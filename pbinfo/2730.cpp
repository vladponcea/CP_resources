#include <bits/stdc++.h>
using namespace std;

#define ll long long

// ifstream cin("a.in");
// ofstream cout("a.out");

int n;

#include <cstring>
int SC(char s[]){
	int sf = strlen(s);
	if(strlen(s) == 0){
		return 0;
	} else {
		if(s[sf-1] >= 48 && s[sf-1] <= 57){
			int nr = s[sf-1] - 48;
			s[sf-1] = '\0';
			return SC(s)+nr;
		} else {
			s[sf-1] = '\0';
			return SC(s);
		}
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;

	return 0;
}
