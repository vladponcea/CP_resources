#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int nr;
char s[101], *p;

int main() {
    cin.getline(s, 101);
    p = strtok(s, " ");
    while(p != NULL) {
        int v = 0, c = 0;
        for (int i = 0; i < strlen(p); i++) {
            if(strchr("aeiou", p[i])) {
                v++;
            } else {
                c++;
            } 
        }
        if(v == c)
            nr++;
        p = strtok(NULL, " ");
    }

    cout << nr;

    return 0;
}
