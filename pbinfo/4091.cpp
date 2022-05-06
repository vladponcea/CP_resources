#include <bits/stdc++.h>
#define sz(a) ((int)((a).size()))
#define char unsigned char
 
using namespace std;

ifstream f("sss.in");
ofstream g("sss.out");

typedef long long ll;
typedef long double ld;
 
int n, c, x, k;
vector<int> v;

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    

    f >> c >> n;
    f >> x;
    while(x) {
        if(x%10 != 0) {
            k = x%10;
            break;
        }
        x /= 10;
    }
    v.push_back(x);
    for (int i = 1; i < n; i++) {
        f >> x;
        v.push_back(x);
    }

    int s = 0;
    for (int i = n-1; i > n-k; i--) {
        s += v[i];
        cout << v[i] << ' '; 
    }
    cout << s;

    return 0;
}
