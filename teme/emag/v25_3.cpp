#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
ifstream f("bac.in");

int32_t main() {
    int x, y, nr = 0, maxi = 0;
    f >> x;
    while(f >> y) {
        if(x%2 != y%2) {
            nr++;
        } else if(x%2 == y%2 && nr != 0) {
            if(nr > maxi) {
                maxi = nr;
            }
            nr = 0;
        }
        x = y;
    }

    cout << ++maxi;
}
