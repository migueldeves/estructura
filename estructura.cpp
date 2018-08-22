#include <iostream>
#include <conio.h>
using namespace std;

struct persona{
	char calle[20];
	int cp;
	char ciudad;
	char nombre [20];
	int edad;
	float estatura;
};

/* run this program using the console pauser or add your own getch, 
system("pause") or input loop */

int main(int argc, char** argv) {
	struct persona p1;
	cout<<"nombre." ;
	cin.getline(p1.nombre,20,'\n');
	cout<<"edad." ;
	cin>>p1.edad;
	cout<<"estatura." ;
	cin>>p1.estatura;
	cout<<"calle. ";
	cin>>p1.calle;
	cout<<"codigo postal. ";
	cin>>p1.cp;
	cout<<"ciudad. ";
	cin>>p1.ciudad; 	
	cout<<endl<<"nombre guardado. "<<p1.nombre;
	cout<<endl<<"edad guardada. "<<p1.edad;
	cout<<endl<<"estatura guardada. "<<p1.estatura;
	cout<<endl<<"calle guardada. "<<p1.calle;
	cout<<endl<<"codigo postal guardado"<<p1.cp;
	cout<<endl<<"ciudad guardada"<<p1.ciudad;
	
	return 0;
}
