#include <bits/stdc++.h>
#define sz(a) ((int)((a).size()))

using namespace std;

// ifstream cin("a.in");
// ofstream cout("a.out");

typedef long long ll;
typedef long double ld;

int a[51][51], nr;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	for(int i = 1; i <= 50; i++){
		for(int j = 1; j <= 50; j++){
			if((50*(i-1)+j)%7 == 0 || (50*(i-1)+j)%13 == 0)
				a[i][j] = 1;
			else
				a[i][j] = 0;
		}
	}

	for(int i = 1; i <= 49; i++){
		for(int j = 1; j <= 49; j++){
			if(a[i][j] == 0 && a[i][j+1] == 0 || a[i][j] == 0 && a[i+1][j] == 0){
				nr++;
			}
		}
	}
	cout << nr;	


	// for(int i = 1; i <= 50; i++){
	// 	for(int j = 1; j <= 50; j++){
	// 		cout << a[i][j] << ' ';
	// 	}
	// 	cout << '\n';
	// }



	return 0;
}