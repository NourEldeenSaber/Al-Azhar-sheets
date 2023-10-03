#include <iostream>  
#include <string>
#include <cctype>

using namespace std;

int main()
{
	char alpha , upper , lower;
	cin >> alpha;

	upper = toupper(alpha);
	lower = tolower(alpha);

	if (alpha == upper) {
		cout << lower << endl;
	}else if(alpha == lower){
		cout << upper << endl;
	}

	return 0;

}