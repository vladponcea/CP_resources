#include <bits/stdc++.h>
using namespace std;

//ifstream f("a.in");
//ofstream g("a.out");

typedef long long ll;
typedef long double ld;

int n, r, nr;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> r;
    for(int i = 0; i < n; i++){
        ll x;
        cin >> x;
        if(x%9 == r){
            nr++;
        }
    }
    cout << nr;

    return 0;
}