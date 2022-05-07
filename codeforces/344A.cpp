#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;

int main() {
    int n, nr = 1;
    string x, y;
    
    cin >> n >> x;
    for (int i = 1; i < n; i++) {
        cin >> y;
        if(x != y) {
            nr++;
        }
        x = y;
    }

    cout << nr;

    return 0;
}
