#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;
    if(n%2 == 1)
        cout << -1 << '\n';
    else {
        cout << "2 1";
        for (int i = 3; i < n; i+=2) {
            cout << " " << i+1 << " " << i;
        }
        cout << '\n';
    }
    return 0;
}
