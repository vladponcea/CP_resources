#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
ll x;

bool verif(ll x) {
    ll ogl = 0, aux = x;
    while(aux) {
        ogl = ogl*10 + aux%10;
        aux /= 10;
    }
    if((ogl + x)/10 == x) {
        return 1;
    } else 
        return 0;
}

int32_t main() {
    for (int i = 1000; i < 9999; i++) {
        if(verif(i))
            cout << i << '\n';
    }
}
