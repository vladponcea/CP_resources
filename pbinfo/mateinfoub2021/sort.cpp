#include <bits/stdc++.h>
#define sz(a) ((int)((a).size()))

using namespace std;

ifstream f("sort.in");
ofstream g("sort.out");

typedef long long ll;
typedef long double ld;

int n, x, mini, ok;
vector<int> a, b, v;

int toNr(vector<int> v){
	int ans = 0, p = 1;
	for(int i = v.size()-1; i >= 0; i--){	
		ans += v[i]*p;
		p *= 10;
	}
	return ans;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	f >> n;
	
	for(int i = 0; i < n; i++){
		f >> x;
		a.push_back(x);
	}

	int aux = a[0];
	mini = a[0];
	v.clear();
	while(a[0]){
		v.push_back(a[0]%10);
		a[0] /= 10;
	}
	reverse(v.begin(), v.end());

	for(int j = 0; j < v.size(); j++) {
		int y = v[0];
		for(int i = 1; i < v.size(); i++){
			v[i-1] = v[i];
		}
		v[v.size()-1] = y;
		if(toNr(v) < mini){
			mini = toNr(v);
		}
	}
	b.push_back(mini);

	for(int i = 1; i < n; i++){
		int aux = a[i];
		v.clear();
		while(a[i]){
			v.push_back(a[i]%10);
			a[i] /= 10;
		}
		reverse(v.begin(), v.end());

		mini = 0;
		for(int j = 0; j < v.size(); j++) {
			int y = v[0];
			for(int k = 1; k < v.size(); k++){
				v[k-1] = v[k];
			}
			v[v.size()-1] = y;
			if(toNr(v) >= b[i-1]){
				if(mini && toNr(v) < mini){
					mini = toNr(v);
				} else if(!mini){
					mini = toNr(v);
				}
			}
		}
		if(mini == 0){
			g << "NU";
			return 0;
		}
		b.push_back(mini);
	}

	g << "DA" << '\n';
	for(int i = 0; i < b.size(); i++){
		g << b[i] << ' ';
	}

	return 0;
}