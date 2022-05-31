#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int x, a, b, c;

int main() {
    for (int i = 0; i < 5; i++) {
        cin >> x;
        if(x > a) {
            c = b;
            b = a;
            a = x;
        } else if(x > b) {
            c = b;
            b = x;
        } else if(x > c) {
            c = x;
        }
    }

    cout << a+b+c;

    return 0;
}
