#include<iostream>

int main(){
	//Kilometragem
	int km           = 0;
	int tempo        = 0;
	int velocidade   = 0;
	int distancia    = 0;
	int litrosUsados = 0;
	//formula distancia = tempo*velocidade
	//formula calcula o litro litro usados = distancia / 12
	
	std::cout << "Digite o tempo que a viagem esta durando: ";
	std::cin >> tempo;
	std::cout << "Digite a velocidade que esta sendo percorrida: ";
	std::cin >> velocidade;
	
	distancia = tempo * velocidade;
	
	litrosUsados = distancia / 12;
	
	std::cout << "Velocida media: " << velocidade;
	std::cout << "Tempo gasto: " << tempo;
	std::cout << "Distancia percorrida" <<distancia;
	std::cout << "Litros usados: " << litrosUsados;
	
	return 0;
}
