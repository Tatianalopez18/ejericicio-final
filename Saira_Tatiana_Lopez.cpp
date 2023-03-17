#include <iostream>
#include<ctime>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace	std;

int main() {
	int array_size, selection;	
	
	srand((unsigned)time(0));
	
	cout<<"Ingrese el tamano del arreglo"<<endl;
	cin>>array_size;
	int array[array_size];
	
	cout<<"Ingrese el metodo por el que quiere llenar los datos del array \n 1. Automatico (numeros entre 100 y 200) \n 2. Manual ingresando numeros entre 0 y 99."<<endl;
	cin>>selection;
	
	if(selection==1){
		for(int i=0;i<array_size;i++){
			cout<< (rand()%100)+100<<endl;	
		}		
	}
	
	return 0;
}