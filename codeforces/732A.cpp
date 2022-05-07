#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;


int main() {
    int k, r, ans = 1;
    cin >> k >> r;
    while((ans*k)%10 != r && (ans*k)%10 != 0)
        ans++;
    cout << ans;

    return 0;
}
