#include <bits/stdc++.h>
using namespace std;

//ifstream f("a.in");
//ofstream g("a.out");

int n;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    int nr = 0;
    for(int i = 1; i*i <= n; i++){
        if(n%i == 0){
            if(i%2 == 0)
                nr++;
            if(i*i != n && ((n/i)%2 == 0))
                nr++;
        }
    }
    cout << nr;

    return 0;
}