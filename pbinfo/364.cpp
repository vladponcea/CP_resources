#include <bits/stdc++.h>
using namespace std;

//ifstream f("a.in");
//ofstream g("a.out");

typedef long long ll;
typedef long double ld;

int n, maxi, nr;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i++){
        int x, ogl = 0;
        cin >> x;
        
        int aux = x;
        while(aux){
            ogl = ogl*10 + aux%10;
            aux /= 10;
        }
        if(ogl%10 > maxi){
            maxi = ogl%10;
            nr = x;
        } else if(ogl%10 == maxi && x > nr){
            nr = x;
        }
    }
    cout << nr;

    return 0;
}