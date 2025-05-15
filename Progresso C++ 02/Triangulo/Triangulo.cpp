#include <iostream>
#include <string>

using namespace std;

	int main(){
		string menu [3]{
			"Digite os valor de cada lado do triango [a, b, c]",
			"0 ou negativo, nao e possivel formar um triangulo.",
			"Com os dados informados e possivel fazer um triangulo",
		};
		
		double a, b, c;
		
			cout<<menu[0]<<endl;
				cin>>a;
				cin>>b;
				cin>>c;
				
				if ( a <= 0 || b <= 0 || c <= 0){
						cout<<menu[1]<<endl;					
				} else if(a+b>c && a+c>b &&b+c>a){
						cout<<menu[2]<<endl;
				}
				
				return 0;
				
	}
