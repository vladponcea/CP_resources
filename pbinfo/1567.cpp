#include <bits/stdc++.h>
using namespace std;

//ifstream f("a.in");
//ofstream g("a.out");

typedef long long ll;
typedef long double ld;

int n, s;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    while(n != 0){
        if(n > 9){
            while(n > 99){
                n /= 10;
            }
            s += n;
        }
        cin >> n;
    }
    cout << s;
    

    return 0;
}