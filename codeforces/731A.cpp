#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;

string s;

int main() {
    cin >> s;
    int l = s.length();
    int smoves = 0, start = 0;
    for (int i = 0; i < l; i++) {
        int index = s[i] - 97;
        int walk = abs(start - index);
        if(walk < 13)
            smoves += walk;
        else
            smoves += 26 - walk;
        start = index;
    }

    cout << smoves;

    return 0;
}
