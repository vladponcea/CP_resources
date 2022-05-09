#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;


int main() {
    int n;
    string s;
    map<string, string> mp;
    mp["purple"] = "Power";
    mp["green"] = "Time";
    mp["blue"] = "Space";
    mp["orange"] = "Soul";
    mp["red"] = "Reality";
    mp["yellow"] = "Mind";
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> s;
        mp[s] = "found";
    }
     
    cout << 6-n << '\n';
    for (auto i : mp) {
        if(i.second != "found")
            cout << i.second << '\n';
    }

    return 0;
}
