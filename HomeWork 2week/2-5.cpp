#include<iostream>
#include <string>


using std::cin; using std::endl;
using std::cout; using std::string;

int main(void)
{
	int n  = 6;

	//정사각형
	

	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cout << "* ";
		}
		cout << endl;
	}
	cout << endl;
	cout << endl;
	//직사각형
	
	int rows = 4;
	int cols = 7;

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++){
			cout << "* ";
		}
		cout << endl;
	}
	cout << endl;
	cout << endl;
	// 삼각형

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j < i; j++) {
			cout << "* ";
		}
		cout << endl;
	}
	
	return 0;
}