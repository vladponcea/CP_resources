#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;


int main() {
    int n;
    cin >> n;
    
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int t = a + b + c + d;
    
    n--;
    int i = 2, ans = 1;
    while(n) {
        cin >> a >> b >> c >> d;
        if(a+b+c+d > t)
            ans++; 
        i++;
        n--;
    }

    cout << ans;

    return 0;
}
