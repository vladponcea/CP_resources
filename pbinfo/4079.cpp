#include <bits/stdc++.h>
#define sz(a) ((int)((a).size()))

using namespace std;

ifstream f("ceas.in");
ofstream g("ceas.out");

typedef long long ll;
typedef long double ld;

int n, c, x, a, nr;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	f >> c >> x >> n;
	if(c == 1){
		for(int i = 0; i < n; i++){
			f >> a;
			if(x == 0 && a == 0){
				nr++;
			}
			while(a){
				if(a%10 == x)
					nr++;
				a /= 10;
			}
		}
		g << nr;
	} else {
		for(int i = 0; i < n; i++){
			f >> a;
			if(a > 12){
				while(a){
					if(a/10%10 == 0){
						a /= 10;
						nr++;
					} else if(a%100 > 12){
						a /= 10;
						nr++;
					} else if(a%100 <= 12 && a%100 >= 10){
						a /= 100;
						nr++;
					}
				}	
			}
		}
		g << nr;
	}


	return 0;
}