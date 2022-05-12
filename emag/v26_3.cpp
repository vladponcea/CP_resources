#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;

ifstream f("bac.in");

int cifcon(int x) {
    while(x > 9) {
        int s = 0;
        while(x) {
            s += x%10;
            x /= 10;
        }
        x = s;
    }
    return x;
}

int x, maxi, nr;
int v[(int)1e6];

int32_t main() {
    int n = 0;
    while(f >> x) {
        v[n] = x;
        n++;
    }

    for (int i = 0; i < n; i++) {
        if(v[i] > maxi) {
            maxi = v[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if(cifcon(v[i]) == cifcon(maxi))
            nr++;
    }

    cout << maxi << ' ' << nr;
}
