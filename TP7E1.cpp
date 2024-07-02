#include<iostream>
#include<vector>
using namespace std;
class numero{
	private:
		int num;
	public:
		void ingresar();
		void recorrido();
};
void numero::ingresar(){
	cout<<"Ingresar un numero entero: ";
	cin>>num;
}
void numero::recorrido(){
	for(int n=0;n<num;n++){
		cout<<n+1<<" ";
	}
}

int main(){
	numero numero1;
	numero1.ingresar();
	numero1.recorrido();
}
