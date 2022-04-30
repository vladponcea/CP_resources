#include <bits/stdc++.h>
using namespace std;

//ifstream f("a.in");
//ofstream g("a.out");

typedef long long ll;
typedef long double ld;

int n, mini = INT_MAX, mininr = INT_MAX;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i++){
        int x, ogl = 0;
        cin >> x;
        int aux = x;
        
        while(x){
            ogl = ogl*10 + x%10;
            x /= 10;
        }

        if(abs(ogl - aux) < mini){
            mini = abs(ogl - aux);
            mininr = aux;
        } else if(abs(ogl - aux) == mini && aux < mininr){
            mininr = aux;
        }
    }
    cout << mininr;

    return 0;
}