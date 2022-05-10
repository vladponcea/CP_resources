#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;


int main() {
    int n;
    cin >> n;

    if((n-2)%3 == 0)
        cout << n-3 << ' ' << 2 << ' ' << 1;
    else
        cout << n-2 << ' ' << 1 << ' ' << 1;

    return 0;
}
