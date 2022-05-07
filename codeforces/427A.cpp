#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;

int main() {
    int n, x, s=0, nr=0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if(x == -1 && s == 0) {
            nr++;
        } else {
            s += x;
        }
    }
    
    cout << nr;

    return 0;
}
