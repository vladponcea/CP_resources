#include <bits/stdc++.h>
using namespace std;

ifstream f("sirmaxim.in");
ofstream g("sirmaxim.out");

typedef long long ll;
typedef long double ld;

int n, x, maxi, nr;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    f >> n;
    for(int i = 1; i <= n/2; i++){
        f >> x;
        if(x > maxi){
            maxi = x;
        }
    }

    for(int i = 1; i <= n/2; i++){
        f >> x;
        if(x == maxi){
            nr++;
        }
    }
    
    g << nr;

    return 0;
}