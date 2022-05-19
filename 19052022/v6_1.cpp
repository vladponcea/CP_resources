#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int factori(int n, int m) {
    int ans = 0,  d = 2, a[10], b[10], i = 0, j = 0;
    while(n > 1) {
        while(n%d == 0)
            n /= d;
        if(d == 2 || d == 3 || d == 5 || d == 7)
            a[d]++;
        d++;
    }
    
    d = 2;
    while(m > 1) {
        while(m%d == 0)
            m /= d;
        if(d == 2 || d == 3 || d == 5 || d == 7)
            b[d]++;
        d++;
    }
    
    for (int k = 0; k < 10; k++) {
         
    }


    return ans;
}

int main() {
    cout << factori(750, 490);

    return 0;
}
