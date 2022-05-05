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
    for(int i = 0; i < n; i++){
        int x, nr = 0, p = 1;
        cin >> x;
        int c = x%10;
        x /= 10;
        while(x){
            if(x%10 != c){
                nr += x%10*p;
                p *= 10;
            }
            x /= 10;
        }
        s += nr;
    }
    cout << s;

    return 0;
}