#include <bits/stdc++.h>
using namespace std;

//ifstream f("a.in");
//ofstream g("a.out");

typedef long long ll;
typedef long double ld;

int n;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    if(n == 0){
        cout << 1;
    } else {
        int aux = n;
        while(aux > 9){
            aux /= 10;
        }
        int nr = 0;
        while(n){
            if(n%10 == aux){
                nr++;
            }
            n /= 10;
        }
        cout << nr;
    }

    return 0;
}