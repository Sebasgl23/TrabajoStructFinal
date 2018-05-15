#include <iostream>
#include <string.h>//Libreria para usar funciones de cadenas
#include <stdlib.h>//Libreria para cambiar color a la consola

#define MAX 1000

using namespace std;

struct cliente{//Declaracion de la estructura de datos
	
	long cedula;
	char nombre[20];
	char apellidos[40];
	char direccion[50];
	long telefono;
	char email[30];
	char actividadlaboral[15];
	long salario;
	long prestamo;
	long cuota1;
	long cuota2;
	long cuota3;
	long cuota4;
};

cliente amigo[MAX];//

void RegistrarCliente(int *cont);//Funcion encargada de registrar cada cliente
void ActivarPrestamo();//Funcion encargada de darle prestamo al cliente
void Abonar();//Funcion encargada de abonar pago de deuda
void ConsultarCliente();//Funcion encargada de Consultar un cliente y decir si se encuentra registrado o no
void EliminarCliente();//Funcion encargada de eliminar un cliente de los registros
bool MasOpciones();//Funcion encargada de mostrar las demas opciones, se declaro booleana para poder salir del programa cuando la variable sea verdadera


int main ()
{
	system ("color 1");//Se encarga de cambiar el color a la consola
	int a,b,x=0;
	
	cout<<"********************************************************"<<endl;
	cout<<"*          PRESTAMOS UNIVERSIDAD DE CARTAGENA          *"<<endl;
	cout<<"********************************************************\n\n\n\n\n\n"<<endl;
	do{

    
	cout<<"\n1.-Registrar cliente"<<endl;
	cout<<"\n2.-Activar Prestamo"<<endl;
	cout<<"\n3.-Realizar Abono"<<endl;
	cout<<"\n4.-Consultar Cliente"<<endl;
	cout<<"\n5.-Eliminar Cliente"<<endl;
	cout<<"\n6.-Mas opciones"<<endl;
	cout<<"\n"<<endl;
	cin>>a;
	
	system("cls");
	switch(a)
	{
		case 1:
			cout<<"\nEscogio registrar cliente "<<endl;
			RegistrarCliente(&x);//Se pasa el valor de x como puntero para poder asignar a cada espcio del registro un cliente
			x++;
			break;
			
		case 2:
			cout<<"\nUsted escogio activar prestamo"<<endl;
			ActivarPrestamo();
			break;
			
		case 3:
			cout<<"\nUsted escogio realizar abono"<<endl;
			Abonar();
			break;
			
		case 4:
			cout<<"\nUsted escogio consultar cliente"<<endl;
			ConsultarCliente();
			break;
			
		case 5:
			cout<<"\nUsted escogio eliminar cliente"<<endl;
			EliminarCliente();
			break;
		case 6:
			cout<<"\nUsted escogio mas opciones "<<endl;
			if(MasOpciones())
				b='c';
				break;
	
			default:
			cout<<"\n La opcion ingresada no es valida, por favor ingrese una opcion valida"<<endl;//para que en caso de que ingrese cualquier otra cosa
		 
			
	}
}while (b!='c');
	cout<<"Cerraste el programa"<<endl;
	system("PAUSE");
	
	
}

void RegistrarCliente(int *cont)
{
	
	fflush(stdin);
	cout<<"\nIngrese el nombre de el ccliente a registrar"<<endl;
	gets(amigo[*cont].nombre);
	fflush(stdin);
	
	cout<<"\nIngrese los apellidos de el cliente a registrar"<<endl;
	gets(amigo[*cont].apellidos);
	fflush(stdin);
	
	cout<<"\nIngrese la cedula de el cliente a registrar"<<endl;
	cin>>amigo[*cont].cedula;
	fflush(stdin);
	
	cout<<"\nIngrese la direccion de el cliente a registrar"<<endl;
	gets(amigo[*cont].direccion);
	fflush(stdin);
	
	cout<<"\nIngrese el telefono de el cliente a registrar"<<endl;
	cin>>amigo[*cont].telefono;
	fflush(stdin);
	
	cout<<"\nIngrese el correo de el cliente a registrar"<<endl;
	gets(amigo[*cont].email);
	fflush(stdin);
	
	cout<<"\nIngrese la actividad laboral de el cliente a registrar"<<endl;
	gets(amigo[*cont].actividadlaboral);
	fflush(stdin);
	
	cout<<"\nIngrese el salario de el cliente a registrar"<<endl;
	cin>>amigo[*cont].salario;
	fflush(stdin);
	
	
	
}

