#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;

int solve(int x) {
    if(x == 1)
        return 1;
    return solve(x-1) + 4*x - 4;
}

int main() {
    int n;
    cin >> n;
    cout << solve(n);

    return 0;
}
