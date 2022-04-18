#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int main() {
    int n;
    cin >> n;
    if(n != 1) {
        ll sum = 0;
        for (int d = 1; d*d <= n; d++) {
            if(n % d == 0) {
                sum += d;
                sum += n / d;
            }
            if(d * d == n) {
                sum -= d;
            }
        }
        cout << sum;
    } else {
        cout << 1;
    }
    return 0;
}
