#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	int user, soma, casa = 1, digitos;
	
	cout<<"Insira um numero: ";
	cin>>user;
	
	while(soma < casa){
		digitos = (user/casa)%10;
		soma += digitos;
		casa*=10;
	
	}
	cout<<"A soma dos digitos é: "<<soma;
	
}
