#include <iostream>
#include <string>
#include <cmath>
using namespace std;
	
		int main(){
			string menu []{
				"Digite o valor do Cateto Oposto",
				"Digite o valor do Cateto Adjacente",
				" O comprimento da hipotenusa é de:",
			};
			
			double co, ca, h, a, b, c;
			
				cout<<menu[0]<<endl;
					cin>> a;
					
				cout<<menu[0]<<endl;
					cin>> b;
					
					co = pow(a, 2); 
					ca = pow(b, 2);
					
					c = ca+co;
					
					h = sqrt(c);
					
					cout<<menu[2]<<h<<endl;
					
					return 0;
					
		}
