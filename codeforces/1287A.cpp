#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;


int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, ans = 0;
        string s;
        cin >> n >> s;
        
        int k = -1;
        for (int i = 0; i < n; i++) {
            if(s[i] == 'P' && k > -1)
                ans = max(ans, i-k);
            else if(s[i] == 'A')
                k = i;
        }

        cout << ans << '\n';
    }

    return 0;
}
