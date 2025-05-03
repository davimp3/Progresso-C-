#include <iostream>
#include <string>

using namespace std;

	int main(){ 
	
	string menu [3] ={
		"Digite o valor do Produto:",
		"Qual sera a forma de pagamento:(Selecione a opcao) \n 1 - Pix, Dinheiro, Cheque, \n 2 - Credito a vista, \n 3 - Parcelado 2x \n 4 - Parcelado 3x + Acrescimo", 
//		 1 - Pix, Dinheiro, Cheque, 
//		 2 - Credito a vista 
//		 3 - Parcelado 2x, 
//		 4 - Parcelado 3x + Acrescimo
		"Valor final:",
	};
	
	double produto, total;
	int codigo, p1, p2, p3, p4;
	
		cout<<menu[0]<<endl;
			cin>>produto;
			
			cout<<menu[1]<<endl;
			cin>> codigo;
			
		switch (codigo) {
			case 1:{
				p1 = (produto*0.10);
				total = (produto-p1);
				cout<< menu[2]<<total<<endl;
				break;
			}
			case 2:{
				p2 = (produto*0.05);
				total = (produto-p2);
				cout<< menu[2]<<total<<endl;
				break;
			}
			case 3:{
				cout<<menu[2]<<produto<<endl;
				break;
			}
			case 4:{
				p4 = (produto*0.10);
				total = (produto+p4);
				cout<<menu[2]<<total<<endl;
				break;
			}
		} 
		
		return 0;
}
