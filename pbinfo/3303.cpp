#include <fstream>
#include <cmath>
using namespace std;

ifstream f("nrcurat.in");
ofstream g("nrcurat.out");

int ogl(int x){
	int ans = 0;
	while(x){
		ans = ans*10 + x%10;
		x /= 10;
	}
	return ans;
}

int urm(int x){
	int nr = 0, aux = x;
	while(aux){
		nr++;
		aux /= 10;
	}
	int n = 0;
	while(nr){
		n = n*10+9;
		nr--;
	}
	return n-x;
}

int curat(int x){
	if(ogl(x) == urm(x))
		return 1;
	return 0;
}

int main(){
	int x;
	while(f >> x){
		g << curat(x) << ' ';
	}

	return 0;
}