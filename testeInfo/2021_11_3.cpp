#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int x, y, n, f;
    cin >> x >> y;
    n = (y-x)/2;
    f = x-2*(--n);
    cout << y << ' ' << x << ' ';
    while(f != 1) {
        cout << f << ' ';
        f -= 2*(--n);
    } 
    cout << 1;
    

    return 0;
}
