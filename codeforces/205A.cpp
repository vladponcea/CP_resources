#include <bits/stdc++.h>
#define sz(a) ((int)((a).size()))
#define char unsigned char

using namespace std;

typedef long long ll;
typedef long double ld;


int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int &val : v) {
        cin >> val;
    }
    int mini = *min_element(v.begin(), v.end());
    auto it = find(v.begin(), v.end(), mini);
    for (int i = 0; i < n; i++) {
        if(v[i] == mini && i != it-v.begin()) {
            cout << "Still Rozdil";
            return 0;
        }
    }
    cout << it-v.begin()+1;
}
