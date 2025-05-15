#include <iostream>
#include <string>

using namespace std;

		int main(){
		
		string  menu [4]= {
				"Digite um número inteiro:",
				"Resulato é par:",
				"Resultado é impar:",
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
