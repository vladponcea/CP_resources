#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void divPrimMax(int n, int &p) {
    int d = 2, maxi = 0;
    while(n > 1) {
        if(n%d == 0) {
            while(n%d == 0) {
                n /= d;
            }

            int ok = 1;
            for (int i = 2; i < d && ok; i++) {
                if(d%i == 0) {
                    ok = 0;
                }
            }

            if(ok && d > maxi)
                maxi = d;
        }
        d++;
    }
    p = maxi;
}

int main() {
    int n = 2000, p;
    divPrimMax(n, p);
    cout << p;

    return 0;
}
