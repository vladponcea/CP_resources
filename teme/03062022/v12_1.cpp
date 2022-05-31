#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int pDoi(int n) {
    int p = 1;
    while(p <= n)
        p *= 2;
    return p/2;
}

int main() {
    cout << pDoi(20); 

    return 0;
}
