#include <iostream>
#include <string>

using namespace std;
	
	int main (){
			string  menu [4]= {
				"Digite o valor do seu salário:",
				"O aumento é de: R$",
				". O valor final fica em: R$",
			};
			
			double salario;
			double sMinimo = 1250;
			double aumento1 = 0.10;
			double aumento2 = 15;
			
				cout<<menu[0]<<endl;
					cin>>salario;
					
					if(salario > sMinimo){
						aumento1 = salario*aumento1;
							cout<<menu[1]<<aumento1<<endl;
						aumento1 = aumento1+salario;
							cout<<menu[2]<<aumento1<<endl;
					} else if (salario <= sMinimo){
						cout<<menu[1]<<aumento2<<endl;
							aumento2 = aumento2+salario;
						cout<<menu[2]<<aumento2<<endl;
						
					}
					
					return 0;
	}
