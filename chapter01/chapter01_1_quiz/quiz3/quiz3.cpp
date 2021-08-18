#include <iostream>

int main(void) {
	int num;
	int res;

	std::cout << "출력할 단 : ";
	std::cin >> num;

	std::cout << "==========" << std::endl;
	for (int i = 1; i < 10; i++) {
		res = num * i;
		std::cout << num << " * " << i << " = "<< res << std::endl;
	}
	std::cout << "==========" << std::endl;

	return 0;
}