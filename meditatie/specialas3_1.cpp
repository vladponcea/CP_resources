#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void patrate(int n, int &x, int &y) {
    int a;
    if(sqrt(n) == (int)sqrt(n)) {
        a = (int)sqrt(n);
        x = 2;
        while(a%2 != 0)
            x++;
        y = a/x;
        if(x == y) {
            x = 0;
            y = 0;
        } 
    } else {
        x = 0;
        y = 0;
    }
}

int main() {
    int x=0, y=0;
    patrate(400, x, y);
    cout << x << ' ' << y;

    return 0;
}
