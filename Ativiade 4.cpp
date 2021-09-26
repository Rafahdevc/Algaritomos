#include<iostream>

int main(){
	
	int numero = 0;
	
	std::cout << "Digite um numero: ";
	std::cin >> numero;
	
	if(numero > 0){
		
		std::cout << "Este numero e positivo";
	}else if(numero < 0){
		std::cout << "Este numero e negativo;";
		
	}else if(numero == 0){
		std::cout << "Este numero e nulo";
	}
	
	return 0;
}
