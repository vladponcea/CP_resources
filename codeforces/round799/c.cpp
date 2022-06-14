#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int tt;
    cin >> tt;
    while(tt--) {
        char v[8][8];
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                cin >> v[i][j];
            }
        }

        int ok = 1;
        for (int i = 0; i < 8 && ok; i++) {
            for (int j = 0; j < 8 && ok; j++) {
                if(v[i][j] == '#' && v[i+1][j+1] == '#' && v[i-1][j-1] == '#' && v[i-1][j+1] == '#' && v[i+1][j-1] == '#') {
                    cout << i+1 << ' ' << j+1 << '\n';
                    ok = 0;
                }
            }
        }
    }


    return 0;
}
