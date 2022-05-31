#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int x, n;
    cin >> x; 
    
    do {
        cout << x << ' ';
        if(x%2 != 0)
            x -= 1;
        else
            x /= 2;
    }while(x > 10);
    
    while(x != 0) {
        cout << x << ' ';
        x--;
    }

    return 0;
}
