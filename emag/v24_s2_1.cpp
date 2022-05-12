#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int32_t main() {
    int n, a;
    cin >> n >> a;
    for (int i = 2; i < n; i++) {
        int c;
        c = a;
        int b;
        cin >> b;
        int d;
        d = b;
        
        while(c != d)
            if(c > d)
                c -= d;
            else
                d -= c;
        
        if(d == 1)
            cout << b << ' ';
        a = b;
    }
}
