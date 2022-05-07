#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;


int main() {
    int a[4], nr = 0;
    for (int i = 0; i < 4; i++) {
        cin >> a[i];
        for (int j = 0; j < i; j++) {
            if(a[j] == a[i]) {
                nr++;
                break;
            }
        }
    }

    cout << nr;

    return 0;
}
