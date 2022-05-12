#include <iostream>
using namespace std;

int n, a[100][100];


int main(){
    
    for (int i = 1; i <= 6; i++) {
        for (int j = 1; j <= 6; j++) {
            a[i][j] = (i-1)*6+j;
        }
    }

    for (int i = 1; i <= 6; i++) {
        for (int j = 1; j <= 6; j++) {
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }

    int p = 0;
    for (int i = 1; i <= 6; i++) {
        if(a[i][7-i]%2 != 0)
            p += a[i][i];
    }

    cout << p;

	return 0;
}
