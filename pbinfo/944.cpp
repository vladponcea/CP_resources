#include <bits/stdc++.h>
using namespace std;

//ifstream f("a.in");
//ofstream g("a.out");

typedef long long ll;
typedef long double ld;

ll n;
int maxi;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    ll aux = n;
    aux /= 10;
    while(aux){
        if(n%aux > maxi){
            maxi = n%aux;
        }
        aux /= 10;
    }
    cout << maxi;

    return 0;
}