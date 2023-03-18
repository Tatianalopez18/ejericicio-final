#include <iostream>
#include<ctime>
#include <vector>
#include<math.h>
#include <algorithm>

using namespace	std;

void printFor(vector<int> array);
void printwhile(vector<int> array);
void printMiddle(vector<int> array, int&);
void printPair(vector<int> array, vector<int>&);
void primeNumber(vector<int> array, vector<int>&);
void maximunNumber(vector<int> array, int&);
void sort(vector<int> array, vector<int>&);

int main() {
	int arraysize, selection, middle, max;
	vector<int> result, prime, sorting;		
	srand((unsigned)time(0));
	
	cout<<"Ingrese el tamano del arreglo"<<endl;
	cin>>arraysize;
	vector<int> array(arraysize);
	
	cout<<"Ingrese el metodo por el que quiere llenar los datos del array \n 1. Automatico (numeros entre 100 y 200) \n 2. Manual ingresando numeros entre 0 y 99."<<endl;
	cin>>selection;
	
	if(selection==1){
		for(int i=0;i<arraysize;i++){		
		array[i]=((rand()%100)+100);
		}
	}else{
		int i=0, num;
		
		while(i<arraysize){
			cout<<"Ingrese el numero en la posicion "<<i<<endl;
			cin>>num;
			if (num < 0 || num > 99){
				cout<<"No es un numero permitido";
			}else{
				array[i]=num;
				i++;
			}	
		}
	}
	printFor(array);
	printwhile(array);
	
	printMiddle(array, middle);
	cout<<"Mitad: "<<middle<<endl;
	
	printPair(array, result);
	cout<<"Pares: ";
	for(int i=0;i<result.size();i++){
		cout<<result[i]<<",";
	}
	cout<<endl;
	
	cout<<"Primos: ";
	primeNumber(array, prime);
	
	for(int i=0;i<prime.size();i++){
		cout<<prime[i]<<",";
	}
	cout<<endl;
	
	maximunNumber(array, max);
	
	cout<<"Numero mayor "<<max<<endl;
	
	sort(array, sorting);
	
	cout<<"El vector ordenado es: "; 
	for(int i=0;i<array.size();i++){
		cout<<array[i]<<",";
	}
	
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
void printMiddle(vector<int> array, int& middle){
	double size;
	int module =array.size()%2;
	if( module>0){
		size = ceil((array.size())/2);	
	}else{
	    size = ceil((array.size()-1)/2);	
	}	
	middle=array[size];
}
void printPair(vector<int> array, vector<int>& result){
	vector<int> pairs;
	for(int i=0;i<array.size();i++){
		int module = array[i]%2;
		if(module==0){
			pairs.push_back(array[i]);				
		}	
	}
	result=pairs;
}
void primeNumber(vector<int> array, vector<int>& prime){	
	vector<int> primes;	
	for(int i=0;i<array.size();i++){
		bool isPrime = true;
		for (int j = 2; j < array[i]/2; j++) {
			int module=array[i]%j;	
				if(module==0){
					isPrime=false;
					break;
				}															
			}
			if(isPrime){
				if(array[i]==4 || array[i]==4){					
					isPrime = true;
				}else{
					primes.push_back(array[i]);
					isPrime = true;
				}

			}
		}
	prime=primes;
}
void maximunNumber(vector<int> array, int& max){
		int value=0, i=0;
		
		while(i<array.size()){
			if(array[i]>value){
				value=array[i];
			}
		
		i++;
	}
	max=value;
}
void sort(vector<int> array, vector<int>& sorting){
	int aux;	
	for(int i=0;i<array.size();i++){
		for(int j=i+1;j<array.size();j++){
			if(array[i]>array[j]){
				aux=array[i];
				array[i]=array[j];
				array[j]=aux;		
			}
		}	
	}
	sorting=array;
} 

 


