#include <fstream>
#include <iostream>
using namespace std;

ifstream f("bac.in");

int x, v[100] = {0}, ok;

int main() {
    while(f >> x) {
        v[x] = 1;
    }
    x = 99, ok = 0;
    while(ok == 0 && x >= 1) {
        if(v[x] == 1 && v[100-x] == 0) {
            cout << 100-x;
            ok = 1;
        } else 
            x--;
    }
    if(ok == 0)
        cout << "nu exista";

    f.close();
    return 0;
}
