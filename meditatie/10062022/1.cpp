#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int prim(int n) {
    for (int i = 2; i*i <= n; i++) {
        if(n%i == 0)
            return 0;
    }
    return 1;
}

void prime(int n, int &x, int &y) {
    y = n-1;
    while(prim(y) == 0)
        y--;
    x = y-1;
    while(prim(x) == 0)
        x--;
}

int main() {
    int n = 49, x, y;
    prime(n, x, y);
    cout << x << ' ' << y;
    
    return 0;
}
