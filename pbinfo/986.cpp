#include <bits/stdc++.h>
using namespace std;

//ifstream f("a.in");
//ofstream g("a.out");

int n;
float v[1001];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    if(v[0] > v[n-1]){
        swap(v[0], v[n-1]);
    }

    int nr = 0;
    for(int i = 0; i < n; i++){
        if(v[i]<v[0]){
            nr++;
        } else if(v[i] > v[n-1]){
            nr++;
        }
    }
    cout << nr;

    return 0;
}