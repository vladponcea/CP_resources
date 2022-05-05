#include <bits/stdc++.h>
using namespace std;

//ifstream f("a.in");
//ofstream g("a.out");

typedef long long ll;
typedef long double ld;

int a, b;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> a >> b;
    if(a == b && a == 0){
        cout << -1;
    } else {
        while(b){
            int r = a%b;
            a = b;
            b = r;
        }
        cout << a;
    }
    

    return 0;
}