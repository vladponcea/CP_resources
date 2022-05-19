#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void Impare(int &n) {
    int ans = 0, p = 1;
    while(n) {
        if(n%10%2 != 0) {
            ans += (n%10-1)*p;
        } else {
            ans += n%10*p;
        }
        p *= 10;
        n /= 10;
    }
    n = ans;
}

int main() {
    int n = 235690;
    Impare(n);
    cout << n;

    return 0;
}
