#include<iostream>
#include<vector>
using namespace std;
class CNumeros{
	private:
		int num;
	public:
		void inicializar();
		void perfecto();
};
void CNumeros::inicializar(){
	cout<<"Ingresar un numero entero positivo: ";
	cin>>num;
}
void CNumeros::perfecto(){
	vector<int> divs,perfectos;
	int sum=0;
	for(int x=1;x<=num;x++){
		sum=0;
		if(x%2==0){
			for(int n=1;n<=x/2;n++){
				if(x%n==0){
					divs.push_back(n);
				}
			}
			for(int n=0;n<divs.size();n++){
				sum+=divs[n];
			}
			if(sum==x){
				perfectos.push_back(x);
			}
		}
		divs.clear();
    }
    cout<<"Los numeros perfectos entre 1 y "<<num<<" son: "<<endl;
    for(int n=0;n<perfectos.size();n++){
    	cout<<perfectos[n]<<endl;
	}
}
int main(){
	CNumeros n1;
	n1.inicializar();
	n1.perfecto();
	return 0;
}
