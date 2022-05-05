#include <bits/stdc++.h>
using namespace std;

//ifstream f("a.in");
//ofstream g("a.out");

typedef long long ll;
typedef long double ld;

int n;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    int nr = 1, d = 2;
    while(n > 1){
        int p = 0;
        while(n % d == 0){
            n /= d;
            p++;
        }
        nr *= (p+1);
        d++;
        if(d*d > n){
            d = n;
        }
    }
    if(nr == 2){
        cout << "DA";
    } else {
        cout << "NU";
    }

    return 0;
}