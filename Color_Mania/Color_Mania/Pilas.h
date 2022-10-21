#pragma once
#include <string.h>
class Pilas
{

    class NodoPila
	{
	public:
		char elemento;
		NodoPila* Siguiente;
	};

private:
	NodoPila* Pila0 = nullptr;
	NodoPila* Pila1 = nullptr;
	NodoPila* Pila2 = nullptr;
	NodoPila* Pila3 = nullptr;
public:
	void agregarDatosPila(char _elemento);

	char SacarElemento();
	
	
};

