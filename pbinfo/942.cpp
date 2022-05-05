#include <bits/stdc++.h>
using namespace std;

//ifstream f("a.in");
//ofstream g("a.out");

typedef long long ll;
typedef long double ld;

ll n;
int nr2, nr3;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    while(n){
        if(n%10 == 2){
            nr2++;
        } else {
            nr3++;
        }
        n /= 10;
    }
    if(nr2 > nr3){
        cout << 2;
    } else if(nr2 == nr3){
        cout << 2 << ' ' << 3;
    } else{
        cout << 3;
    }

    return 0;
}