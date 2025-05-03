#include <iostream>
#include <string>

using namespace std;

	int main (){
		string  menu [6] = {
			"Selecione qual calculo gostaria de realizar: [ 1()Soma / 2()Subtracao / 3()Miltiplicacao / 4()Divisao",
			"Digite o primeiro valor::",
			"Digite o segundo valor:",
			"O resultado da operacao e:",
		};
		
		int operacao;
		int soma, sub, mul, div, n0, n1;
		
		
		cout<<menu[0]<<endl;
			cin>>operacao;
			
		cout<<menu[1]<<endl;
			cin>>n0;
			
		cout<<menu[2]<<endl;
			cin>>n1;
			
				switch (operacao){
					
					case 1: {
						soma = n0+n1;
						cout<<menu[3]<<soma<<endl;
						break;
					}
					
					case 2: {
						sub = n0-n1;
						cout<<menu[3]<<sub<<endl;
						break;
					}
					case 3: {
						mul = n0*n1;
						cout<<menu[3]<<mul<<endl;
						break;
					}
					case 4: {
						div = n0/n1;
							if(n1 == 0){
								cout<<"Operacao invalida"<<endl;
							}
							else{
								cout<<menu[3]<<div<<endl;
							}
						break;
					}
				}
				
				return 0;
	}
