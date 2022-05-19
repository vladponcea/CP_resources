#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int Suma(int n) {
    int ans = 0;
    while(n) {
        if(n/10%10 == n%10)
            ans += n%100;
        n /= 10;
    }
    if(ans)
        return ans;
    else 
        return 0;
}

int main() {
    cout << Suma(722722555);  

    return 0;
}
