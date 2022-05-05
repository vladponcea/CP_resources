#include <bits/stdc++.h>
using namespace std;

//ifstream f("a.in");
//ofstream g("a.out");

typedef long long ll;
typedef long double ld;

ll a, b;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> a >> b;
    ll x = a, y = b;
    while(b){
        int r = a%b;
        a = b;
        b = r;
    }
    cout << a << ' ' << (x*y)/a;

    return 0;
}