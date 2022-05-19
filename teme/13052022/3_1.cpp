#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int Egal(int n) {
    int c, ok;
    while(n%2 == 0)
        n /= 10;
    c = n%10;
    n /= 10;
    ok = 1;
    while(n) {
        if(n%10%2 != 0 && n%10 != c)
            ok = 0;
        n /= 10;
    }

    return ok;
}

int main() {
    cout << Egal(7727476); 

    return 0;
}
