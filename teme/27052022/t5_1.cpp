#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int baza(int n) {
    int maxi = 0;
    while(n) {
        if(n%10 > maxi)
            maxi = n%10;
        n /= 10;
    }
    return ++maxi;
}

int main() {
    cout << baza(50731); 

    return 0;
}
