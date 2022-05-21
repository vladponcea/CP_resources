#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int n, s = 0;
    cin >> n;
    int aux = n;
    while(n--) {
        int x;
        cin >> x;
        s += x;
    }
    cout << (float)s/aux;
     
    

    return 0;
}
