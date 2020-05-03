/*EJERCICIO #3

A un trabajador le pagan según las horas trabajadas y la tarifa está determinada a un valor de Q36.00 por hora trabajada.
Si la cantidad de horas extras es mayor a 40 horas, la tarifa se incrementará un 25% para las horas extras. 
Realice un programa que, al ingresar las horas trabajadas, que calcule el salario del trabajador y la tarifa de horas extras.*/

#include <iostream>
#include <string>


using namespace std;
int main(){
int horastra,diferencia;
float opera,opera2,opera3;
	
	
	cout<<"-----------------------------"<<endl;
	cout<<"Calculo de Salario y Horas Extras"<<endl;
	cout<<"-----------------------------"<<endl;
	
	cout<<"Ingrese cuantas horas laboro el empleado: "<<endl;
	cin>>horastra;
	
	if(horastra>=40){
		diferencia = horastra - 40;
		opera = diferencia * 45;
		opera2 = opera + 1440;
		
		cout<<"                                                       "<<endl;
		cout<<"-------------------------------------------------------"<<endl;
		cout<<"El empleado tiene mas de 40 horas trabajadas"<<endl;
		cout<<"por lo cual las horas extras se pagaran con un"<<endl;
		cout<<"incremento del 25% sobre los Q36.00 de cada hora extra"<<endl;
		cout<<"-------------------------------------------------------"<<endl;
		cout<<"El empleado tiene "<<diferencia<<" horas extras"<<endl;
		cout<<"Estas horas equivalen a: ""Q"<<opera<<endl;
		cout<<"El nuevo sueldo del empleado es de: ""Q"<<opera2<<endl;
	}
	else{
		opera3 = horastra * 36;
		cout<<"                                "<<endl;
		cout<<"--------------------------------"<<endl;
		cout<<"El empleado no acumulo horas extras"<<endl;
		cout<<"--------------------------------"<<endl;
		cout<<"El empleado tiene "<<horastra<<" horas trabajadas"<<endl;
		cout<<"El sueldo del empleado es de: ""Q"<<opera3<<endl;
	}
	
	
}