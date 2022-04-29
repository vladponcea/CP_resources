#include <bits/stdc++.h>
using namespace std;

ifstream f("sir147.in");
ofstream g("sir147.out");

int x;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    while(f >> x){
        if(x%3 == 1)
            g << x << ' ';
    }
    

    return 0;
}