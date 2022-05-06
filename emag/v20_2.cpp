#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
char s[256];

int32_t main() {
    cin.getline(s, 256);

    int i = 0, j = 0;
    while(i <= strlen(s) && j <= strlen(s)) {
        if(s[j] == ' ' && j-i > 3) {
            strcpy(s+i, s+i+j+1);
            i = j;
            j++;
        } else {
            j++;
        }

    }

    cout << s;
}
