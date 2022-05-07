#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;


int main() {
    int x, y, n;
    cin >> x >> y >> n;
    int ore = x*y;
    cout << n/ore << '\n';
    n -= (n/ore)*ore;
    cout << n/y << '\n';
    n -= n/y*y;
    cout << n;

    return 0;
}
