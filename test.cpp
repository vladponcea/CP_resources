#include <bits/stdc++.h>
using namespace std;

int n, a[100][100];

int am(int x, int y) {
    if(x > y)
        return x%y+am(x-y, y);
    if(x < y)
        return y%x+am(x, y-x);
    return 1;
}


int f(int a, int b) {
    if(a > b) return a/b+f(a-b, b);
    if(a < b) return b/a+f(a, b-a);
    return 1;
}

int prim(int x) {
    int nr = 0;
    for (int i = 2; i <= x/2; i++) {
        if(x%i == 0)
            nr++;
    }
    if(nr != 0)
        return 0;
    else
        return 1;
}

int main(){
    cout << am(10, 4);
}
