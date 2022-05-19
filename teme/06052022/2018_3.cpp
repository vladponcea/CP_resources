#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
void divizori(int n, int &x, int &z) {
    int a, b, c;
    x = y = z = 0;
    for (a = 1; a <= n/2; a++) {
        for (b = a+1; b <= n/2; b++) {
            for (c = b+1; c <= n/2; c++) {
                if(n%a == 0 && n%b == 0 && n%c == 0 && a+b+c == n) {
                    x = a, y = b, z = c;
                }
            }
        }
    }
}

int32_t main() {
    
}
