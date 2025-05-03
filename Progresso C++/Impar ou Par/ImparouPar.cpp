#include <iostream>
#include <string>

using namespace std;

int main(){
	int num;
	string iOuP = "Digite o numero abaixo para desobrir se e impar ou par:";
	
	cout<<iOuP<<endl;
	
	cin>>num;
		if(num %2 == 0 ){
			cout<<"Numero Par"<<endl;
		} else { 
			cout<<"Numero Impar"<<endl;
		}
}
