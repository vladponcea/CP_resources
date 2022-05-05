#include <bits/stdc++.h>
using namespace std;

//ifstream f("a.in");
//ofstream g("a.out");

int n, mini = INT_MAX, maxi = INT_MIN;
vector<int> v;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(x > maxi){
            maxi = x;
        }
        if(x < mini){
            mini = x;
        }
        v.push_back(x);
    }
    int d = maxi - mini, nr = 0;

    for(int i = 0; i < n; i++){
        if(v[i] == d){
            nr++;
        }
    }
    cout << nr;

    return 0;
}