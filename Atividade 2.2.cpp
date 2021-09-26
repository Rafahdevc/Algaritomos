#include<iostream>

int main (){
	
	int grausC = 0;
	int grausF = 0;
	
	std::cout << "Digite o graus Celsisus: ";
	std::cin >> grausC;
	
	grausF = (9 * grausC + 160) / 5;
	std::cout << "Valor convertido de Celsius para Fahrenheit: "
	<< grausF;

	
	return 0;
}
