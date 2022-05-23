#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int v[5];

int main() {
    string s, a = "hello";
    cin >> s;
    
    int j = 0, nr = 0;
    for (int i = 0; i < s.size(); i++) {
        if(s[i] == a[j]) {
            j++;
            nr++;

            if(nr == 5)
                break;
        }
    }
    
    if(nr == 5) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
