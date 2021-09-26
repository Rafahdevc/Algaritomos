#include<iostream>

int main(){
	
	int numero1 = 0;
	int numero2 = 0;
	int resultado = 0;
	int numero8 = 8;
	
	std::cout << "Digite um numero: ";
	std::cin >> numero1;
	std::cout << "Digite o segundo numero: ";
	std::cin >> numero2;
	
	resultado = numero1 + numero2;
	
	if(resultado > 20){
	
		std::cout << resultado + 8;
		
	}else if(resultado == 20){
		
		std::cout << resultado - 5;
	
	}else if(resultado < 20){
		
		std::cout << resultado - 5;
	
	}
	
	
	
	return 0;
}
