#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
char s[256];

int32_t main() {
    cin.getline(s, 256);

    int i = 0, j = 0;
    while(i < strlen(s)) {
        j = i;
        while(j < strlen(s) && s[j] != ' ') {
            j++;
        }
        if(j-i >= 3) {
            strcpy(s+i+1, s+j-1);
            i += 3;
        } else 
            i = j+1;
    }

    cout << s;
}
