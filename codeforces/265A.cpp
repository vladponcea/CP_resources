#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;

string s, t;
int ans = 0;

int main() {
    cin >> s >> t;
    for (int i = 0; i < t.size(); i++) {
        if(t[i] == s[ans]) {
            ans++;
        }
    }
    cout << ++ans;

    return 0;
}
