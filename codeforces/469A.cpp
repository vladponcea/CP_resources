#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int v[10000];

int main() {
    int n, p, x;
    cin >> n;
    
    cin >> p;
    while(p--) {
        int x;
        cin >> x;
        v[x]++;
    }
    cin >> x;
    while(x--) {
        int x;
        cin >> x;
        v[x]++;
    }

    for (int i = 1; i <= n; i++) {
        if(v[i] == 0) {
            cout << "Oh, my keyboard!" << '\n';
            return 0;
        }
    }

    cout << "I become the guy." << '\n';

    return 0;
}
