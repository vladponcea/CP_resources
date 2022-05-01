#include <bits/stdc++.h>
using namespace std;

ifstream f("cifre15.in");
ofstream g("cifre15.out");

typedef long long ll;
typedef long double ld;

int n;
ll p = 1;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    f >> n;
    while(n){
        ll x; 
        f >> x;
        p *= x;
        n--;
    }

    int c = p%10, nr = 0;
    ll aux = p;
    p /= 10;
    if(c == 0){
        while(c == 0){
            c = p%10;
            p /= 10;
            nr++;
        }
        while(aux){
            if(aux%10 != 0){
                g << nr << ' ' << aux%10;
                break;
            }
            aux /= 10;
        }
    } else {
        while(aux){
            if(aux%10 != 0){
                g << 0 << ' ' << aux%10;
                break;
            }
        }
    }
    

    return 0;
}