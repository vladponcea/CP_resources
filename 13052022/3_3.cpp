#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int x, y, z, n;
    cin >> n >> x >> y >> z;
    for (int i = n; i >= 4; i--) {
        if(i%2 == 0)
            cout << (i/2-1)*(z-x)+y << ' ';
        else
            cout << (i/2)*z - (i/2-1)*z << ' ';
    }

    cout << z << ' ' << y << ' ' << x;

    return 0;
}
