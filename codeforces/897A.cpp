#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int n, m, l, r;
string s;
char c1, c2;

int32_t main() {
    cin >> n >> m >> s;
    for (int i = 0; i < m; i++) {
        cin >> l >> r >> c1 >> c2;
        for (int i = l-1; i <= r-1; i++) {
            if(s[i] == c1) {
                s[i] = c2;
            }
        }
    }

    cout << s;
}
