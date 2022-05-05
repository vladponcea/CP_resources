#include <bits/stdc++.h>
using namespace std;

//ifstream f("a.in");
//ofstream g("a.out");

typedef long long ll;
typedef long double ld;

int a, b, nr1, nr2;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> a >> b;
    int aux1 = a, aux2 = b;
    while(aux1){
        nr1++;
        aux1 /= 10;
    }

    while(aux2){
        nr2++;
        aux2 /= 10;
    }

    int nr = 0;
    if(nr1 == nr2){
        cout << "DA" << '\n';
        for(int i = 0; i < nr1; i++){
            if(a%10 == b%10){
                nr++;
            }
            a /= 10;
            b /= 10;
        }
        cout << nr;
    } else {
        cout << "NU";
    }

    return 0;
}