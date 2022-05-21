#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int n, x;
    cin >> n >> x;
    int maxi = x, mini = x, ans = 0;
    while(--n) {
        cin >> x;
        if(x < mini) {
            mini = x;
            ans++;
        } 
        if(x > maxi) {
            maxi = x;
            ans++;
        }
    }

    cout << ans;

    return 0;
}
