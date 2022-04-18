#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int32_t main() {
    int n;
    cin >> n;
    int cnt0 = 0, cnt1 = 0;
    while(n) {
        if(n % 2 == 0)
            cnt0++;
        else 
            cnt1++;

        n /= 2;
    }
    cout << cnt0 << ' ' << cnt1;
    return 0;
}
