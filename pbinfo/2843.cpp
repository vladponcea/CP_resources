#include <bits/stdc++.h>
using namespace std;

ifstream f("puteri6.in");
ofstream g("puteri6.out");

int n, v[10], x;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    f >> n;
    while(f >> x){
        if(x == 1){
            v[0]++;
        } else {
            int nr = 0;
            while(x){
                nr++;
                x /= 10;
            }
            v[nr]++;
        }
    }
    int i = 0;
    while(n){
        if(v[i]){
            v[i]--;
            n--;
        } else {
            i++;
        }
    }
    g << pow(10, --i);

    return 0;
}