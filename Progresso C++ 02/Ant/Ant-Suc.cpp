#include <iostream>
#include <string>

using namespace std;

	int main(){
		
		string  menu [4]= {
				"Digite um n�mero inteiro:",
				"O seu antecesor �:",
				", e seu sucessor �:"
		};
		int ant, suc, num;
		
			cout<<menu[0]<<endl;
				cin>>num;
				
				ant = num - 1;
				suc = num + 1;
				
			cout<<menu[1]<<ant<<menu[2]<<suc<<endl;
			
			
			return 0;
	}
