#include <iostream>
#include <string>
#include <cmath>

using namespace std;

	int main(){
		string menu [3]= {
			"Digite um numero:",
			"O resultado do numero elevado ao quadrado:",
			"Raiz quadrada do número digitado:",
		};
		double raiz, quad, n0;
		
		cout<<menu[0]<<endl;
			cin>> n0;
			
			quad = pow(n0, 2);
			
			cout<<menu[1]<<quad<<endl;
			
			raiz = sqrt(n0);
			
			cout<<menu[2]<<raiz<<endl;
			
			return 0;
		
	}
