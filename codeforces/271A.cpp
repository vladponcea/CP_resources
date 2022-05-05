#include <bits/stdc++.h>
#define sz(a) ((int)((a).size()))
#define char unsigned char
 
using namespace std;

typedef long long ll;
typedef long double ld;
 
int n;

int solve(int n) {
    while(true) {
        n++;
        int a = n/1000;
        int b = n/100%10;
        int c = n/10%10;
        int d = n%10;
        if(a != b && a != c && a != d && b != c && b != d && c != d) {
            return n;
        }
    }
}
 
int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    cout << solve(n);

    return 0;
}
