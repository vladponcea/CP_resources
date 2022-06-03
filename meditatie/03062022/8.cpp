#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ifstream f("bac.txt");

int main() {
    int x, y, s, smax = 0;
    f >> x;
    s = x;
    while(f >> y) {
        if(x%2 == y%2) {
            s += y;
            if(s > smax)
                smax = s; 
        } else {
            x = y;
            s = x;
        }
    }

    cout << smax;

    return 0;
}
