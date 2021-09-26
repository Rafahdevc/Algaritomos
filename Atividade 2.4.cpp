#include<iostream>

int main (){
	
	float grausC = 0;
	float grausK = 0;
	
	std::cout << "Digite o graus Celsius: ";
	std::cin >> grausC;
	
	grausK = grausC + 273.15;
	
	std::cout << "Valor de Celsius convertido para Kelvin: " << grausK;
	
	return 0;
}
