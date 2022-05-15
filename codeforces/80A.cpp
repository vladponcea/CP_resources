#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int prim(int x) {
    for (int i = 2; i <= x/2; i++) {
        if(x%i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int x, y;
    cin >> x >> y;
    x++;
    while(!prim(x))
        x++;
    if(x == y)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
