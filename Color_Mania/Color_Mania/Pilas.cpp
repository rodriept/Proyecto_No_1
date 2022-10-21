#include "Pilas.h"
#include <string.h>
void Pilas::agregarDatosPila(char _elemento)
{
	NodoPila* NuevaPila = new NodoPila();
	NuevaPila->elemento = _elemento;
	NuevaPila->Siguiente = Pila0; 
	Pila0 = NuevaPila; 
}

char Pilas::SacarElemento()
{
	char Dato;
	NodoPila* Aux = Pila0;
	Dato = Aux->elemento;
	Pila0 = Aux->Siguiente;
	return Dato;
}