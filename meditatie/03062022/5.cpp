#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ifstream f("bac.txt");

int main() {
    int x, nr = 0, maxi = 0, nrmaxi = 0;
    while(f >> x) {
        if(x%10==0)
            nr++;
        else {
            if(nr > maxi) {
                maxi = nr;
                nrmaxi = 1;
            }
            else if(nr == maxi) {
                nrmaxi++;
            }
            nr = 0;
        }
    }
    cout << maxi << ' ' << nrmaxi;

    return 0;
}
