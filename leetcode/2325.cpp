#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    string key, message;
    cin >> key >> message;
    string s = "", ans = "";
    char c = 'a';
    for(int i = 0; i < key.size(); i++) {
        s.push_back(c);
        c++;
    }
    for(int i = 0; i < message.size(); i++) {
        for(int j = 0; j < s.size(); j++) {
            if(message[i] == key[j]) {
                ans.push_back(s[j]);
            }
        }
    }
    
    cout << ans;

    return 0;
}
