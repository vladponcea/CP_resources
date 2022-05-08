#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;

// z e r o n
// 0 1 2 3 4


string s;
int n, a[5];

int main() {
    cin >> n >> s;
    for (int i = 0; i < s.size(); i++) {
        if(s[i] == 'z')
            a[0]++;
        else if(s[i] == 'e')
            a[1]++;
        else if(s[i] == 'r')
            a[2]++;
        else if(s[i] == 'o')
            a[3]++;
        else
            a[4]++;
    }

    int ok = 1;
    while(ok) {
        ok = 0;
        if(a[3] && a[4] && a[1]) {
            ok = 1;
            a[3]--;
            a[4]--;
            a[1]--;
            cout << 1 << ' ';
        } else if(a[0] && a[1] && a[2] && a[3]) {
            ok = 1;
            a[0]--;
            a[1]--;
            a[2]--;
            a[3]--;
            cout << 0 << ' ';
        } else if(a[3] && a[4] && a[1]) {
            ok = 1;
            a[3]--;
            a[4]--;
            a[1]--;
            cout << 1 << ' ';
        }
    }

    return 0;
}
