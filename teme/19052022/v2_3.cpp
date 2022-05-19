#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ifstream f("bac.txt");

int v[10], a[10];

int main() {
    int nr = 0, x;
    while(f >> x) {
        for (int i = 0; i < 10; i++) {
            a[i] = 0;
        }
        while(x) {
            a[x%10]++;
            x /= 10;
        }
        for (int i = 0; i < 10; i++) {
            if(a[i] >= 1)
                v[i]++;
        }
        nr++;
    }
    
    int maxi = 0;
    for (int i = 0; i < 10; i++) {
        if(v[i] == nr && i > maxi)
            maxi = nr;
    }
    cout << maxi;

    return 0;
}
