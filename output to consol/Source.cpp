#include <iostream>
#include <string>

using namespace std;

int main() {



	int a;
	int b;
	char c;

	cout << "input first value \n";
	cin >> a;

	cout << "input math function \n";
	cin >> c;
	
	cout << "input second value \n";
	cin >> b;
	

	switch (c) {
		case '+':
			cout << a + b << "=" << a << c << b << endl;
			break;
		case '-':
			cout << a - b << "=" << a << c << b << endl;
			break;
		case '*':
			cout << a * b << "=" << a << c << b << endl;
			break;
		case '/':
			cout << a / b << "=" << a << c << b << endl;
			break;
		default: 
			cout << "You Dumb" << endl;
	}



	return 0;
}