//Basic IVA calculator -- upload 19/04/2023

#include<iostream>

using namespace std;

int main () {
	
	int condicion;
	cout<<"\n DESEA CALCULAR EL MONTO CON IVA INCLUIDO (21%) DE UNA CIFRA?\n"<<endl;
	cout<<"\n Presione 1 para confirmar o 0 para salir del programa\n"<<endl;
	cin>>condicion;
	
		while (condicion>1)
		{
			cout<<"\n Error, por favor ingrese 1 para confirmar o 0 para salir del programa \n"<<endl;
			cin>>condicion;
		}
		while(condicion<0)
		{
			cout<<"\n Error, por favor ingrese 1 para confirmar o 0 para salir del programa \n"<<endl;
			cin>>condicion;
		}
		while(condicion!=0)
		{
			float amount, resoult, hundred, twentyone, x, end;
	
			hundred = 100; twentyone = 21; 
	
			cout<< "\n Ingrese el monto sobre el cual calcular IVA:\n"<<endl;
	
			cin>>amount;
	
			x = amount*twentyone;
			resoult= x/hundred;
			end = resoult + amount;
	
			cout<<"\n El monto ingresado con IVA incluido es:\n"<<endl;
			cout<< end<<endl;
			cout<<"\n INGERESE 1 PARA REALIZAR OTRO CALCULO O 0 PARA SAIR\n"<<endl;
			cin>>condicion;
		while (condicion>1)
			{
			cout<<"\n Error, por favor ingrese 1 para confirmar o 0 para salir del programa \n"<<endl;
			cin>>condicion;
			}
		while(condicion<0)
			{
			cout<<"\n Error, por favor ingrese 1 para confirmar o 0 para salir del programa \n"<<endl;
			cin>>condicion;
			}
		}

	cout<<"\n FIN DEL PROGRAMA, Presione 2 veces enter para salir..\n";
	fflush(stdin);
	getchar();
	system ("pause");
	return 0;
	
	
}
