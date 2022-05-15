#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    ll x;
    int nr = 0;
    cin >> x;
    while(x) {
        if(x%10 == 4 || x%10 == 7)
            nr++;
        x /= 10;
    }
    if(nr == 4 || nr == 7) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
