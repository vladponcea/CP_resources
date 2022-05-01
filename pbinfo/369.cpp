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
    int ogl = 0, s = 0;
    while(n){
        s += n%10;
        n /= 10;
    }

    while(s){
        ogl = ogl*10 + s%10;
        s /= 10;
    }

    cout << ogl;

    return 0;
}