#include "Colas.h"

void Colas::AgregarCola(char _elemento, int Cola_A_Ingresar)
{
	NodoColas* NuevaCola = new NodoColas();
	NuevaCola->elemento = _elemento;
	NuevaCola->Siguiente = nullptr;
	switch (Cola_A_Ingresar)
	{
	case 0:
		if (ColaVacia(Cola1Frente) == true)
		{
			Cola1Frente = NuevaCola;
			
		}
		else
		{
			Cola1Fin->Siguiente = NuevaCola;
		}
		break;
	case 1:
		if (ColaVacia(Cola2Frente) == true)
		{
			Cola2Frente = NuevaCola;

		}
		else
		{
			Cola2Fin->Siguiente = NuevaCola;
		}
		break;
	case 2: 
		if (ColaVacia(Cola3Frente) == true)
		{
			Cola3Frente = NuevaCola;

		}
		else
		{
			Cola3Fin->Siguiente = NuevaCola;
		}
		break;
	case 3:
		if (ColaVacia(Cola4Frente) == true)
		{
			Cola4Frente = NuevaCola;

		}
		else
		{
			Cola4Fin->Siguiente = NuevaCola;
		}
		break;
	default:
		break;
	}
}

bool Colas::ColaVacia(NodoColas* _frente)
{
	return(_frente == nullptr);
}