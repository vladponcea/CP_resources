#include <bits/stdc++.h>
using namespace std;

//ifstream f("a.in");
//ofstream g("a.out");

typedef long long ll;
typedef long double ld;

ll x, y, a[21], b[21], mini, maxi, c1, c2;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> x >> y;
    mini = 100;
    
    while(x){
        a[++c1] = x%10;
        x /= 10;
    }
    
    while(y){
        b[++c2] = y%10;
        y /= 10;
    }

    for(int i = 1; i <= c1; i++){
        for(int j = 1; j <= c2; j++){
            if(a[i]*10 + b[j] > 9){
                mini = min(mini, a[i]*10+b[j]);
                maxi = max(maxi, a[i]*10+b[j]);
            }
            if(b[j]*10 + a[i] > 9){
                mini = min(mini, b[j]*10 + a[i]);
                maxi = max(maxi, b[j]*10 + a[i]);
            }
        }
    }

    cout << mini << ' ' << maxi;

    return 0;
}