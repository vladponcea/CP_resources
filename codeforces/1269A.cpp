#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
bool bun(int x) {
    for (int i = 2; i < x; i++) {
        if(x%i == 0)
            return 1;
    }
    return 0;
}

int32_t main() {
    int n, a = 1, b = 1;
    cin >> n;
    while((bun(a) == 0 || bun(b) == 0) && a-b != n) {
        if(bun(a) == 0)
            a++;
        else if(bun(b) == 0)
            b++;
    }

    cout << a << ' ' << b;
}
