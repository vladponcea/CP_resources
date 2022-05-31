#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void perechi(int n) {
    int ok = 1;
    for (int a = 1; a <= n; a++) {
        for (int b = 1; b <= n; b++) {
            if(a%2 != b%2 && a*b == n && a < b) {
                cout << '[' << a << ' ' << b << ']' << ' ';
                ok = 0;
            }
        }
    }
    if(ok)
        cout << "nu exista";
}

int main() {
    perechi(9); 

    return 0;
}
