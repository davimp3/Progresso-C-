#include <iostream>
#include <string>

using namespace std;

	int main(){
		
		string menu[7]{
		"Digite a quantidade de lados:",
		"Triangulo.",
		"Quadrado.",
		"Pentagono.",
		"Hexagono.",
		"Poligno desconhecido.",
		"O valor de cada angulo e:"
		};	
		
		int poligono, resultadoAng;
		
		
			cout<<menu[0]<<endl;
				cin>>poligono;
				
		
			switch (poligono){
				case 3:{
						resultadoAng = 360/poligono;
						cout<<menu[1]<<menu[6]<<resultadoAng<<endl;		
					break;
				}
				case 4:{
						resultadoAng = 360/poligono;
						cout<<menu[2]<<menu[6]<<resultadoAng<<endl;
					break;
				}
				case 5:{
						resultadoAng = 360/poligono;
						cout<<menu[3]<<menu[6]<<resultadoAng<<endl;
					break;
				}
				case 6:{
						resultadoAng = 360/poligono;
						cout<<menu[4]<<menu[6]<<resultadoAng<<endl;
					break;
				}
				
			}
			
			if(poligono >= 7){
					resultadoAng = 360/poligono;
					cout<<menu[5]<<menu[6]<<resultadoAng<<endl;
			}
			
			return 0;
	}
