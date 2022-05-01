#include <bits/stdc++.h>
using namespace std;

//ifstream f("a.in");
//ofstream g("a.out");

typedef long long ll;
typedef long double ld;

int n, x, y, maxi, a, b;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        if(abs(x-y) > maxi){
            maxi = abs(x-y);
            a = x;
            b = y;
        }
    }

    cout << a << ' ' << b;

    return 0;
}