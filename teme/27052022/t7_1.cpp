#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int putere(int n, int p) {
    int d = 2, x = 0;
    while(n > 1) {
        x = 0;
        while(n%d == 0) {
            n /= d;
            x++;
        }
        if(d == p && x)
            return x;
        d++;
    }
    return -1;
}

int main() {
    cout << putere(80, 2); 

    return 0;
}
