#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;


int main() {
    int x;
    cin >> x;
    for (int a = 1; a <= x; a++) {
        for (int b = 1; b <= x; b++) {
            if(a%b == 0 && a*b > x && a/b < x) {
                cout << a << ' ' << b;
                return 0;
            }
        }
    }
    cout << -1;

    return 0;
}
