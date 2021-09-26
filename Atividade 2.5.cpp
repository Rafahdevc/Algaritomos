#include<iostream>

int main(){
	
	int grausF = 0;
	float grausK = 0;
	int grausC = 0;
	
	std::cout << "Digite o valor em Fahrenheit: ";
	std::cin >> grausF;
	
	grausC = ((grausF - 32) * 5) /9;
	
	grausK = grausC + 273.15;
	std::cout << "Graus convertido para Kelvin: " 
	<< grausK;
	
	return 0;
}
