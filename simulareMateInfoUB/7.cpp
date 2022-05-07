#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int a[51][51];


int32_t main() {
    for (int i = 0; i < 51; i++) {
        for (int j = 0; j < 51; j++) {
            if((50*(i-1)+j)%7 == 0 || (50*(i-1)+j)%13 == 0) {
                a[i][j] = 1;
            } else {
                a[i][j] = 0;
            }
        }
    }



}
