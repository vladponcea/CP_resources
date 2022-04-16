#include <bits/stdc++.h>
using namespace std;

#define ll long long

// ifstream cin("a.in");
// ofstream cout("a.out");

int n;

int multipluRec(int a[], int n, int k){
	if(n == 0 && a[n]%k == 0 && a[n]%10 == k)
		return 1;
	else if(a[n]%k == 0 && a[n]%10 == k)
		return multipluRec(a, --n, k)+1;
	else
		return multipluRec(a, --n, k);
}

int multiplu(int a[], int n, int k){
	int cnt = 0;
	for(int i = 0; i < n; i++){
		if(a[i]%k == 0 && a[i]%10 == k)
			cnt++;
	}
	return cnt;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n = 6, a[] = {9,273,63,83,93,123}, k = 3;
	cout << multipluRec(a, n, k);

	return 0;
}
