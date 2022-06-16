#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void rest(int x, int y, int n, int &k) {
    for (int i = n; i >= 0; i--) {
        if(i%x == 2 && i%y == 2) {
            k = i;
            return;
        }
    }
    k = 0;
}

int main() {
    int x = 10, y = 101, n = 3000, k = 0;
    rest(x, y, n, k);
    cout << k << '\n';

    return 0;
}
