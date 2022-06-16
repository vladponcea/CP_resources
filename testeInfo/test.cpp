#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    char s[100], aux[100];
    strcpy(s, "voalata");
    cout << strlen(s) << '\n';
    int i = 0;
    while(i < strlen(s)) {
        if(strchr("aeiou", s[i]) != NULL) {
            strcpy(aux, s+i+1);
            cout << aux << ' ';
            strcpy(s+i, aux);
            cout << s << '\n';
            i++;
        } else {
            i += 2;
        }
    }

    return 0;
}
