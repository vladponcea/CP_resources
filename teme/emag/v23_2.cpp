#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int x, a[10][10], aux;

int32_t main() {
    cin >> x;
    aux = x;
    int nr = 0;
    while(aux) {
        nr++;
        aux /= 10;
    }
    for (int i = 0; i < nr; i++) {
        aux = x;
        for (int j = 0; j < nr; j++) {
            a[i][j] = aux%10;
            aux /= 10;
        }
    }

    for (int i = 0; i < nr; i++) {
        for (int j = 0; j < nr; j++) {
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }
}
