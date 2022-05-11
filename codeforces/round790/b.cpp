#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int32_t main() {
    int n;
    cin >> n;
    while(n--) {
        int x;
        cin >> x;
        
        vector<int> v(x);
        for (int &val : v) {
            cin >> val;
        }
        
        int mini = v[0];
        for (int i = 0; i < v.size(); i++) {
            if(v[i] < mini)
                mini = v[i];
        }

        int ans = 0;
        for (int i = 0; i < v.size(); i++) {
            if(v[i] != mini)
                ans += v[i]-mini;
        }

        cout << ans << '\n';
    }
}
