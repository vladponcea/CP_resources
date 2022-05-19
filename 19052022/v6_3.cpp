#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ifstream f("bac.in");

int main() {
    int x, nr1 = 0, nr2 = 0, maxi = 0;
    while(f >> x) {
        if(x < 0) {
            if(nr1 > maxi) {
                nr1 = 1;
                maxi = nr1;
            }
            if(nr2 > maxi) {
                nr2 = 1;
                maxi = nr2;
            }
            if(nr2 == 1)
                nr2++;
        } 
        nr1++;
    }

    cout << maxi;

    return 0;
}
