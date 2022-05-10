#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;


int main() {
    int n, k;
    cin >> n >> k;
    int i = 0, s = 0, l = 0;
    while(n >= k) {
        n -= k;
        if(i%2 == 0)
            s++;
        else
            l++;
        i++;
    }

    if(s > l)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
