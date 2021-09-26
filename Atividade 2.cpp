#include<iostream>

int main(){
	
	int numero1 = 0;
	int numero2 = 0;
	int resultado = 0;
	
	std::cout << "Digite o primeiro numero:";
	std::cin >> numero1;
	
	std::cout << "Digite o segundo numero: ";
	std::cin >> numero2;
	
	resultado = numero1 + numero2;
	
	if(resultado > 10){
		
	    std::cout << resultado;
	
	}
	return 0;
	}

