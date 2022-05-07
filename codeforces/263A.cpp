#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;


int main() {
    int a[6][6], ans = 0, x, y;
    for (int i = 1; i <= 5 ; i++) {
        for (int j = 1; j <= 5; j++) {
            cin >> a[i][j];
            if(a[i][j]) {
                x = i;
                y = j;
            }
        }
    }

    ans += abs(x-3) + abs(y-3);
    cout << ans;

    return 0;
}
