#include <iostream>  
#include <string>

using namespace std;

int main()
{
	int num1, num2;
	char exp;
	cin >> num1 >> exp >> num2 ;
	if (exp == '+') {
		cout << num1 + num2 << endl;
	}
	else if (exp == '-') {
		cout << num1 - num2 << endl;
	}
	else if (exp == '*') {
		cout << num1 * num2 << endl;
	}
	else if (exp == '/') {
		cout << num1 / num2 << endl;
	}

	return 0;

}