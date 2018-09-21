// read first name:
#include "std_lib_facilities.h"		// our course header

int main()
{
	cout << "Please enter your first name (followed " << "by 'enter'):\n";
	string first_name;
	cin >> first_name;
	cout << "Hello, " << first_name << '\n';
}