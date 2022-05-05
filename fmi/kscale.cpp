#include <bits/stdc++.h>
#define sz(a) ((int)((a).size()))
#define char unsigned char
using namespace std;

ifstream f("kscale.in");
ofstream g("kscale.out");

typedef long long ll;
typedef long double ld;
 
int a[100][100];

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    f >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            f >> a[i][j];
        }
    }
    
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            g << a[i][j] << ' ';
        }
        g << '\n';
    }

    return 0;
}
