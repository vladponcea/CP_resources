#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    string s;
    cin >> s;
    
    for (int i = 0; i < s.size(); i++) {
        if(s[i] == '.') {
            cout << 0;
        } else if(s[i] == '-' && s[i+1] == '.') {
            cout << 1;
            i++;
        } else if(s[i] == '-' && s[i+1] == '-') {
            cout << 2;
            i++;
        }
    }

    return 0;
}
