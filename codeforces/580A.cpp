#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int n, nr = 0, maxi = 0, x, y;
    cin >> n >> x;
    for (int i = 1; i <= n-1; i++) {
        cin >> y;
        if(y >= x)
            nr++;
        else {
            if(nr > maxi) {
                maxi = nr;
            }
            nr = 0;
        }
        x = y;
    }
    if(nr > maxi)
        maxi = nr;

    cout << ++maxi;

    return 0;
}
