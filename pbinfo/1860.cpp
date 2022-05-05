#include <bits/stdc++.h>
using namespace std;

ifstream f("blackfriday.in");
ofstream g("blackfriday.out");

int n, a[10], b[10], c[10], maxi, imaxi;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    f >> n;
    for(int i = 1; i <= n; i++){
        f >> a[i];
    }
    
    for(int i = 1; i <= n; i++){
        f >> b[i];
    }

    for(int i = 1; i <= n; i++){
        c[i] = 100-(float)b[i]*100/a[i];
    }

    for(int i = 1; i <= n; i++){
        if(c[i] > maxi){
            maxi = c[i];
            imaxi = i;
        }
    }
    g << imaxi;

    return 0;
}