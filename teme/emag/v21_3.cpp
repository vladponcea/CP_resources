#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
ifstream f("bac.in");

int x, y, nr, maxi, ok;

int32_t main() {
    f >> x;
    while(f >> y) {
        if(x/10%10 == y/10%10 && !ok) {
            ok = 1;
            nr++;
        } else if(x/10%10 == y/10%10 && ok) {
            nr++;
        } else if(x/10%10 != y/10%10 && ok) {
            if(nr > maxi) {
                maxi = nr;
            }
            nr = 0;
        }
        x = y;
    } 
    cout << ++maxi;
}
