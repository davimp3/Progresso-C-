#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;

	int main(){
		string menu [4] = {
			"Digite um numero aleatório entre *0 e 5*",
			"Parabens, voce acertou!",
			"Poxa que pena, voce nao acertou, gostaria de tentar novamente? [S | N]",
			"Jogo encerado",
		};
		
		string menu1;
		
		int num, numAleatorio;
		bool tentativa = true;
		
		
			srand(time(0));
			numAleatorio = rand() %4+1;
//			srand(static_cast<unsigned int>(time(0)));
//			numAleatorio = rand() %6;
			
		
			while (tentativa){
				cout<<menu[0]<<endl;
					cin>>num;
					if(num < 0 || num > 5){
						cout<<"numero invalido"<<endl;
					}
				
				
					if(num == numAleatorio){
						cout<<menu[1]<<endl;
							tentativa = false;
					} else{
						cout<<menu[2]<<endl;
							cin>> menu1;
								if( menu1 == "N" || menu1 =="n"){
									tentativa = false;
								} 
					}
					
				
			}
			
			cout<<menu[3]<<endl;
			
			return 0;
		
		
	}
