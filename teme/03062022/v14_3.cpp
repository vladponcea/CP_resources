#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ifstream f("bac.in");

int x, a = (int)1e9, b = (int)1e9, c = (int)1e9;

int main() {
    while(f >> x) {
        if(x%10 == 0 && x/10%10 == 2) {
            if(x < a) {
                c = b;
                b = a;
                a = x;
            } else if(x < b) {
                c = b;
                b = x;
            } else if(x < c) {
                c = x;
            }
        }
    }

    cout << a << ' ' << b << ' ' << c;

    return 0;
}
