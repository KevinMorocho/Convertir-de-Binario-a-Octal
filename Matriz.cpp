#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int matriz[10][10], fila, columna;
	
	cout<<"Numero de filas :"; cin>>fila;
	cout<<"numero de columna :"; cin>>columna;
	for(int i=0;i<fila;i++){
		for(int j=0;j<columna;j++){
			cout<<"Ingrese numero :"; cin>>matriz[i][j];
		}
	}
	
	cout<<"\nLos Datos De La Matriz"<<endl;
	for(int i=0;i<fila;i++){
		for(int j=0;j<columna;j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}
	
	for(int i=0; i<fila; i++){
        for(int j=0; j<columna; j++){
            for(int x=0; x<fila;x++){
                for(int y=0; y<columna; y++){
                    if(matriz[i][j]<matriz[x][y]){
                       int mayor=matriz[i][j];
                        matriz[i][j]=matriz[x][y];
                        matriz[x][y]=mayor;
                    }

                }
            }
         }
    }
    
    cout<<"\nLos Datos De La Matriz Fueron Ordenados"<<endl;
    for(int i=0; i<fila; i++)
    {
        for(int j=0; j<columna; j++)
        {
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }
	
	getch();
	return 0;
}
