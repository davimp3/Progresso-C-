#include <iostream>
#include <string>

using namespace std;

	int main(){
		int idade;
		string tse [3]{
			"Digite a sua idade:",
			"Possui idade para ser eleitor no Brasil",
			"Não possui idade para ser eleitor no Brasil",
		};
		
			cout<<tse[0]<<endl;
				cin>>idade;
				
					if(idade >= 16){
						cout<<tse[1]<<endl;
					} else {
						cout<<tse[2]<<endl;
					}
					
		return 0;
	}