void Ver(){
	
	for (int h=0;h<2;h++)
	{
	cout<<"\nNombre:  "<<amigo[h].nombre;
	cout<<"\nApeliido:  "<<amigo[h].apellidos;
	cout<<"\nCedula:  "<<amigo[h].cedula;
	cout<<"\nDireccion:  "<<amigo[h].direccion;
	cout<<"\nTelefono:  "<<amigo[h].telefono;
	cout<<"\nCorreo:  "<<amigo[h].email;
	cout<<"\nActividad laboral:  "<<amigo[h].actividadlaboral;
	cout<<"\nSalario:  "<<amigo[h].salario;
	}
}

void ConsultarCliente()
{
	long cedula2;
	int ver=0;
	
	cout<<"\nIngrese la cedula del cliente"<<endl;
	cin>>cedula2;
	
	for(int z=0;z<MAX;z++)
	{
		if(amigo[z].cedula==cedula2)
		{
	cout<<"\nNombre:  "<<amigo[z].nombre;
	cout<<"\nApeliido:  "<<amigo[z].apellidos;
	cout<<"\nCedula:  "<<amigo[z].cedula;
	cout<<"\nDireccion:  "<<amigo[z].direccion;
	cout<<"\nTelefono:  "<<amigo[z].telefono;
	cout<<"\nCorreo:  "<<amigo[z].email;
	cout<<"\nActividad laboral:  "<<amigo[z].actividadlaboral;
	cout<<"\nSalario:  "<<amigo[z].salario;
	ver=1;
}
}
    if (ver==0)
    {
    	cout<<"\nEl usuario ingresado no se encuentra registrado en el sistema"<<endl;
	}
	

}

void ActivarPrestamo()
{
	long cedula3,prestamo;
	int veri=0;
	
	cout<<"\nIngrese la cantidad de dinero que desea prestar"<<endl;
	cin>>prestamo;
	
	cout<<"\nIngrese la cedula del cliente que desea activar el prestamo"<<endl;
	cin>>cedula3;
	
	for(int g=0;g<MAX;g++)
	{
		if(amigo[g].cedula==cedula3)
		{
			
			cout<<"\nEl valor a cancelar en la primera cuota es de:  "<<prestamo*0.4<<endl;
			amigo[g].cuota1=prestamo*0.4;
			cout<<"\nEl valor a cancelar en la segunda cuota es de:  "<<prestamo*0.3<<endl;
			amigo[g].cuota2=prestamo*0.3;
			cout<<"\nEl valor a cancelar en la tercera cuota es de:  "<<prestamo*0.2<<endl;
			amigo[g].cuota3=prestamo*0.2;
			cout<<"\nEl valor a cancelar en la ultima cuota es de :  "<<prestamo*0.1<<endl;
			amigo[g].cuota4=prestamo*0.1;
			veri=1;
			amigo[g].prestamo=prestamo;
	
}
}
    if (veri==0)
    {
    	cout<<"\nEl usuario ingresado no se encuentra registrado en el sistema"<<endl;
	}
	
}

