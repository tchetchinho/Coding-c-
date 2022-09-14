#include <iostream>

int main()
{
	int n = 0, som = 0;

	std::cout << "Ceci est un programme qui calcule la somme de 0 à N \n\n";
	std::cout << "Entrez un nombre : ";
	std::cin >> n;

	for (int i(0); i < n; i++, som += i)
		std::cout << i << " + ";

	std::cout << n << " = " << som;

	return 0;
}
