#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ifstream f("bac.txt");

int main() {
    int x, mini1 = 0, mini2 = 0, s = 0;
    while(f >> x) {
        if(s+x < mini1) {
            s += x;
            mini1 = s;
        } else if(s+x > mini1) {
            if(mini1 < mini2)
                mini2 = mini1;
            s = 0;
            mini1 = 0;
        }
    }
    cout << mini2;

    return 0;
}
