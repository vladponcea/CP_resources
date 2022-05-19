#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ifstream f("bac.txt");

int main() {
    int x, y, z, ok = 0;
    f >> x >> y;
    if(x >= y)
        cout << x << ' ';
    while(f >> z) {
        if(y >= x) {
            cout << y << ' ';
            ok = 1;
        }
        if(y == x && ok) {
            cout << y << ' ';
            ok = 0;
        }
        x = y;
        y = z;
    }

    return 0;
}
