#include <iostream>
#include <string>
# include <algorithm>


using namespace std; 

	int main(){
		
		string option [7] = {
			"Digite o valor para A", 
			"Digite o valor para B",
			"Digite o valor para C",
			"Digite o valor para I",
			"Valores em ordem crescente",
			"Valores em ordem decrescente",
			"Valor invalido!",
		};
		
		double arr[3];
		int i;
		
			cout<<option[0]<<endl;
				cin>>arr[0];
				
			cout<<option[1]<<endl;
				cin>>arr[1];
				
			cout<<option[2]<<endl;
				cin>>arr[2];
				
			cout<<option[3]<<endl;
				cin>>i;
					
					if(i == 1){ 
						cout<<option[4]<<endl;
						sort(arr, arr + 3);
						for(double valor : arr){
							cout<<valor<<endl;
					
						} else if (i ==2) {
							cout << option[5] << endl;
        					sort(arr, arr + 3, greater<double>()); // Ordena decrescente
        					for (double valor : arr) {
        				    cout << valor << endl;
						} else {
							cout<<option[6]<<endl;
						}
						
					}
					
		return 0;
		
		
	}
