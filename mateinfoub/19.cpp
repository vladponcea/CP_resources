#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll f(ll a, ll b) {
    if (a == 0) {
        return 0;
    } else if(a % 1) {
        return (b+f(a^1, b))%137;
    } else {
        return f(a >> 1, b << 1);
    }
}

void g() {
    ll suma = 0;
    for(ll i = 0; i < 2LL * 1000LL * 1000LL * 1000LL; i++) {
        suma += f(i, i);
        suma %= 137;
    }
    cout << "Suma este " << suma << '\n';
}

int main() {

    g();
    return 0;
}
