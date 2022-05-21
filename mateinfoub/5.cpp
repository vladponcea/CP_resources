#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int a[1001][1001];
    for (int i = 1; i < 1001; i++) {
        for (int j = 1; j < 1001; j++) {
            a[i][j] = ((i+j)%1000)+1;
        }
    }

    vector<int> sumlin;
    vector<int> sumcol;
    for (int i = 1; i < 1001; i++) {
        int s = 0;
        for (int j = 1; j < 1001; j++) {
            s += a[i][j];
        }
        sumlin.push_back(s);
    }

    for (int i = 1; i < 1001; i++) {
        int s = 0;
        for (int j = 1; j < 1001; j++) {
            s += a[j][i];
        }
        sumcol.push_back(s);
    }

    int maxi = 0;
    for (int i = 0; i < sumlin.size(); i++) {
        for (int j = 0; j < sumcol.size(); j++) {
            cout << abs(sumlin[i] - sumcol[j]) << '\n';
            if(abs(sumlin[i] - sumcol[j]) > maxi) {
                maxi = abs(sumlin[i] - sumcol[j]);
            }
        }
    }
    cout << maxi;


    return 0;
}
