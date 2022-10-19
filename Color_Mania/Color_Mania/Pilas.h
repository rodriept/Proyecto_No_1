#pragma once
class Pilas
{
	class NodoPila
	{
	public:
		char elemento;
		NodoPila* Siguiente;
	};

private:
	NodoPila* Pila = nullptr;
public:
	void agregarDatosPila(char _elemento);

	
};

