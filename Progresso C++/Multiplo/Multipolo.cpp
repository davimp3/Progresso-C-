#include <iostream>

using namespace std; 

	int main (){
		int num = 0;
		
		cout<< "Digite um numero aleatorio abaixo:"<<endl;
			cin>>num;
			
				if(num % 5 == 0){
					cout <<num<< ", e multiplo de 5."<< endl;
				} else{
					cout<< num<< " nao e multiplo de 5!" << endl;
				}
				
		return 0;
		
	}
