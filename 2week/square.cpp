#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(void)
{
	cout << "1. Square Or 2. Rect? >>>";

	int option;
	cin >> option;

	if(option != 1 && option != 2){
		cout << "Error : Only choose 1 or 2";
		return 0x712F;
		}

	cout << "what size?>>>";

	int size;
	cin >> size;
	
	//행 출력
	for (int i = 0; i < size; i++) {
		//열 출력
		for (int j = 0; j < size; j++) {
			if (option == 1)
				cout << "*";//square
			else if (option == 2)
				cout << "**";//rectengle
			else {
				cout << "Error : Only choose 1 or 2";
				return 0x712F;
			}

		}
		cout << endl;
	}
	return 0;
}