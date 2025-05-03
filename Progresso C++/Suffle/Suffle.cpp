#include <iostream>
#include <string>

using namespace std;

	int main (){
		
		int a, b;
		string interacao [5] = {
			"Digite valor para A:",
			"Digite valor para B:",
			"A equivale:",
			"B equivale",
		};
		
		cout<< interacao[0]<< endl;
			cin>> a;
			
		
		cout<< interacao[1]<<endl;
			cin>> b;
			
			int temp = a;
			a = b;
			b = temp;
			
		
		cout<< interacao[2]<<a<<endl;
		
		cout<< interacao[3]<<b<<endl;
		
		return 0;
	}
