#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int n, s = 0;
    cin >> n;
    for (int i = 0; i < n-1; i++) {
        int x;
        cin >> x;
        s += x;
    } 
   
    cout << (n*(n+1))/2 - s << '\n';
    

    return 0;
}
