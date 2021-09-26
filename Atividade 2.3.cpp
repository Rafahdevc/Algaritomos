#include<iostream>

int main(){
	
	int grausF = 0;
	int grausC = 0;
	
	
	std::cout << "Digite a temperatura em Fahrenheit:";
	std::cin >> grausF;
	
	grausC = ((grausF - 32) * 5) / 9;
	std::cout << "O valor convertido de Fahrenheit para Celsius e de:"
	<< grausC;
	
	return 0;
}
