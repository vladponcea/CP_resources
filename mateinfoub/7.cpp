#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int a[21];

int main() {
    int v[] = {1, 2, 2, 2, 3, 5, 5, 5, 7, 13, 14, 15, 15, 25, 35, 50, 50, 51, 78, 99, 100};
    
    int t = 1;
    for (int i = 0; i < 21; i++) {
        a[i] = 1;
    }
    for (int i = 1; i < 21; i++) {
        if(a[i]) {
            int ok = 0;
            for (int j = 0; j < i; j++) {
                if(v[j] <= v[i]*2) {
                    a[j] = 0;
                    a[i] = 0;
                    ok = 1;
                }
            }      
            if(ok) {
                t++;
                i++;
            }
        }
    }
    
    cout << t << '\n';

    return 0;
}
