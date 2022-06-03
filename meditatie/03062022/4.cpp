#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void suma(int n, int &s) {
    int v[10];
    s = 0;
    do {
        v[n%10]++;
        n /= 10;
    }while(n);
    
    for (int i = 0; i <= 8; i+=2) {
        if(v[i] != 0)
            s += i;
    }
}

int main() {

    return 0;
}
