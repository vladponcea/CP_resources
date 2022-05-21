#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int pret(int x) {
    return (x*x*x + 7*x*x + 3*x + 84)%100;
}

int main() {
    int mini = INT_MAX, maxi = INT_MIN;
    for (int i = 1; i <= 100; i++) {
        if(pret(i) < mini)
            mini = pret(i);
        if(pret(i) > maxi)
            maxi = pret(i);
    }
    cout << maxi-mini;

    return 0;
}
