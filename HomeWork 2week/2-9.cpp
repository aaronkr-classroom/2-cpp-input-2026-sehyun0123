#include<iostream>
#include <string>


using std::cin; using std::endl;
using std::cout; using std::string;

int main(void)
{
	int x;
	int y;

	cout << "enter 2 numers : " << endl;
	cin >> x >> y;

	if (x > y) 
		cout << x << "is bigger than " << y << endl;
	else if (x = y)
		cout << x << "is equal " << y << endl;
	else
		cout << x << "is smaller than " << y << endl;
	
	return 0;
}