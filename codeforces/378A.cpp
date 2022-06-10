#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int a, b, nr1 = 0, nr2 = 0, nr3 = 0;
    cin >> a >> b;
    for (int i = 1; i < 7; i++) {
        if(abs(a-i) < abs(b-i))
            nr1++;
        else if(abs(b-i) < abs(a-i))
            nr2++;
        else
            nr3++;
    }
    cout << nr1 << ' ' << nr3 << ' ' << nr2;

    return 0;
}