void Abonar()
{			

	long cedula4,cuota,abono;
	int verif=0;
	
	cout<<"\nIngrese la cedula del cliente que desea abonar a la deuda"<<endl;
	cin>>cedula4;
	
	cout<<"\nIngrese la cuota que desea cancelar"<<endl;
	cin>>cuota;
	
	cout<<"\nIngrese cuanto dinero desea abonar "<<endl;
	cin>>abono;
	
	for(int e=0;e<MAX;e++)
	{
		if(amigo[e].cedula==cedula4)
		{
			if(amigo[e].cuota1!=0)
			{
				if (cuota==1)
			{
			
				if(abono==amigo[e].cuota1)
				{
					cout<<"\nEl abono se realizo correctamente"<<endl;
					amigo[e].cuota1=0;
				}
				else if(abono!=amigo[e].cuota1)
				{
					cout<<"\nEl valor a abonar es diferente a la cuota"<<endl;
				}
			}
		}
			else if(amigo[e].cuota1==0)
			{
				cout<<"\nEl usuario ya no debe la cuota solicitada"<<endl;
			}
			
			if(amigo[e].cuota2=!0)
			{
			if (cuota==2)
			{
				if(abono==amigo[e].cuota2)
				{
					cout<<"\nEl abono se realizo correctamente"<<endl;
					amigo[e].cuota2=0;
				}
				else if(abono!=amigo[e].cuota2)
				{
					cout<<"\nEl valor a abonar es diferente a la cuota"<<endl;
				}
			}
			}
			else if(amigo[e].cuota2==0)
			{
				cout<<"\nEl usuario ya no debe la cuota solicitada"<<endl;
			}
			if(amigo[e].cuota3=!0)
			{
			if (cuota==3)
			{
				if(abono==amigo[e].cuota3)
				{
					cout<<"\nEl abono se realizo correctamente"<<endl;
					amigo[e].cuota3=0;
				}
				else if(abono!=amigo[e].cuota3)
				{
					cout<<"\nEl valor a abonar es diferente a la cuota"<<endl;
				}
			}
			}
			else if(amigo[e].cuota3==0)
			{
				cout<<"\nEl usuario ya no debe la cuota solicitada"<<endl;
			}
			
			if(amigo[e].cuota4=!0)
			{
			if (cuota==4)
			{
				if(abono==amigo[e].cuota4)
				{
					cout<<"\nEl abono se realizo correctamente"<<endl;
					amigo[e].cuota4=0;
				}
				else if(abono!=amigo[e].cuota4)
				{
					cout<<"\nEl valor a abonar es diferente a la cuota"<<endl;
				}
				
			}
		}
		else if(amigo[e].cuota4==0)
		{
			cout<<"\nEl usuario ya no debe la cuota solicitada"<<endl;
		}
			
			verif=1;
}
}
    if (verif==0)
    {
    	cout<<"\nEl usuario ingresado no se encuentra registrado en el sistema"<<endl;
	}
	
	
	
	
}

void EliminarCliente()
{
	long cedula4;
	int verifi=0;
	
	cout<<"\nIngrese la cedula del cliente a eliminar"<<endl;
	cin>>cedula4;
	for(int r=0;r<MAX;r++)
	{
		if(amigo[r].cedula==cedula4)
		{
			strcpy(amigo[r].nombre, " " );
			strcpy(amigo[r].apellidos, " " );
			amigo[r].cedula='\0';
			strcpy(amigo[r].direccion, " " );
			amigo[r].telefono='\0';
			strcpy(amigo[r].email, " " );
			strcpy(amigo[r].actividadlaboral, " " );
			amigo[r].salario='\0' ;
			amigo[r].prestamo='\0' ;
			amigo[r].cuota1='\0' ;
			amigo[r].cuota2='\0' ;
			amigo[r].cuota3='\0' ;
			amigo[r].cuota4='\0';
			
			cout<<"\nEl cliente fue eliminado con exito"<<endl;
			
			verifi=1;
}
}
    if (verifi==0)
    {
    	cout<<"\nEl usuario ingresado no se encuentra registrado en el sistema"<<endl;
	}
	
	
}

bool MasOpciones()
{
	
	char b;
	bool exit=false;
	
	cout<<"\nA.-Consultar un cliente"<<endl;
	cout<<"\nB.-Consultar todos los registros en orden ascendente por la cedula del cliente"<<endl;
	cout<<"\nC.-Salir del programa"<<endl;
	cin>>b;
			
			if(b=='a' || b=='A')
			{
				ConsultarCliente();
			}
			else if(b=='b' || b=='B')
			{
				cout<<""<<endl;
			}
			else if(b=='c' || b=='C')
			{

				exit=true;
			}
			return exit;
}


