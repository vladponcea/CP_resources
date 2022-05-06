#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
void sub(int x, int &n) {
    int d = 2, p;
    while(x > 1) {
        p = 0;
        while(x % d == 0) {
            p++;
            x /= d;
        }
        if(p)
            n++;
        d++;
        if(x>1 && d*d > x) {
            d = x;
        }
    }
}

int x = 60, n;

int32_t main() {
    sub(x, n);
    cout << n;
}
