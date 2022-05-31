#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ifstream f("bac.txt");

int r, maxi, x, y, nr, maxir;

int main() {
    f >> x;
    while(f >> y) {
        if(r == 0) {
            r = y-x;
            nr+=2; 
        } else if(y-x == r) {
            nr++;
        } else {
            if(nr > maxi) {
                maxi = nr;
                maxir = r;
                cout << maxi << '\n';
            }
            else if(nr == maxi && r > maxir) {
                maxir = r;
            }
            nr = 0;
            r = 0;
        }
        x = y;
    }
    if(maxir)
        cout << maxir;
    else
        cout << "nu exista";
        
    return 0;
}
