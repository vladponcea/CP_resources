#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int v[10];

int main() {
    int x, i = 0;
    cin >> x;
    while(x) {
        v[i++] = x%10;
        x /= 10;
    }

    for (int i = 9; i >= 0; i--) {
        if(v[i])
            cout << v[i] << ' ';
    }

    return 0;
}
