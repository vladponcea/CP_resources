#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;


int main() {
    int n, a[1000];
    cin >> n; 

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    } 
    sort(a, a+n);
    cout << a[(n-1)/2] << '\n';

    return 0;
}
