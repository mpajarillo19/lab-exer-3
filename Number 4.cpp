#include <iostream>
using namespace std;

int main(){
	char char1, char2;
	
	cout << "Enter First Character: ";
	cin >> char1;
	cout << "Enter Second Character: ";
	cin >> char2;
	
	for(char between = char1; between <= char2; between++)
	{
		cout << between;
	}
	system ("pause > 0");
	return 0;
}
