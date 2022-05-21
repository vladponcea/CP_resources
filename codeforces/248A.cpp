#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;
    int left[10001], right[10001];
    for (int i = 0; i < n; i++) {
        cin >> left[i] >> right[i];
    }
    int r0 = 0, r1 = 0, l0 = 0, l1 = 0;
    for (int i = 0; i < n; i++) {
        if(right[i] == 1)
            r1++;
        else
            r0++;
    }
    int ans = min(r1, r0);
    for (int i = 0; i < n; i++) {
        if(left[i] == 1)
            l1++;
        else
            l0++;
    }
    ans += min(l0, l1);
    cout << ans;

    return 0;
}
