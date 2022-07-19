#include <iostream>
#include <array>
#include <algorithm>


const size_t arraySize = 10;

void printArray(std::array <int,arraySize>&angka) {
	std::cout << "array: ";
	for (int &a : angka) {
		std::cout << a << " ";
	}
	std::cout << std::endl;
}

void printArray(std::array <char,arraySize>&huruf) {
	std::cout << "array: ";
	for (char &a : huruf) {
		std::cout << a << " ";
	}
	std::cout << std::endl;

}

int main() {
	std::array <int,arraySize> angka = {2,5,6,7,1,3,4,9,8,0};
	// std::array <char,arraySize> huruf = {'r','e','w','x','y','u','q','a','b','c'};

	int cariAngka;
	bool ketemu;
	
	std::cout << "mencari angka dalam array: ";
	std::cin >> cariAngka;

	std::sort(angka.begin(),angka.end());
	ketemu = std::binary_search(angka.begin(), angka.end(), cariAngka);

	if (ketemu) {
		std::cout << "ketemu" << std::endl;
	} else {
		std::cout << "tidak ketemu" << std::endl;
	}

}