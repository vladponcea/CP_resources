#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void putere(int n, int &d, int &p) {
    int i = 2, j;
    d = 0, p = 0;
    while(n > 1) {
        j = 0;
        while(n%i == 0) {
            n /= i;
            j++;
        }
        if(j > p) {
            p = j;
            d = i;
        }
        if(j == p && i > d)  {
            d = i;
        }
        i++;
    }
}

int main() {
    int a, b, c;
    a = 10780;
    putere(a, b, c);
    cout << b << ' ' << c;

    return 0;
}
