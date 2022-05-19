#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

char s[101];

int main() {
    cin.getline(s, 101);
    int i = 0, j = 0;
    while(i < strlen(s)) {
        if(s[i] == '-') {
            j = i;
            while(s[j] != ' ') {
                j++;
            }
            strcpy(s+i-1, s+i+j);
            cout << s << '\n';
            i = j+1;
        } else
            i++;
    }

    cout << s;

    return 0;
}
