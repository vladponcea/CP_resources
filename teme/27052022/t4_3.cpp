#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ifstream f("bac.txt");

int main() {
    int x, y, nr = 0;
    f >> x;
    while(f >> y) {
        //cout << x << ' ';
        if(x != y) {
            if(nr == 1)
                cout << x << ' ';
            nr = 0;
        } else if(x == y) {
            nr++;
        }
        x = y;
    }
    if(x == y)
        cout << x;

    return 0;
}
