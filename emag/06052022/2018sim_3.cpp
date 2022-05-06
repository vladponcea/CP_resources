#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
void radical(int n, int &x, int &y) {
    int d, p;
    x = 1;
    y = 1;
    d = 2;
    while(n > 1) {
        if(n%d == 0) {
            p = 0;
            while(n%d == 0) {
                p++;
                n /= d;
            }
            for (int i = 1; i <= p/2; ++i) {
                x *= d;
            }
            if(p%2 != 0) {
                y *= d;
            }
        }
        d++;
    }
}

int32_t main() {
    
}
