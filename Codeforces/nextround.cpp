#include <iostream>
#include <conio.h>
using namespace std;

int main () {
	
	int a,b;
	cin >> a;
	cin >> b;
	int c[a];
	int i = 0;
	int z = a;
	int d;
	while (a--){
		cin >> d;
		c[i] = d;
		i++; 	
	}
	int p=0;
	for (int f=0;f<z; f++){
		if (c[f] >= c[b-1] && c[f]>0){
	        	p++;
		}
	}
	cout << p; 	
	return 0;
	getch();
	
}



