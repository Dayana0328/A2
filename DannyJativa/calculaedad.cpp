// Creado por Danny Jativa

/*pone a su disposición los objetos cin, cout en el ámbito estándar (std), de tal manera que usted puede comenzar a enviar o recibir información a través de los mismos sin siquiera preocuparse de su creación.*/
#include<iostream>

/*sirve para dar acceso al espacio de nombres (namespace) std, donde se encuentra encerrada toda la librería estándar*/
using namespace std;

/*sirve como punto de partida para la ejecución del programa. Normalmente, controla la ejecución del programa dirigiendo las llamadas a otras funciones del programa*/
int main()

{

/*Para definir datos reales se antepone la palabra reservada float al identificador de la variable*/
	float  DJ_aa,DJ_ma,DJ_da,DJ_an,DJ_mn,DJ_dn,DJ_a,DJ_m,DJ_d;

/*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *DJ_aa:*/
	cout<< " Ingrese la fecha actual: " ;


/*cin es el flujo de entrada estándar que normalmente es el teclado,donde indicara lo que usuario debe ingresar, en este caso ingresaremos DJ_an */
	cin>>DJ_aa>>DJ_ma>>DJ_da;



/*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *DJ_an:*/
	cout<< " Ingrese la fecha de nacimiento: " ;


/*cin es el flujo de entrada estándar que normalmente es el teclado,donde indicara lo que usuario debe ingresar, en este caso ingresaremos DJ_an */
	cin>>DJ_an>>DJ_mn>>DJ_dn;


/*Los condicionales IF, son una estructura de control condicional, también llamadas estructuras selectivas de casos simples*/
	if (DJ_da>DJ_dn){


//decimos que la DJ_d va hacer igual a DJ_da menos DJ_dn, para poder calcular la edad de cualquier persona
		DJ_d=DJ_da-DJ_d+30 ;
/*Los condicionales IF-ELSE, son una estructura de control, que nos permiten tomar cierta decisión al interior de nuestro algoritmo, es decir, nos permiten determinar que acciones tomar dada o no cierta condición.*/
	}  else {


//decimos que la DJ_d va hacer igual a DJ_da menos DJ_dn, para poder calcular la edad de cualquier persona
		DJ_da=DJ_da+ 30 ;


//decimos que la DJ_d va hacer igual a DJ_da menos DJ_dn, para poder calcular la edad de cualquier persona
		DJ_ma=DJ_ma- 1 ;


//decimos que la DJ_d va hacer igual a DJ_da menos DJ_dn, para poder calcular la edad de cualquier persona
		DJ_d=DJ_da-DJ_dn;



	}



/*Los condicionales IF, son una estructura de control condicional, también llamadas estructuras selectivas de casos simples*/
	if(DJ_ma>DJ_mn){


//decimos que la DJ_m va hacer igual a DJ_ma menos DJ_mn, para poder calcular la edad de cualquier persona
		DJ_m=DJ_ma-DJ_mn;


/*Los condicionales IF-ELSE, son una estructura de control, que nos permiten tomar cierta decisión al interior de nuestro algoritmo, es decir, nos permiten determinar que acciones tomar dada o no cierta condición.*/
	} else {DJ_ma=DJ_ma+ 12 ;


//decimos que la DJ_aa va hacer igual a  DJ_aa, menos 1 para poder calcular la edad de cualquier persona
		DJ_aa=DJ_aa- 1 ;


//decimos que la DJ_m va hacer igual a DJ_ma menos DJ_mn, para poder calcular la edad de cualquier persona
		DJ_m=DJ_ma-DJ_mn;
	
	}

//decimos que la DJ_a va hacer igual a DJ_aa menos DJ_an, para poder calcular la edad de cualquier persona, y poder tener una ejecicion perfecta.
	DJ_a=DJ_aa-DJ_an;


/*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comilas:*/
	cout<< " Usted tiene " <<DJ_a<< " años, " <<DJ_m<< " meses, " <<DJ_d<< " dias " <<endl;


/*Finaliza la ejecución de una función y devuelve el control a la función de llamada (o al sistema operativo si se transfiere el control de la función main ). La ejecución se reanuda en la función de llamada, en el punto que sigue inmediatamente a la llamada*/
	return 0 ;

}
