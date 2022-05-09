#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;


int main() {
    int t;
    cin >> t;
    while(t) {
        ll a, b, c, d, k;
        cin >> a >> b >> c >> d >> k;
        ll x, y;
        x = a/c;
        if(a%c != 0)
            x++;
        y = b/d;
        if(b%d != 0)
            y++;

        if((x+y) > k)
            cout << -1 << '\n';
        else
            cout << x << ' ' << k-x << '\n';

        t--;
    }

    return 0;
}
