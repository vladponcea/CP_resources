#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void generatoare(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(i*j+(int)i/j == n) {
                cout << i << '-' << j << ' ';
            }
        }
    }
}

int main() {
    generatoare(2020);

    return 0;
}
