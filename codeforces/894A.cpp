#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;

// QAQAQYSYIOIWIN


int main() {
    string s;
    cin >> s;

    int ans = 0, x = 0, y = 0;
    for (int i = 0; i < s.size(); i++) {
        if(s[i] == 'Q')
            ans += x, y++;
        else if(s[i] == 'A')
            x += y;
    }

    cout << ans << '\n';

    return 0;
}
