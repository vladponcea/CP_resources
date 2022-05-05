#include <bits/stdc++.h>
using namespace std;

//ifstream f("a.in");
//ofstream g("a.out");

typedef long long ll;
typedef long double ld;

ll x, n;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x;
        if(x < 1000){
            cout << x << ' ';
        } else {
            int a[11], nr = 0;
            while(x){
                a[++nr] = x%10;
                x /= 10;
            }
            ll ans = a[nr];
            for(int i = 2; i < nr; i++){
                ans = ans*10 + a[i];
            }
            cout << 1LL*(ans*10 + a[1]);
        }
    }

    return 0;
}