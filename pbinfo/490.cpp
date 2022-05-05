#include <bits/stdc++.h>
using namespace std;

//ifstream f("a.in");
//ofstream g("a.out");

int n, mini = INT_MAX, maxi = INT_MIN, imax, imin;
vector<int> v;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n; 
    for(int i = 0; i <  n; i++){
        int x;
        cin >> x;
        if(x < mini){
            mini = x;
            imin = i;
        }
        if(x > maxi){
            maxi = x;
            imax = i;
        }
        v.push_back(x);
    }

    if(imin < imax){
        swap(imin, imax);
    }

    for(int i = imax; i <= imin; i++){
        cout << v[i] << ' ';
    }

    return 0;
}