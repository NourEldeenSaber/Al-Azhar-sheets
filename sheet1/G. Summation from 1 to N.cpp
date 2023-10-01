#include <iostream>  
#include <string>
using namespace std;

int main()
{
	long long number, summation;
	cin >> number;

	summation = (number * (number + 1)) / 2;

	cout << summation << endl;


	return 0;
}