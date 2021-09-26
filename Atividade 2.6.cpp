#include<iostream>

int main(){
	
	int numero = 0;
	
	std::cout << "Digite um numero de preferencia negativo: ";
	std::cin >> numero;
	
	if(numero || numero){
		std::cout << "Este numero e positivo";	
	}
	
	return 0;
}
