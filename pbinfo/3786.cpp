#include <bits/stdc++.h>
using namespace std;

ifstream f("toate.in");
ofstream g("toate.out");

typedef long long ll;
typedef long double ld;

int n, x, maxi;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    f >> n;
    for(int i = 0; i < n; i++){
        f >> x;
        int a = 0, p = 1;
        while(x){
            if(x%10 != 9){
                a += x%10*p;
                p *= 10;
            }
            x /= 10;
        }
        if(a > maxi){
            maxi = a;
        }
    }
    g << maxi;

    return 0;
}