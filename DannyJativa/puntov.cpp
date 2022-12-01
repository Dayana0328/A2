//creado por Danny Jativa 
	

	/*pone a su disposición los objetos cin, cout en el ámbito estándar (std), de tal manera que usted puede comenzar a enviar o recibir información a través de los mismos sin siquiera preocuparse de su creación.*/
	#include<iostream>
	

	/*sirve para dar acceso al espacio de nombres (namespace) std, donde se encuentra encerrada toda la librería estándar*/
	using namespace std;
	

	/*Es la función principal y dentro de ella podemos escribir las operaciones*/
	int main()
	

	{
	

	/*Para definir datos reales se antepone la palabra reservada float al identificador de la variable, en este caso utilizaremos las siguientesDJ_x,DJ_s=0,DJ_vb,DJ_piva=12,DJ_viva,DJ_pdesc=10,DJ_vdesc,DJ_vn*/
	float DJ_x,DJ_s=0,DJ_vb,DJ_piva=12,DJ_viva,DJ_pdesc=10,DJ_vdesc,DJ_vn;
	

	/*El tipo int es el tipo entero básico predeterminado. Puede representar todos los números enteros en un intervalo específico de la implementación, estaremos utilizando DJ_i=0,DJ_l*/
	int DJ_i=0,DJ_l;
	

	/*Cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas,ingrese l*/
		cout<<"Ingrese l: ";
	

	/*cin es el flujo de entrada estándar que normalmente es el teclado, que el usuario debera ingresar*/
		cin>>DJ_l;
	

	/*La instrucción do-while permite repetir una instrucción o una instrucción compuesta hasta que una expresión especificada sea false*/
		do{
	

	/*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *DJ_x:*/
			cout<<"Ingrese x: ";
	

	/*cin es el flujo de entrada estándar que normalmente es el teclado,donde indicara lo que usuario debe ingresar, en este caso ingresaremos DJ_x */
	                cin>>DJ_x;
	

	//Hacemos el proceso de la sumatoria de nuestros contadores
			DJ_i=DJ_i+1;
	

	//Sumamos en el acumulador
			DJ_s=DJ_s+DJ_x; 
	

	/*La instrucción do-while permite repetir una instrucción o una instrucción compuesta hasta que una expresión especificada sea false*/
		}while(DJ_i<DJ_l);
	

	//Luego hacemos, el proceso de DJ_vb que va hacer igual a DJ_s, en esta linea estamos igualando dos Cantidades
		DJ_vb=DJ_s;
	

	//Aqui vamos a sacar el % de DJ_viva que va hacer igual a DJ_vb*DJ_piva/100
		DJ_viva=DJ_vb*DJ_piva/100;
	

	//procedemos a calcular el DJ_vdesc que va hacer igual a DJ_vdesc=DJ_vb*DJ_pdesc/100, asi podemos sacar su %
		DJ_vdesc=DJ_vb*DJ_pdesc/100;
	

	//decimos que DJ_vn es igual a DJ_vb+DJ_viva-DJ_vdesc, para poder calcular DJ_vn
		DJ_vn=DJ_vb+DJ_viva-DJ_vdesc;
	

	//Antes de terminar con nuestro ejercicio debemosbmostrar por pantalla, lo que el usuario solicito.
		cout<<"El valor a pagar es de: "<<DJ_vn<<endl;
	

	/*Finaliza la ejecución de una función y devuelve el control a la función de llamada (o al sistema operativo si se transfiere el control de la función main ). La ejecución se reanuda en la función de llamada, en el punto que sigue inmediatamente a la llamada*/
		return 0;
		
	}
