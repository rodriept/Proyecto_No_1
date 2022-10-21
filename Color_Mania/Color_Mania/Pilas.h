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
	void agregarDatosPila0(char _elemento);
	void agregarDatosPila1(char _elemento);
	void agregarDatosPila2(char _elemento);
	void agregarDatosPila3(char _elemento);
	char SacarElemento();
	
	
};

