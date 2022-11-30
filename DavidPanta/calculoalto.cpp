// Creador por David Panta


	/*pone a su disposición los objetos cin, cout en el ámbito estándar (std), de tal manera que usted puede comenzar a enviar o recibir información a través de los mismos sin siquiera preocuparse de su creación.*/
	#include<iostream>


	/*sirve para dar acceso al espacio de nombres (namespace) std, donde se encuentra encerrada toda la librería estándar*/
	using namespace std;


	/*sirve como punto de partida para la ejecución del programa. Normalmente, controla la ejecución del programa dirigiendo las llamadas a otras funciones del programa*/
	int main()


	{


	/*Para definir datos reales se antepone la palabra reservada float al identificador de la variable*/
		float JDPM_x,JDPM_s= 0 ;


	/*El tipo int es el tipo entero básico predeterminado. Puede representar todos los números enteros en un intervalo específico de la implementación*/
		int JDPM_i= 0 ,JDPM_l;


	/*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *JDPM_l:*/
		cout<< " Ingrese cantidad de egrasos (1) : " ;


	/*cin es el flujo de entrada estándar que normalmente es el teclado,donde indicara lo que usuario debe ingresar, en este caso ingresaremos JDPM_l */
		cin>>JDPM_l;


	/*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *JDPM_s:*/
	        cout<< " Ingrese el saldo inicial (s) : " ;


	/*cin es el flujo de entrada estándar que normalmente es el teclado,donde indicara lo que usuario debe ingresar, en este caso ingresaremos JDPM_s */
		cin>>JDPM_s;


	/*La instrucción do-while permite repetir una instrucción o una instrucción compuesta hasta que una expresión especificada sea false*/
		do{


	/*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *JDPM_x:*/
			cout<< " Ingreso egreso (x) : " ;


	/*cin es el flujo de entrada estándar que normalmente es el teclado,donde indicar
	a lo que usuario debe ingresar, en este caso ingresaremos JDPM_x*/
			cin>>JDPM_x;


	//Hacemos el proceso de la sumatoria de nuestros contadores
			JDPM_i=JDPM_i+ 1 ;


	//Sumamos en el acumulador
			JDPM_s=JDPM_s+JDPM_x;


	/*La instrucción do-while permite repetir una instrucción o una instrucción compuesta hasta que una expresión especificada sea false*/
		}while(JDPM_i<JDPM_l);


	//Muestro resultados por pantalla
		cout<< " El saldo final es: " <<JDPM_s<<endl;


	/*Finaliza la ejecución de una función y devuelve el control a la función de llamada (o al sistema operativo si se transfiere el control de la función main ). La ejecución se reanuda en la función de llamada, en el punto que sigue inmediatamente a la llamada*/
		return  0 ;


	}
