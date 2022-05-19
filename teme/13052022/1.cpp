#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int CifrePrime(int n) {
    int s;
    while(n) {
        if(n%10 == 2 || n%10 == 3 || n%10 == 5 || n%10 == 7)
            s += n%10;
        n /= 10;
    }

    return s;
}

int32_t main() {
    

}
