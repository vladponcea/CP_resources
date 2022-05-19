#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int MaxImp(int a, int b) {
    for (int i = b; i >= a; i--) {
        int p = 1;
        for (int j = 1; j <= i; j++) {
            if(i%j == 0 && j%2 != 0)
                p *= j;
        }
        if(p > i)
            return i;
    }
    return 0;
}

int main() {
    cout << MaxImp(14, 19);

    return 0;
}
