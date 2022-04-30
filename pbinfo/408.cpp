#include <bits/stdc++.h>
using namespace std;

//ifstream f("a.in");
//ofstream g("a.out");

int n, ogl;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    while(n){
        ogl = ogl*10 + n%10;
        n /= 10;
    }
    int nr = 0;
    for(int i = 1; i <= ogl; i++){
        if(ogl % i == 0){
            nr++;
        }
    }
    cout << nr;

    return 0;
}