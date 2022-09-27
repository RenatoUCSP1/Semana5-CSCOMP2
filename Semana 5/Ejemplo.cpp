#include <iostream>
#include "funcion.h"

using namespace std;

int suma (int a , int b){
	return a + b;
}
void imprimir (int a){
	cout << "el entero es :"  << a << endl;

}
void imprimirfuncion(Function p){
	cout <<"("<< p.getX() << "," << p.getY()<<")"<< endl;
}

int main (){
	int result = suma(5,6);
	cout << suma (5,6)<< endl;
	imprimir(5);
	Function p1(5,6);	
	
	return 0;
}
