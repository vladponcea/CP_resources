#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    char s[101];
    int i, j;
    cin.getline(s, 101);
    i = 0;
    while(i < strlen(s))
        if(s[i] == ',') {
            j = i+1;
            while(s[j] != ' ' && j < strlen(s))
                j++;
            strcpy(s+i, s+j);
            i++;
        } else {
            i++;
        }
    cout << s;

    return 0;
}
