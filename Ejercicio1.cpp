#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
		int matriz[10][10], fila, columna,nb;
	
	
	cout<<"Ingrese Numero de filas :"; cin>>fila;
	cout<<"Ingrese numero de columnas :"; cin>>columna;
	for(int i=0;i<fila;i++){
		for(int j=0;j<columna;j++){
			cout<<"Ingrese numero :"; cin>>matriz[i][j];
		}
	}
	
	cout<<"\nLos Datos De La Matriz son :"<<endl;
	for(int i=0;i<fila;i++){
		for(int j=0;j<columna;j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"Ingrese Numero a Buscar :"; cin>>nb;
	for(int i=0; i<fila; i++){
        for(int j=0; j<columna; j++){
            if(nb==matriz[i][j]){
            	cout<<"Posicion ["<<i<<" ] ["<<j<<" ] EXISTE"<<endl;
			}
			else{
				cout<<"Posicion ["<<i<<" ] ["<<j<<" ] NO EXISTE"<<endl;
			}
			
         }
    }
    
	
	getch();
	return 0;
}
