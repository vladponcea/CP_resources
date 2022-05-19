#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int x, y, z;
    cin >> x >> y;
    swap(x, y);
    cout << x << ' ' << y << ' ';
    while(x != 1) {
        z = 3*y - x;
        cout << z << ' ';
        x = y;
        y = z;
    }

    return 0;
}
