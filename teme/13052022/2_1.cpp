#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void inserare(int &n) {
    int x, p, c;
    x = 0;
    p = 1;
    while(n >= 10) {
        x += n%10*p;
        p *= 10;
        c = abs(n%10-n/10%10);
        x += c*p;
        p *= 10;
        n /= 10;
    }
    x += n*p;
    n = x;
}

int n = 7255;

int main() {
    inserare(n);
    cout << n;

    return 0;
}
