#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
void zu(int n, int v[]) {
    for (int i = 0; i < n; i++) {
        if(v[i] > 9) {
            int x = v[i]%10, y = v[i]/10%10;
            v[i] /= 100;
            v[i] = v[i]*10 + x;
            v[i] = v[i]*10 + y;
        }
    }
}

int n = 7, v[] = {31, 17, 2002, 1974, 7, 2021, 19};

int32_t main() {
    zu(n, v);
    for (int i = 0; i < n; i++) {
        cout << v[i] << ' ';
    }
}
