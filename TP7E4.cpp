#include<iostream>
#include<vector>
using namespace std;
class CEmpleados{
	private:
		string nombre;
		int salario;
		int horas;
	public:
		void inicializar();
		void tabla();
};
void CEmpleados::inicializar(){
	cout<<"Ingresar nombre y apellido del empleado: ";
	getline(cin,nombre);
	cout<<"Ingresar salario semanal del empleado (solo el numero): ";
	cin>>salario;
	cout<<"Ingresar horas diarias del empleado: ";
	cin>>horas;
}
void CEmpleados::tabla(){
	float pagoxhora;
	pagoxhora=salario/horas;
	cout<<nombre<<endl<<"Horas por dia     "<<"Incremento salarial"<<endl;
	for(int n=horas+2;n<=11;n+=2){
		cout<<n<<"                   "<<pagoxhora*n<<endl;
	}
	cout<<"12"<<"                   "<<pagoxhora*12<<endl;
}

int main(){
	CEmpleados empleado;
	empleado.inicializar();
	empleado.tabla();
}
