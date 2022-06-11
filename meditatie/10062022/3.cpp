#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int t, nr, p, v[101], maxi, nrp;

ifstream f("cheltuieli.in");

int main() {
    while(f >> t >> nr >> p) {
        v[t] = nr*p;
        if(v[t] > maxi) {
            maxi = v[t];
            nrp = 1;
        }
        else if(v[t] == maxi) {
            nrp++;
        }
    }
    cout << maxi << ' ' << nrp;

    return 0;
}
