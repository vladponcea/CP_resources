#include <fstream>
#include <iostream>
using namespace std;

ifstream f("bac.txt");

int x, v[10];

int main() {

    while(f >> x) {
        v[x]++;
    }

    for (int i = 0; i < 10; i++) {
        if(v[i] && i%2 == 0)
            cout << i << ' ';
    }

}
