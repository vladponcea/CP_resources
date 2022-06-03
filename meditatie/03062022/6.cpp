#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int transformareBaza10(int b, int n) {
    int k, c, s;
    s = 0;
    k = 0;
    while(n > 0) {
        c = n%10;
        s += c*(int)pow(b, k);
        n /= 10;
    }
    return s;
}

int main() {
    cout << transformareBaza10(2, 10010);

    return 0;
}
