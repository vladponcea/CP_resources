#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
ifstream f("bac.txt");

int x, v[100], nr;

int32_t main() {
    while(f >> x) {
        while(x >= 10) {
            v[x%100]++;
            x /= 10;
        }
    }
    nr = 0;
    for (int x = 10; x <= 99; x++) {
        if(v[x] == 1) {
            cout << x << ' ';
            nr++;
        }
    }
    if(nr == 0)
        cout << "nu exista";
}
