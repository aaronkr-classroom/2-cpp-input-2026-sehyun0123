#include <iostream>

int main(void)
{
	// 이름을 물음
	std::cout << "please enter your first name: ";
	//이름을 읽어 들임
	std::string name;
	std::cin >> name;

	//출력하려는 메시지를 구성
	const std::string greeting = "Hello, " + name + "!";
	/*
		****************** -> 1st
		*				 * -> 2nd
		* Hello name!    * -> 3rd
		*                * -> 4th
		****************** -> 5th
	*/

	//인사말의 두 번째 행과 네 번째 행
	const std :: string spaces(greeting.size(), ' ');
	const std::string second = "* " + spaces + " *";
	//인사말의 1번째 행과 5번째 행
	const std::string first(second.size(), '*');
	//모두 출력
	std::cout
		<< std::endl//줄 바꿈
		<< first << std::endl
		<< second << std::endl
		<< "* " << greeting << " *" << std::endl
		<< first << std::endl
		<< std::endl;
	return 0;
}