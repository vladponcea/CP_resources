#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;

        if(s.size() == 2) {
            cout << s[1] << '\n';
        } else {
            char mini = CHAR_MAX;
            for (int i = 0; i < s.size(); i++) {
                if(s[i] < mini)
                    mini = s[i];
            }
            cout << mini << '\n';
        }
    }
    


    return 0;
}
