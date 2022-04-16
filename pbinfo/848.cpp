#include <bits/stdc++.h>
using namespace std;

#define ll long long

ifstream f("paranteze1.in");
ofstream g("paranteze1.out");

int n, ok, k;
string s;
	

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	f >> n;
	while(n){
		f >> s;
		k = 0;
		ok = 1;
		for(int i = 0; i < s.size() && ok; i++){
			if(s[i] == '(')
				k++;
			else if(s[i] == ')' && k == 0)
				ok = 0;
			else 
				k--;
		}
		if(ok && k == 0)
			g << 1 << '\n';
		else 
			g << 0 << '\n';
		n--;
	}

	return 0;
}
