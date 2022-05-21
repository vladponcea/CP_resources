#include <bits/stdc++.h>
#include <stdlib.h>

using namespace std;
typedef long long ll;

int main() {
    int nr = 9, ok = 0, x = 10;
    while(!ok) {
        int aux = x;
        while(aux && !ok) {
            if(nr == 21052022) {
                ok = 0;
                cout << aux%10;
                return 0;
            } else {
                nr++;
            }
            aux /= 10;
        }
        x++;
    }

    return 0;
}
