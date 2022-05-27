#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ifstream f("bac.txt");

int main() {
    int x, maxi1 = 0, maxi2 = 0, s = 0;
    while(f >> x) {
        if(s+x > maxi1) {
            s += x;
            maxi1 = s;
        } else if(s+x < maxi1) {
            if(maxi1 > maxi2)
                maxi2 = maxi1;
            s = 0;
            maxi1 = 0;
        }
    }
    cout << maxi2;

    return 0;
}
