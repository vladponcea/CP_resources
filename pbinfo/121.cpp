#include <bits/stdc++.h>
using namespace std;

//ifstream f("a.in");
//ofstream g("a.out");

typedef long long ll;
typedef long double ld;

ll n, aux;
int maxi, nr;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    if(n == 0){
        cout << 0 << ' ' << 1;
    } else{
        aux = n;
        while(aux){
            if(aux%10 > maxi){
                maxi = aux%10;
            }
            aux /= 10;
        }
        while(n){
            if(n%10 == maxi){
                nr++;
            }
            n /= 10;
        }
        cout << maxi << ' ' << nr;
    }

    return 0;
}