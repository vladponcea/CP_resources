#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int tt;
    cin >> tt;
    while(tt--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            v.push_back(x);
        }

        int s = set<int>(v.begin(), v.end()).size();
        if(--s%2 != n%2)
            s -= 1;
        cout << s << '\n';
    }

    return 0;
}