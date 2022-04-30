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
    while(n > 9){
        int s = 0;
        while(n > 0){
            s += n%10;
            n /= 10;
        }
        n = s;
    }
    cout << n;

    return 0;
}