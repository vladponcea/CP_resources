#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int p1, p2, nr = 0;
    cin >> p1 >> p2;
    for (int i = 0; i < 10; i++) {
        for (int j = 1; j < 10; j++) {
            for (int k = 0; k < 10; k++) {
                for (int l = 0; l < 10; l++) {
                    for (int m = 0; m < 10; m++) {
                        if(j*k == p1 && l*m == p2) {
                            cout << j*1000000 + k*100000 + i*10000 + i*1000 + i*100 + l*10 + m << '\n';
                            nr++;
                        }
                    }
                }
            }
        }
    }
    cout << nr << '\n';

    return 0;
}
