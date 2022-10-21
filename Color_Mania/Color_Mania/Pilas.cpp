#include "Pilas.h"
#include <string.h>
void Pilas::agregarDatosPila0(char _elemento)
{
	NodoPila* NuevaPila = new NodoPila();
	NuevaPila->elemento = _elemento;
	NuevaPila->Siguiente = Pila0; 
	Pila0 = NuevaPila; 
}
void Pilas::agregarDatosPila1(char _elemento)
{
	NodoPila* NuevaPila = new NodoPila();
	NuevaPila->elemento = _elemento;
	NuevaPila->Siguiente = Pila1;
	Pila1 = NuevaPila;
}
void Pilas::agregarDatosPila2(char _elemento)
{
	NodoPila* NuevaPila = new NodoPila();
	NuevaPila->elemento = _elemento;
	NuevaPila->Siguiente = Pila2;
	Pila2 = NuevaPila;
}
void Pilas::agregarDatosPila3(char _elemento)
{
	NodoPila* NuevaPila = new NodoPila();
	NuevaPila->elemento = _elemento;
	NuevaPila->Siguiente = Pila3;
	Pila3 = NuevaPila;
}

char Pilas::SacarElemento()
{
	char Dato;
	NodoPila* Aux = Pila0;
	Dato = Aux->elemento;
	Pila0 = Aux->Siguiente;
	return Dato;
}