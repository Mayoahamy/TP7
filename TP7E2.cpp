#include<iostream>
#include<vector>
using namespace std;
class num{
	private:
		int n1,n2;
	public:
		void inicializar();
		void mayor();
};
void num::inicializar(){
	cout<<"Ingresar un numero entero: ";
	cin>>n1;
	cout<<"Ingresar otro numero entero: ";
	cin>>n2;
}
void num::mayor(){
	if(n1>n2){
		cout<<n1<<" es el mayor.";
	}
	else if(n2>n1){
		cout<<n2<<" es el mayor.";
	}
	else{
		cout<<"Ambos numeros son iguales.";
	}
}

int main(){
	num num1;
	num1.inicializar();
	num1.mayor();
	return 0;
}
