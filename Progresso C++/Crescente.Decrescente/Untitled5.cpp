#include <iostream>
#include <string>
# include <algorithm>


using namepace std;

	int main(){
		
		string option [] = {
			"Digite o valor para A", 
			"Digite o valor para B",
			"Digite o valor para C",
			"Digite o valor para I",
			"Valores em ordem crescente",
			"Valores em ordem decrescente",
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
						sort(arr[3].begin(), arr[3].end());
						for(ar : arr){
							cout<<ar<<endl;
						}
						
					}
					

		
		
	}
