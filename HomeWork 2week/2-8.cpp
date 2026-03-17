#include<iostream>
#include <string>


using std::cin; using std::endl;
using std::cout; using std::string;

int main(void)
{
	int x = 1;

	for (int i = 1; i < 10;i++)
	{
		x *= i;

	}
	cout << x << endl;

	return 0;
}