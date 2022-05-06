#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
char s[251];


int32_t main() {
    cin.getline(s, 251);
    
    int i = 0, j = 1;
    while(i <= strlen(s)-1 && j <= strlen(s)) {
        if(j-i > 3) {
            if(s[j] == ' ') {
                char c = s[i];
                s[i] = s[j-1];
                s[j-1] = c;

                i = j;
            } else {
                j++;
            }
        } else {
            j++;
        }
    }

    cout << s;
}
