#include <bits/stdc++.h>
using namespace std;

//ifstream f("a.in");
//ofstream g("a.out");

int n;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for(int i = 2; i <= n; i++){
        if(n%i == 0){
            cout << i*i;
            break;
        }
    }

    return 0;
}