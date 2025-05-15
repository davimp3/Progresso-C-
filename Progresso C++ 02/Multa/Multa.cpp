#include <iostream>
#include <string>

using namespace std;

	int main (){
		
		
			string  menu [4]= {
				"Digite a velocidade do veículo:",
				"Multa no valor de:",
				"Velocidade permitida, sem multa.",
			};
			int kmh, multa;
			int velocidadeMax = 80;
			int multaPorKmExcedido = 7;
			
				cout <<menu[0]<<endl;
					cin>>kmh;
					
					if(kmh > velocidadeMax){
						multa = kmh - velocidadeMax;
						multa = multa*multaPorKmExcedido;
						cout<<menu[1]<<multa;
					} else {
						cout<<menu[2]<<endl;
					}
			
			
				
				
				return 0;
	} 

