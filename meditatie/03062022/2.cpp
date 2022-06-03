#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int maxim(int n) {
    int maxi = 0;
    while(n) {
        if(n%10%2 != 0 && n%10 > maxi) {
            maxi = n%10;
        }
        n /= 10;
    }
    if(maxi)
        return maxi;
    else 
        return -1;
}

int main() {
    cout << maxim(5672883);

    return 0;
}
