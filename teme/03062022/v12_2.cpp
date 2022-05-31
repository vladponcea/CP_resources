#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

char s[101];

int main() {
    cin.getline(s, 101);
    for (int i = strlen(s)-1; i >= 0; i--) {
        if(strchr("aeiou", s[i])) {
            strcpy(s+i, s+i+1);
            cout << s;
            return 0;
        }
    }
    cout << "nu exista";
    return 0;
}
