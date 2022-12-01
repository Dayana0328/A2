// Creado por Danny Jativa 
	

	/*pone a su disposición los objetos cin, cout en el ámbito estándar (std), de tal manera que usted puede comenzar a enviar o recibir información a través de los mismos sin siquiera preocuparse de su creación.*/
	#include<iostream>
	

	/*sirve para dar acceso al espacio de nombres (namespace) std, donde se encuentra encerrada toda la librería estándar*/
	using namespace std;
	

	/*sirve como punto de partida para la ejecución del programa. Normalmente, controla la ejecución del programa dirigiendo las llamadas a otras funciones del programa*/
	int main()
	

	

	

	{
	

	

	/*Para definir datos reales se antepone la palabra reservada float al identificador de la variable*/
		float DJ_imc,DJ_peso,DJ_altura;
	

	

	/*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos Peso:*/
		cout<<"Ingrese el peso (kg) : ";
	

	

	/*cin es el flujo de entrada estándar que normalmente es el teclado,donde indicara lo que usuario debe ingresar, en este caso peso*/
		cin>>DJ_peso;
	

	/*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos altura:*/
		cout<<"Ingrese la altura (metros) : ";
	

	/*cin es el flujo de entrada estándar que normalmente es el teclado,donde indicara lo que usuario debe ingresar, en este caso altura */
		cin>>DJ_altura;
	

	

	//Procedemos a decir que DJ_imc va hacer igual a DJ_peso, dividido para DJ_altura multiolocadl por DJ_altura
		DJ_imc=DJ_peso/(DJ_altura*DJ_altura);
	

	

	

	/*Los condicionales IF, son una estructura de control condicional, también llamadas estructuras selectivas de casos simples*/
		if(DJ_imc<18.5){
	

	

	

	/*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos Usted tiene peso Bajo:*/
			cout<<"Usted tiene bajo peso"<<endl;
	

	

	

	/*Los condicionales IF, son una estructura de control condicional, también llamadas estructuras selectivas de casos simples*/
		}if(DJ_imc>=18.5 && DJ_imc<24.9){
	

	

	

	

	/*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos peso Normal:*/
			cout<<"Usted tiene peso normal"<<endl;
	

	

	

	/*Los condicionales IF, son una estructura de control condicional, también llamadas estructuras selectivas de casos simples*/
		}if(DJ_imc>=25 && DJ_imc<26.9){
	

	

	/*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos Usted tiene Sobrepeso Grado 1:*/
			cout<<"Usted tiene sobrepeso grado I"<<endl;
	

	

	

	/*Los condicionales IF, son una estructura de control condicional, también llamadas estructuras selectivas de casos simples*/
		}if(DJ_imc>50){
	

	

	/*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos Usted tiene obesidad tipo IV (Extrema)*/
			cout<<"Usted tiene obesidad tipo IV (Extrema)"<<endl;
	

	

	

		}
	

	

	/*Finaliza la ejecución de una función y devuelve el control a la función de llamada (o al sistema operativo si se transfiere el control de la función main ). La ejecución se reanuda en la función de llamada, en el punto que sigue inmediatamente a la llamada*/
		return 0;
	

	}
