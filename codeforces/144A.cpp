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
    
    int maxi = INT_MIN, mini = INT_MAX, x, y;
    for (int i = 0; i < n; i++) {
        if(v[i] < mini) {
            mini = v[i];
            x = i;
        }
        if(v[i] > maxi) {
            maxi = v[i];
            y = i;
        }
    }   

    cout << y - 1 + n - x << '\n';

    return 0;
}
