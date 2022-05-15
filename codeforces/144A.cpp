#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;
    
    vector<int> v(n);
    for (int &val : v) {
        cin >> val;
    }
    
    int maxi = INT_MIN, mini = INT_MAX;
    for (int i = 0; i < n; i++) {
        if(v[i] < mini)
            mini = v[i];
        if(v[i] > maxi)
            maxi = v[i];
    }

    int ans = 0;

    cout << ans << '\n';

    return 0;
}
