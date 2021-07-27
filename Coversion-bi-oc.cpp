#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int cambiobase(int a, int b);
int main(){
	int numero, base, resultado;
	cout<<"Ingrese numero decimal :"; cin>>numero;
	do{
		cout<<" ***CAMBIO DE BASE*** "<<endl;
		cout<<"1.- Binario "<<endl;
		cout<<"2.- Octal   "<<endl;
		cout<<"3.- Salir   "<<endl;
		cout<<"Ingrese cambio de base :"; cin>>base;
		resultado=cambiobase(numero,base);
	}while(base!=3);	
	getch();
	return 0;
}

int cambiobase(int a, int b){
	if(b==1){
		int exp=0,digito;
		double binario=0;
		while(a/2!=0)
   		{
           digito = a % 2;
           binario = binario + digito * pow(10.0,exp);
           exp++;
           a=a/2;
   		}
   	binario = binario + a * pow(10.0,exp);
   	cout << "BINARIO: " << binario << endl;
	}
	if(b==2){
		int rem, i = 1, octal = 0;
 
    	while( a != 0 ) {
        	rem = a % 8;
        	a /= 8;
        	octal += rem * i;
        	i *= 10;
    }
 
    cout << "OCTAL: " << octal << endl;
		
	}
}
