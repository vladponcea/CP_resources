#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int cmd(int x) {
    for (int i = 2; i <= x; i++) {
        if(x%i == 0)
            return i;
    }
    return x;
}

void sub(int n, int v[]) {
    for (int i = 0; i < n; i++) {
        v[i] = cmd(v[i]);
    }
}

int n = 5, v[] = {35, 7, 52, 121, 13};

int32_t main() {
    sub(n, v);
    for (int i = 0; i < n; i++) {
        cout << v[i] << ' ';
    }
}
