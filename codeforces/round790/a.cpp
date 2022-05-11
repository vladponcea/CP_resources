#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int32_t main() {
    int n;
    cin >> n;
    while(n--) {
        string s;
        cin >> s;
        if(((s[0] - '0') + (s[1] - '0') + (s[2] - '0')) == ((s[3] - '0') + (s[4] - '0') + (s[5] - '0')))
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}
