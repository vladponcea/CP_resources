#include <bits/stdc++.h>
using namespace std;

//ifstream f("a.in");
//ofstream g("a.out");

int n, sp, spp, nr10, s3;
vector<int> v;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for(int i = 1; i <= n; i++){
        int x;
        cin >> x;
        if(x%2 == 0){
            sp += x;
        }
        if(i%2 == 0){
            spp += x;
        }
        if(x%10 == 0){
            nr10++;
        }
        if(x%3 == 0 && i%2 != 0){
            s3 += x;
        }
        v.push_back(x);
    }

    for(int i = n-1; i >= 0; i--){
        cout << v[i] << ' ';
    }
    cout << '\n' << sp << '\n' << spp << '\n' << nr10 << '\n' << s3;

    return 0;
}