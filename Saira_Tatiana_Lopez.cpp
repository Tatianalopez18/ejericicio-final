#include <iostream>
#include<ctime>
#include <vector>
#include<math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace	std;


void printFor(vector<int> array);
void printwhile(vector<int> array);
void printMiddle(vector<int> array);
void printPair(vector<int> array);

int main() {
	int array_size, selection;	
	srand((unsigned)time(0));
	
	cout<<"Ingrese el tamano del arreglo"<<endl;
	cin>>array_size;
	vector<int> array(array_size);
	
	cout<<"Ingrese el metodo por el que quiere llenar los datos del array \n 1. Automatico (numeros entre 100 y 200) \n 2. Manual ingresando numeros entre 0 y 99."<<endl;
	cin>>selection;
	
	if(selection==1){
		for(int i=0;i<array_size;i++){		
		array[i]=((rand()%100)+100);
		}
	}
	printFor(array);
	printwhile(array);
	printMiddle(array);
	printPair(array);
	return 0;
}

void printFor(vector<int> array){
	for(int i=0;i<array.size();i++){		
		cout<<"For: "<<array[i]<<endl;
	}
}
void printwhile(vector<int> array){
	int i=0;
	while(i<array.size()){
		cout<<"While: "<<array[i]<<endl;
		i++;
	}
}
void printMiddle(vector<int> array){
	double size;
	int module =array.size()%2;
	if( module>0){
		size = ceil((array.size())/2);	
	}else{
	    size = ceil((array.size()-1)/2);	
	}	
	cout<<"Mitad: "<<array[size]<<endl;	
}
void printPair(vector<int> array){
	vector<int> pares;
	for(int i=0;i<array.size();i++){
		int module = array[i]%2;
		if(module==0){
			pares.push_back(array[i]);				
		}	
	}
	for(int i=0;i<pares.size();i++){
		cout<<"Pares: "<<pares[i]<<endl;
	}
	
}


