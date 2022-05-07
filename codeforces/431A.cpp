#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;

int a, b, c, d, s;
string t;

int main() {
    cin >> a >> b >> c >> d;
    cin >> t;
    for (int i = 0; i < t.size(); i++) {
        switch(t[i]) {
            case '1':
                s += a;
                break;
            case '2':
                s += b;
                break;
            case '3':
                s += c;
                break;
            case '4':
                s += d;
                break;
        }

    }

    cout << s;

    return 0;
}
