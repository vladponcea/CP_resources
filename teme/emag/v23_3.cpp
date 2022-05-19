#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
ifstream f("bac.in");
ofstream g("bac.out");

int x, v[10];

int32_t main() {
    while(f >> x) {
        while(x > 9)
            x /= 10;
        v[x]++;
    }
    
    int maxi = 0;
    for (int i = 0; i < 10; i++) {
        if(v[i] > maxi)
            maxi = v[i];
    }

    for (int i = 0; i < 10; i++) {
        if(v[i] == maxi) {
            g << i << ' ';
        }
    }
    g << maxi;
}
