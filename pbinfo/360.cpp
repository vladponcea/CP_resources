#include <bits/stdc++.h>
using namespace std;

//ifstream f("a.in");
//ofstream g("a.out");

typedef long long ll;
typedef long double ld;

int n, c, aux, p = 1;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> c;
    while(n){
        if(n%10 != c){
            aux += n%10*p;
            p *= 10;
        }
        n /= 10;
    }
    if(aux == 0){
        cout << -1;
    } else {
        cout << aux;
    }
    

    return 0;
}