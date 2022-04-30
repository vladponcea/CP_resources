#include <bits/stdc++.h>
using namespace std;

//ifstream f("a.in");
//ofstream g("a.out");

typedef long long ll;
typedef long double ld;

int n, n1, n2, p1 = 1, p2 = 1;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    while(n){
        if(n%2 == 0){
            n1 += n%10*p1;
            p1 *= 10;
        } else{
            n2 += n%10*p2;
            p2 *= 10;
        }
        n /= 10;
    }
    cout << abs(n1 - n2);

    return 0;
}