#include <bits/stdc++.h>
using namespace std;

//ifstream f("a.in");
//ofstream g("a.out");

typedef long long ll;
typedef long double ld;

int a[101], nr;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    while(n){
        a[nr] = n%10;
        n /= 10;
        nr++;
    }
    for(int i = --nr; i >= 0; i--){
        if(i != nr/2){
            cout << a[i];
        }
    }

    return 0;
}