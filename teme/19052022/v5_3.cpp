#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ifstream f("bac.in");

int x, a, b, c;

int main() {
    while(f >> x) {
        if(x%10 == 0 && x/10%10 == 2) {
            if(x > a) {
                c = b;
                b = a;
                a = x;
            } else if(x > b) {
                c = b;
                b = x;
            } else {
                c = x;
            }
        }
    }

    cout << c << ' ' << b << ' ' << a << '\n';

    return 0;
}
