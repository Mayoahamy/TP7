#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class CNumeros{
	private:
		int n1,n2,n3;
	public:
		void inicializar();
		void max_min();
};
void CNumeros::inicializar(){
	cout<<"Ingresar tres numeros, pulsar ENTER para ingresar cada uno: "<<endl;
	cin>>n1;
	cin>>n2;
	cin>>n3;
}
void CNumeros::max_min(){
	int n[3];
	n[0]=n1;
	n[1]=n2;
	n[2]=n3;
	sort(n,n+3);
	cout<<endl<<n[0]<<" es el menor, y "<<n[2]<<" es el mayor";
}

int main(){
	CNumeros num;
	num.inicializar();
	num.max_min();	
}
