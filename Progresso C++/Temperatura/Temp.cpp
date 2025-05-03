#include <iostream>
#include <string>

using namespace std;

	int main (){
		string  menu [6] = {
			"Qual a medida de temperatura de sua cidade? [ 1()Celsius / 2()Kelvin / 3()Fahrenheit",
			"Digite a temperatura:",
			"Conversao em outras medidas:",
			"Fahrenheit",
			"Celsius",
			"Kelvin",
		};
		
		int temp;
		int f, c, k, graus;
		
		
		cout<<menu[0]<<endl;
			cin>>temp;
			
		cout<<menu[1]<<endl;
			cin>>graus;
			
				switch (temp){
					
					case 1: {
						f = graus*(9/5)+32;
						k = graus+273;
						cout<< menu[2] << menu[3] << f << menu[5] << k <<endl;
						break;
					}
					
					case 2: {
						c = graus-273.15;
						f = (graus-273.15)*9/5+32;
						cout<< menu[2] << menu[4] << c << menu[3] << f <<endl;
						break;
					}
					case 3: {
						c = (graus-32)*5/9;
						k = (graus-32)*5/9+273.15;
						cout<< menu[2] << menu[4] << c << menu[5] << k <<endl;
						break;
					}
				}
				
				return 0;
	}
