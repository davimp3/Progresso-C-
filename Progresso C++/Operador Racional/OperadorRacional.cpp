 #include <iostream>
 #include  <string>
 using namespace std;
 
 
 int main (){
 	int idade;
 	int maiorId = 18;
 	std::string cnh = "Informe abaixo a sua idade:";
 	
 	cout<<cnh<<endl; 
 	cin>>idade;
 		if(idade < maiorId){
 			int aut = idade - maiorId;
 			cout<<"Voce ainda nao atingiu a idade minima, faltam"<<aut<< "anos."<<endl;
		 } else {
		 	cout<< "Voce esta apto, para inciar o processo acesse o site: #"<<endl;
		 }
 	
 }
