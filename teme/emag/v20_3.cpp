#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
ifstream f("numere.in");
int x, y, nr, k=1, a, b, ok, maxi;

int32_t main() {
    f >> x;
    while(f >> y) {
        if(y-x == k && !ok) {
            nr++;
            k++;
            ok = 1;
            a = x;
        } else if(y-x == k && ok){
            nr++;
            k++;
        } else if(y-x != k && ok) {
            if(nr > maxi) {
                maxi = nr;
                b = x;
            }
            ok = 0;
            nr = 0;
            k = 1;
        }
        x = y;
    }
    k = 1;
    x = a;
    while(x <= b) {
        cout << x << ' ';
        x += k;
        k++;
    }
}
