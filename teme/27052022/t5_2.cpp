#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

char s[101], *p;

int main() {
    cin.getline(s, 101);
    p = strtok(s, " ");
    int nr = 0;
    while(p != NULL) {
        if(!strchr(p, ',')) {
            for (int i = 0; i < strlen(p); i++) {
                if(strchr("0123456789", p[i])) {
                    nr++;
                    break;
                }
            }
        }
        p = strtok(NULL, " ");
    }
    cout << nr;

    return 0;
}
