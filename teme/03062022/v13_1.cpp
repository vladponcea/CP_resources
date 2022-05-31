#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void putere(int n, int &d, int &p) {
    int mini = INT_MAX, i = 2;
    d = INT_MAX;
    while(n > 1) {
        p = 0;
        while(n%i == 0) {
            n /= i;
            p++;
        }
        if(p < mini && p) {
            mini = p;
            d = i;
        }
        else if(p == mini && i < d)
            d = i;
        i++;
    }
    p = mini;
}

int main() {
    int n = 10780, d, p;
    putere(n, d, p);
    cout << d << ' ' << p;

    return 0;
}
