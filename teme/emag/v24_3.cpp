#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;

ifstream f("centenar.in");

int32_t main() {
    int n;
    while(f >> n) {
        if(n > 99) {
            int aux = n;
            
            while(aux > 9)
                aux /= 10;

            if(aux*n%100 == 100)
                cout << n << ' ';
        }
    }
}
