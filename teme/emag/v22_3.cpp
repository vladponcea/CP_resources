#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;

ifstream f("bac.in");

int x, v[10];

int32_t main() {
    while(f >> x) {
        while(x) {
            v[x%10]++;
            x /= 10;
        }
    }

    for (int i = 9; i >= 0; i--) {
        while(v[i]) {
            cout << i << ' ';
            v[i]--;
        }
    }
}
