//creado por David Panta
	

	/*pone a su disposición los objetos cin, cout en el ámbito estándar (std), de tal manera que usted puede comenzar a enviar o recibir información a través de los mismos sin siquiera preocuparse de su creación.*/
	#include<iostream>
	

	/*sirve para dar acceso al espacio de nombres (namespace) std, donde se encuentra encerrada toda la librería estándar*/
	using namespace std;
	

	/*Es la función principal y dentro de ella podemos escribir las operaciones*/
	int main()
	

	{
	

	/*Para definir datos reales se antepone la palabra reservada float al identificador de la variable, en este caso utilizaremos las siguientesJDPM_x,JDPM_s=0,JDPM_vb,JDPM_piva=12,JDPM_viva,JDPM_pdesc=10,JDPM_vdesc,JDPM_vn*/
	float JDPM_x,JDPM_s=0,JDPM_vb,JDPM_piva=12,JDPM_viva,JDPM_pdesc=10,JDPM_vdesc,JDPM_vn;
	

	/*El tipo int es el tipo entero básico predeterminado. Puede representar todos los números enteros en un intervalo específico de la implementación, estaremos utilizando JDPM_i=0,JDPM_l*/
	int JDPM_i=0,JDPM_l;
	

	/*Cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas,ingrese l*/
		cout<<"Ingrese l: ";
	

	/*cin es el flujo de entrada estándar que normalmente es el teclado, que el usuario debera ingresar*/
		cin>>JDPM_l;
	

	/*La instrucción do-while permite repetir una instrucción o una instrucción compuesta hasta que una expresión especificada sea false*/
		do{
	

	/*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *JDPM_x:*/
			cout<<"Ingrese x: ";
	

	/*cin es el flujo de entrada estándar que normalmente es el teclado,donde indicara lo que usuario debe ingresar, en este caso ingresaremos JDPM_x */
	                cin>>JDPM_x;
	

	//Hacemos el proceso de la sumatoria de nuestros contadores
			JDPM_i=JDPM_i+1;
	

	//Sumamos en el acumulador
			JDPM_s=JDPM_s+JDPM_x; 
	

	/*La instrucción do-while permite repetir una instrucción o una instrucción compuesta hasta que una expresión especificada sea false*/
		}while(JDPM_i<JDPM_l);
	

	//Luego hacemos, el proceso de JDPM_vb que va hacer igual a JDPM_s, en esta linea estamos igualando dos Cantidades
		JDPM_vb=JDPM_s;
	

	//Aqui vamos a sacar el % de JDPM_viva que va hacer igual a JDPM_vb*JDPM_piva/100
		JDPM_viva=JDPM_vb*JDPM_piva/100;
	

	//procedemos a calcular el JDPM_vdesc que va hacer igual a JDPM_vdesc=JDPM_vb*JDPM_pdesc/100, asi podemos sacar su %
		JDPM_vdesc=JDPM_vb*JDPM_pdesc/100;
	

	//decimos que JDPM_vn es igual a JDPM_vb+JDPM_viva-JDPM_vdesc, para poder calcular JDPM_vn
		JDPM_vn=JDPM_vb+JDPM_viva-JDPM_vdesc;
	

	//Antes de terminar con nuestro ejercicio debemosbmostrar por pantalla, lo que el usuario solicito.
		cout<<"El valor a pagar es de: "<<JDPM_vn<<endl;
	

	/*Finaliza la ejecución de una función y devuelve el control a la función de llamada (o al sistema operativo si se transfiere el control de la función main ). La ejecución se reanuda en la función de llamada, en el punto que sigue inmediatamente a la llamada*/
		return 0;
		
	}
