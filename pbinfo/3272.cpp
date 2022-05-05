#include <bits/stdc++.h>
using namespace std;

//ifstream f("a.in");
//ofstream g("a.out");

int n, a[1001];
long long s;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        int ogl = 0;
        while(x){
            ogl = ogl*10 + x%10;
            x /= 10;
        }
        for(int i = 1; i*i <= ogl; i++){
            if(ogl%i == 0){
                s += i;
                s += ogl/i;
            }
            if(i*i == ogl){
                s -= i;
            }
        }
    }

    cout << s;

    return 0;
}