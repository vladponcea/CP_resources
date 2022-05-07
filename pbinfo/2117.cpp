#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
ifstream f("divizori2.in");
ofstream g("divizori2.out");

int p, n, x, ok;
vector<int> v;

bool prim(int n) {
    for (int i = 2; i*i <= n; i++) {
        if(n%i == 0)
            return 0;
    }
    return 1;
}

int32_t main() {
    f >> p >> n;
    if(p == 1) {
        int maxi = 0;
        for (int i = 0; i < n; i++) {
            f >> x;
            if(x > maxi) {
                maxi = x;
            }
        }
        
        for (int i = 1; i <= maxi; i++) {
            if(maxi%i == 0) {
                g << i << ' ';
            }
        }
    } else if(p == 2) {
        for (int i = 0; i < n; i++) {
           f >> x;
           if(prim(x)) {
               g << x << ' ';
               ok = 1;
           }
        }

        if(!ok)
            g << -1;
    }
}
