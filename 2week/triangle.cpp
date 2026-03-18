#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(void)
{
	cout << "what size?>>>";

	int size;
	cin >> size;



	//행 출력
	for (int i = 0; i < size; i++) {
		//열 출력
		for (int j = 0; j < i; j++) {
			cout << " ";
		}
		for (int j = 0; j < (2 * size) - 1 - (i * 2); j++) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}