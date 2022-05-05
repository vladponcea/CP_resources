#include <bits/stdc++.h>
using namespace std;

ifstream f("n_suma.in");
ofstream g("n_suma.out");

typedef long long ll;
typedef long double ld;

int n, x, s;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    f >> n;
    for(int i = 0; i < n; i++){
        f >> x;
        s += x;
    }
    g << s;

    return 0;
}