#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

	   	


int main () {
	
	int a,b,x,y,z;
	cin >> a;
	int r=0;
	for (int i=0;i<a;i++){
		cin >> x;
		cin >> y;
		cin >> z;
		b = x+y+z;
		if (b>=2){
			r++;
		}	
	}
	cout << r;
	getch();
}



