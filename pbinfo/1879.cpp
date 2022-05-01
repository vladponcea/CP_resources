#include <bits/stdc++.h>
using namespace std;

ifstream f("platou2.in");
ofstream g("platou2.out");

typedef long long ll;
typedef long double ld;

int n, x, y, nr=1, maxi;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    f >> n >> x;
    for(int i = 0; i < n-1; i++){
        f >> y;
        if(y > x){
            nr++;
        } else {
            if(nr > maxi){
                maxi = nr;
            }
            nr = 1;
        }
        x = y;
    }

    g << maxi;

    return 0;
}