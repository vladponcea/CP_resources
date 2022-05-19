#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int verifica(int a, int b) {
    int ok = 0;
    while(a && b) {
        if(a%10 != b%10)
            ok++;
        if(ok >= 2)
            break;
        a /= 10;
        b /= 10;
    }

    if(ok >= 2) 
        return 0;
    else return 1;
}

int32_t main() {
    cout << verifica(1234, 143);
}
