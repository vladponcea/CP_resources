#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ifstream f("bac.txt");

int x, y, nr;

int main() {
    f >> x;
    while(f >> y) {
        if(x == y)
            nr++;
        else {
            cout << x << ' ' << ++nr << ' ';
            nr = 0;
        }
        x = y;
    }

    return 0;
}
