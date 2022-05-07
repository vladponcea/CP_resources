#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;

int suma(int x, int y) {
    int ans = 0;
    for (int i = x; i <= y; i++) {
        ans += i;
    }
    return ans;
}


int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << suma(a, b) << ' ' << suma(b, c) << ' ' << suma(a, c);

    return 0;
}
