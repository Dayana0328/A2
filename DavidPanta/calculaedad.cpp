 // Creado por David Panta

/*pone a su disposición los objetos cin, cout en el ámbito estándar (std), de tal manera que usted puede comenzar a enviar o recibir información a través de los mismos sin siquiera preocuparse de su creación.*/
#include<iostream>

/*sirve para dar acceso al espacio de nombres (namespace) std, donde se encuentra encerrada toda la librería estándar*/
using namespace std;

/*sirve como punto de partida para la ejecución del programa. Normalmente, controla la ejecución del programa dirigiendo las llamadas a otras funciones del programa*/
int main()

{

/*Para definir datos reales se antepone la palabra reservada float al identificador de la variable*/
	float  JDPM_aa,JDPM_ma,JDPM_da,JDPM_an,JDPM_mn,JDPM_dn,JDPM_a,JDPM_m,JDPM_d;

/*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *JDPM_aa:*/
	cout<< " Ingrese la fecha actual: " ;


/*cin es el flujo de entrada estándar que normalmente es el teclado,donde indicara lo que usuario debe ingresar, en este caso ingresaremos JDPM_an */
	cin>>JDPM_aa>>JDPM_ma>>JDPM_da;



/*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *JDPM_an:*/
	cout<< " Ingrese la fecha de nacimiento: " ;


/*cin es el flujo de entrada estándar que normalmente es el teclado,donde indicara lo que usuario debe ingresar, en este caso ingresaremos JDPM_an */
	cin>>JDPM_an>>JDPM_mn>>JDPM_dn;


/*Los condicionales IF, son una estructura de control condicional, también llamadas estructuras selectivas de casos simples*/
	if (JDPM_da>JDPM_dn){


//decimos que la JDPM_d va hacer igual a CBPJ_da menos CBPJ_dn, para poder calcular la edad de cualquier persona
		JDPM_d=JDPM_da-JDPM_d+30 ;
/*Los condicionales IF-ELSE, son una estructura de control, que nos permiten tomar cierta decisión al interior de nuestro algoritmo, es decir, nos permiten determinar que acciones tomar dada o no cierta condición.*/
	}  else {


//decimos que la JDPM_d va hacer igual a JDPM_da menos JDPM_dn, para poder calcular la edad de cualquier persona
		JDPM_da=JDPM_da+ 30 ;


//decimos que la JDPM_d va hacer igual a JDPN_da menos JDPM_dn, para poder calcular la edad de cualquier persona
		JDPM_ma=JDPM_ma- 1 ;


//decimos que la CBPJ_d va hacer igual a CBPJ_da menos CBPJ_dn, para poder calcular la edad de cualquier persona
		JDPM_d=JDPM_da-JDPM_dn;



	}



/*Los condicionales IF, son una estructura de control condicional, también llamadas estructuras selectivas de casos simples*/
	if(JDPM_ma>JDPM_mn){


//decimos que la JDPM_m va hacer igual a JDPM_ma menos JDPM_mn, para poder calcular la edad de cualquier persona
		JDPM_m=JDPM_ma-JDPM_mn;


/*Los condicionales IF-ELSE, son una estructura de control, que nos permiten tomar cierta decisión al interior de nuestro algoritmo, es decir, nos permiten determinar que acciones tomar dada o no cierta condición.*/
	} else {JDPM_ma=JDPM_ma+ 12 ;


//decimos que la JDPM_aa va hacer igual a  JDPM_aa, menos 1 para poder calcular la edad de cualquier persona
		JDPM_aa=JDPM_aa- 1 ;


//decimos que la JDPM_m va hacer igual a JDPM_ma menos JDPM_mn, para poder calcular la edad de cualquier persona
		JDPM_m=JDPM_ma-JDPM_mn;
	
	}

//decimos que la JDPM_a va hacer igual a JDPM_aa menos JDPM_an, para poder calcular la edad de cualquier persona, y poder tener una ejecicion perfecta.
	JDPM_a=JDPM_aa-JDPM_an;


/*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comilas:*/
	cout<< " Usted tiene " <<JDPM_a<< " años, " <<JDPM_m<< " meses, " <<JDPM_d<< " dias " <<endl;


/*Finaliza la ejecución de una función y devuelve el control a la función de llamada (o al sistema operativo si se transfiere el control de la función main ). La ejecución se reanuda en la función de llamada, en el punto que sigue inmediatamente a la llamada*/
	return 0 ;

}
