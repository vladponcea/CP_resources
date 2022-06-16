#include <bits/stdc++.h>
#define sz(a) ((int)((a).size()))
#define char unsigned char

using namespace std;

typedef long long ll;
typedef long double ld;


int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, a[7];
    cin >> n;
    for (int i = 0; i < 7; i++) {
        cin >> a[i];
    }
    
    int j = 0;
    int x = a[0];
    while(x < n) {
        j++;
        j %= 7;
        x += a[j];
    }
    cout << j+1 << '\n';
}
