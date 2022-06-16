#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int n, nr5, nr3;

int main() {
    cin >> n;
    for (int i = 0; i < 15; i++) {
        if(i%5 == 0)
            nr5++;
        if(i%3 == 0)
            nr3++;
    }

    nr3 /= 2;

    cout << min(nr5, nr3) << '\n';

    return 0;
}
