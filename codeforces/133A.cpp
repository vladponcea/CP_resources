#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    string s;
    cin >> s;
    for(auto i: s) {
        if(i == 'H' || i == 'Q' || i == '9') {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";

    return 0;
}
