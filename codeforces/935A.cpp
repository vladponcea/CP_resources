#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;

int n, ans;

int main() {
    cin >> n;
    for (int i = 1; i <= n/2; i++) {
        int x = n-i;
        if(!(x%i)) {
            ans++;
        }
    }

    cout << ans;

    return 0;
}
