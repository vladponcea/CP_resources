#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void prodprim(int n, int &p) {
    int d = 2, x = 0;
    p = 1;
    while(n > 1) {
        x = 0;
        while(n%d == 0) {
            n /= d;
            x++;
        }
        if(x) {
            int nr = 0;
            for (int i = 1; i <= d; i++) {
                if(d%i == 0)
                    nr++;
            }
            if(nr == 2)
                p *= d;
        }
        d++;
    } 
}

int main() {
    int n = 2000, p;
    prodprim(n, p);
    cout << p;

    return 0;
}
