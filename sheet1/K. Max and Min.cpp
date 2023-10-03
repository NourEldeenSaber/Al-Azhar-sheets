#include <iostream>  
#include <string>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	
	int min, max;
	max = std::max(a, b);
	max = std::max(max, c);

	min = std::min(a, b);
	min = std::min(min, c);

	cout << min << " " << max << endl;

	return 0;

}