#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;

int nr, a, b;

int main() {
    cin >> a >> b;
    while(a <= b) {
        nr++;
        a *= 3;
        b *= 2;
    }

    cout << nr;

    return 0;
}
