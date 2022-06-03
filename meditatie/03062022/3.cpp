#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ifstream f("bac.txt");

int main() {
    int n, v[(int)1e4];
    f >> n;
    for (int i = 0; i < n; i++) {
        f >> v[i];
    }
    int x, y, nr = 0;
    while(f >> x >> y) {
        if(x > v[n-1] || y < v[0])
            nr++;
        else {
            int st = 0, dr = n-1, mij, ok = 0;
            while(st <= dr && ok == 0) {
                mij = (st+dr)/2;
                if(y == v[mij])
                    ok = 1;
                else if(y > v[mij])
                    st = mij+1;
                else
                    dr = mij-1;
            }    
            if(ok == 0) {
                if(v[dr] < x) {
                    nr++;
                }
            }
        }
    }

    return 0;
}
