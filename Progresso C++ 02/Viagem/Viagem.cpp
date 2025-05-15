#include <iostream>
#include <string>

using namespace std;

	int main (){
		
		
			string  menu [4]= {
				"Digite a Kilometragem da viagem:",
				"O valor total ficará em: R$",
			};
			double km;
			double viagemCurta = 0.50;
			double viagemLonga = 0.45;
			double valorFinal;
			
				cout<<menu[0]<<endl;
					cin>>km;
					
					if(km < 200){
						km = km*viagemCurta;
						cout<<menu[1]<<km<<endl;
					}	else if (km > 200){
						km = km*viagemLonga;
						cout<<menu[1]<<km<<endl;
					}
					
					return 0;
	}
