#include "Pilas.h"
void Pilas::agregarDatosPila(char _elemento)
{
	NodoPila* NuevaPila = new NodoPila();
	NuevaPila->elemento = _elemento;
	NuevaPila->Siguiente = Pila; 
	Pila = NuevaPila; 
}
