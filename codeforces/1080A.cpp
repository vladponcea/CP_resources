#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;


int main() {
    int n, k;
    cin >> n >> k;
    
    int r, g, b;
    r = 2*n;
    g = 5*n;
    b = 8*n;
    
    int i = 1, j = 1, l = 1;
    while(i * k < r)
        i++;
    while(j * k < g)
        j++;
    while(l * k < b)
        l++;
    cout << i + j + l << '\n';

    return 0;
}
