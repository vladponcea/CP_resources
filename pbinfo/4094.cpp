#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
ifstream f("oneout.in");
ofstream g("oneout.out");

int c, n, x, y, z;

int liberpatr(int x) {
   for (int i = 2; i <= x/2; i++) {
       if(x%i == 0 && (int)sqrt(i)*(int)sqrt(i) == i)
           return 0;
   }
   return 1;
}

int32_t main() {
    f >> c >> n;
    if(c == 1) {
        int nr = 0;
        for (int i = 0; i < n; i++) {
           f >> x;
           if(liberpatr(x)) {
                nr++;
           }
        }
        g << nr;
    } else {
        int nr = 0, maxi = 0;
        f >> x >> y;
        if(liberpatr(x) && !liberpatr(y)) {
            nr = 0;
        } else if(!liberpatr(x) && liberpatr(y)) {
            nr = 1;
        } else if(liberpatr(x) && liberpatr(y)) {
            nr = 2;
        }
    }
}
