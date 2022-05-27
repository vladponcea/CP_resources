#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ifstream f("bac.txt");

int main() {
    int x, y, maxi = 0, nr = 0, nrx=1;
    f >> x;
    while(f >> y) {
        if(x == y)
            nrx++;
        else {
            if(nrx == x) {
                nr += nrx;
            } else {
                if(nr > maxi)
                    maxi = nr;
                nr = 0;
            }
            x = y;
            nrx = 1;
        }
    }

    cout << maxi;

    return 0;
}
