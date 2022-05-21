#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

bool verif(int x) {
    while(x) {
        if(x%10 == 4)
            return 0;
        x /= 10;
    }
    return 1;
}

bool palindrom(int x) {
    int ogl = 0, aux = x;
    while(x) {
        ogl = ogl*10 + x%10;
        x /= 10;
    }
    if(ogl == aux) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int ans = 0;
    for (int i = 0; i < 2022; i++) {
        if(verif(i) && palindrom(i)) {
            ans++;
        }
    }
    cout << ans;

    return 0;
}
