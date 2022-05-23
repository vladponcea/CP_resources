#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void findpos(int x, int v[], int n) {
    for (int i = 1; i <= n; i++) {
        if(v[i] == x) {
            cout << i << ' ';
            return;
        }
    }
}

int main() {
    int n, v[101];
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    } 
    
    for (int i = 1; i <= n; i++) {
        findpos(i, v, n);
    }

    return 0;
}
