#include <iostream>
#include <string>

using namespace std;

void solve(string b) {


	string str (b);
	int c = str.length();	
	if (c <= 10){
		cout << b << "\n";
	}
	else {
		char first =  b[0];
		char last =  b.back();
		int total = c - 2;
		cout << first << total << last << "\n";
	}

}

int main() {
	int t;
	string b;
	cin >> t;	
	while (t--) {
		cin >> b;
		solve(b);
	}

}
