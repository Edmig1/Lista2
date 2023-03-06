#include <iostream>
using namespace std;

main(){
	int user, result, i;
	
	cout<<"Insira un numero: ";
	cin>>user;
	
	while(i < user){
		i++;		
		result = user%i;

		if(result == 0){
			cout<<i<<endl;
		}
	}
}
