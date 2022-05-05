#include <bits/stdc++.h>
using namespace std;

//ifstream f("a.in");
//ofstream g("a.out");

int n, nri, nrp;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(x%2 == 0){
            nrp++;
        } else {
            nri++;
        }
    }
    cout << abs(nri - nrp);
    

    return 0;
}