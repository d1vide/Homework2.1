#include "Header.h"

int main() {
	setlocale(0, "");
	std::string str;
	std::cout << "Ввдите строку \n";
	std::cin >> str;
	std::cout << "Введеите действие со строкой \n 1. Удалить все минусы \n 2. Заменить все на 5 \n 3. Заменить все на рандомные числа\n";
	int n;
	std::cin >> n;
	if ((!std::cin) or (n > 3) or (n < 1)) {
		std::cout << "Введите корректное значение";
		return 0;
	}
	else if (n == 1) {
		std::cout << removeMinus(str);
	}
	else if (n == 2) {
		std::cout << changeFive(str);
	}
	else if (n == 3) {
		std::cout << changeRandom(str);
	}
	return 0;
}
