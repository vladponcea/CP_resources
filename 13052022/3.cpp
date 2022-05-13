#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
ifstream f("bac.txt");

int x, v[101], maxi;

int32_t main() {
    while(f >> x) {
        v[x]++;
    }
    
    x = 0;
    while(v[x] == 0)
        x++;
    while(x <= 100) {
        int nr = v[x];
        x++;
        while(v[x] != 0 && x <= 100) {
            nr += v[x];
            x++;
        }
        if(nr > maxi)
            maxi = nr;
        while(v[x] == 0 && x <= 100) {
            x++;
        }
    }

    cout << maxi;
}
