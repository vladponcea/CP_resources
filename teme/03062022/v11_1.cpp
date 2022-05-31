#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void patrate(int x, int y) {
    int p = 1, s = 0;
    while(p*p < x)
        p++;
    while(p*p <= y) {
        if((p+1)*(p+1) > y)
            cout << p*p;
        else
            cout << p*p << '+';
        s += p*p;
        p++;
    }
    cout << '=' << s;
}

int main() {
    patrate(10, 50);

    return 0;
}
