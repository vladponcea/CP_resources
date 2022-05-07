#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;
    vector<int> v1;
    vector<int> v2;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        v1.push_back(x);
        v2.push_back(y);
    }
    
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(v1[i] == v2[j])
                ans++;
        }
    }

    cout << ans;

    return 0;
}
