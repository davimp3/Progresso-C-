#include <iostream>
#include <string>

using namespace std;

		int main(){
		
		string  menu [4]= {
				"Digite um n�mero inteiro:",
				"Resulato � par:",
				"Resultado � impar:",
				"Numero negativo."
		};
		int num;
		
			cout<<menu[0]<<endl;
				cin>>num;
				
				if(num < 0){
					cout<<menu[4]<<num<<endl;
				}	else if (num % 2==0){
						cout<<menu[1]<<num<<endl;
				}		else{
							cout<<menu[2]<<num<<endl;
				}
				
			
			
			return 0;
	}
