#include <bits/stdc++.h>
using namespace std;

//ifstream f("a.in");
//ofstream g("a.out");

typedef long long ll;
typedef long double ld;

int n, i=1, s, ogl;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    while(n){
        ogl = ogl*10 + n%10;
        n /= 10;
    }

    while(ogl){
        if(i%2 != 0){
            s += ogl%10;
        }
        ogl /= 10;
        i++;
    }
    cout << s;

    return 0;
}