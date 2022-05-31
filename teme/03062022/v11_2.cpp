#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

char s[101], *p, t[101];

int main() {
    cin.getline(s, 101);
    p = strtok(s, " ");
    while(p != NULL) {
        for (int i = 1; i < strlen(p); i++) {
            if(p[i] >= 'A' && p[i] <= 'Z')
                p[i] += 32;
        }
        if(p[0] >= 'a' && p[0] <= 'z')
            p[0] -= 32;
        strcat(t, p);
        t[strlen(t)] = ' ';
        p = strtok(NULL, " ");
    }

    strcpy(s, t);
    cout << s;

    return 0;
}
