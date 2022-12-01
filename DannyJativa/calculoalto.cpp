// Creado por Danny Jativa


	/*pone a su disposición los objetos cin, cout en el ámbito estándar (std), de tal manera que usted puede comenzar a enviar o recibir información a través de los mismos sin siquiera preocuparse de su creación.*/
	#include<iostream>


	/*sirve para dar acceso al espacio de nombres (namespace) std, donde se encuentra encerrada toda la librería estándar*/
	using namespace std;


	/*sirve como punto de partida para la ejecución del programa. Normalmente, controla la ejecución del programa dirigiendo las llamadas a otras funciones del programa*/
	int main()


	{


	/*Para definir datos reales se antepone la palabra reservada float al identificador de la variable*/
		float DJ_x,DJ_s= 0 ;


	/*El tipo int es el tipo entero básico predeterminado. Puede representar todos los números enteros en un intervalo específico de la implementación*/
		int DJ_i= 0 ,DJ_l;


	/*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *DJ_l:*/
		cout<< " Ingrese cantidad de egrasos (1) : " ;


	/*cin es el flujo de entrada estándar que normalmente es el teclado,donde indicara lo que usuario debe ingresar, en este caso ingresaremos DJ_l */
		cin>>DJ_l;


	/*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *DJ_s:*/
	        cout<< " Ingrese el saldo inicial (s) : " ;


	/*cin es el flujo de entrada estándar que normalmente es el teclado,donde indicara lo que usuario debe ingresar, en este caso ingresaremos DJ_s */
		cin>>DJ_s;


	/*La instrucción do-while permite repetir una instrucción o una instrucción compuesta hasta que una expresión especificada sea false*/
		do{


	/*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *DJ_x:*/
			cout<< " Ingreso egreso (x) : " ;


	/*cin es el flujo de entrada estándar que normalmente es el teclado,donde indicar
	a lo que usuario debe ingresar, en este caso ingresaremos DJ_x*/
			cin>>DJ_x;


	//Hacemos el proceso de la sumatoria de nuestros contadores
			DJ_i=DJ_i+ 1 ;


	//Sumamos en el acumulador
			DJ_s=DJ_s+DJ_x;


	/*La instrucción do-while permite repetir una instrucción o una instrucción compuesta hasta que una expresión especificada sea false*/
		}while(DJ_i<DJ_l);


	//Muestro resultados por pantalla
		cout<< " El saldo final es: " <<DJ_s<<endl;


	/*Finaliza la ejecución de una función y devuelve el control a la función de llamada (o al sistema operativo si se transfiere el control de la función main ). La ejecución se reanuda en la función de llamada, en el punto que sigue inmediatamente a la llamada*/
		return  0 ;


	}
