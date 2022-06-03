#include <iostream>
#include <fstream>
using namespace std;
ifstream fin ("bac.in");

int main() {
    
    int m, n, i, j, x, a, v[1000000];
    fin >> m >> n;
    
    for (i=0; i<m; i++)
        fin >> v[i];
    fin >> x;
    
    if (v[0] < x){
        cout << v[0] << " ";
        i = 1;
        j = 0;
        a = v[0];
    }
    else {
        cout << x << ' ';
        i = 0;
        j = 1;
        a = x;
        fin >> x;
    }
    
    while (i<m && j<n){
        if (v[i] < x){
            if (v[i] %2 != a%2){
                cout << v[i] << ' ';
                a = v[i];
            }
            i++;
        }
        else if (x < v[i]){
            if (x%2 != a%2){
                cout << x << ' ';
                a = x;
            }
            j++;
            fin >> x;
        }
        else {
            if (x%2 != a%2){
                cout << x << ' ';
                a = x;
            }
            i++;
            j++;
            fin >> x;
        }
        while (i<m){
            if (v[i]%2 != a%2){
                cout << v[i] << ' ';
                a = v[i];
                i++;
            }
        }
        while (j<m){
            if (x%2 != a%2){
                cout << x << ' ';
                a = x;
            }
            j++;
            fin >> x;
        }
    }
    
    fin.close();
    
    return 0;
}

