#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;

// 1 2 3 4 5 6 7 8
// O O O o O o o O

int main() {
    int n;
    cin >> n;
    if(n == 1) {
        cout << "O";
        return 0;
    } else if(n == 2) {
        cout << "OO";
        return 0;
    } else if(n == 3) {
        cout << "OOO";
        return 0;
    }

    ll f1 = 2, f2 = 3, f = 5, i = 4;
    cout << "OOO";
    n -= 3;
    while(n--) {
        if(f == i) {
            f1 = f2;
            f2 = f;
            f = f1+f2;
            cout << "O";
        } else 
            cout << "o";

        i++; 
    }

    return 0;
}
