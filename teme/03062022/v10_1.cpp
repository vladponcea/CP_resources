#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void produs(int n, int &p) {
    p = 1;
    int v[10];
    for (int i = 0; i < 10; i++) {
        v[i] = 0;
    }
    while(n) {
        if(n%2 == 0 && v[n%10] == 0) {
            v[n%10]++;
            p *= n%10;
        }
        n /= 10;
    }
}

int main() {
    int n = 1622325, p;
    produs(n, p);
    cout << p;

    return 0;
}
