#include<iostream>
#include<wchar.h>
#include<locale.h>
using namespace std;
int mayor(int num);
main()
{
	//Variables
	int n,f;
	//setlocale(LC_ALL, "");	
	//Entrada de datos
	cout<<"Ingrese el número: "<<endl;
	cin>>n;	
	//Proceso
	mayor(n);		
}
int mayor(int num){
	int i,may,x,n;
	int v[10]	;
	i=0;
	x=num;
	while(x!=0)
	{		
	    v[i]=x%10;
		x=x/10;
		//cout<<v[i];
		++i;
	}
	n=i-1;
	
	//int v[10];
	may=v[0];
		for(i=0;i<n;i++)
		{
			if(v[i]>may){
				may=v[i];
			}
		}	
	cout<<"Mayor es: "<<may<<endl;	
	
}
