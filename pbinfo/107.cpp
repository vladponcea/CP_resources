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
    int x = n%10, nr = 1;
    n /= 10;
    while(n){
        if(n%10 == x){
            nr++;
        }
        n /= 10;
    }       
    cout << nr;

    return 0;
}