#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;


int main() {
    int n;
    cin >> n;
    if(n%10 == 0)
        cout << n;
    else if(n%10 <= 5) {
        cout << n-n%10;
    } else {
        cout << n+10-n%10;
    }

    return 0;
}
