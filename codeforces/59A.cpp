#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;

string s;
int l, u;

int main() {
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if(s[i] >= 'a' && s[i] <= 'z') {
            l++;
        } else {
            u++;
        }
    }

    if(l < u) {
        for (int i = 0; i < s.size(); i++) {
            s[i] = toupper(s[i]);
        }
    } else {
        for (int i = 0; i < s.size(); i++) {
            s[i] = tolower(s[i]);
        }
    }

    cout << s;

    return 0;
}
