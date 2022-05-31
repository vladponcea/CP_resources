#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int a, b, x = 1;
    cin >> a >> b;
    while(b--) {
        cout << a*x++ << ' ';
    }
    return 0;
}
