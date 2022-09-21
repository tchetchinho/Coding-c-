/* C++ program to find a word is a palindrome*/

#include <iostream>


int main() {

	const std::string tab_word[ ]{ "rotor" , "word", "radar", "palindrome" };

	for (const auto& item : tab_word) {

		if (std::equal(item.cbegin(), item.cend(), item.crbegin(), item.crend()))
			std::cout << item << " is a palindrome\n";
		else
			std::cout << item << " is not a palindrome\n";
	}
	return 0;
}
