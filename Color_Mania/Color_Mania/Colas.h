#pragma once
class Colas
{
	class NodoColas
	{
	public:
		char elemento;
		NodoColas* Siguiente;
	};
public:
	NodoColas* Cola1Frente;
	NodoColas* Cola1Fin;
	NodoColas* Cola2Frente;
	NodoColas* Cola2Fin;
	NodoColas* Cola3Frente;
	NodoColas* Cola3Fin;
	NodoColas* Cola4Frente;
	NodoColas* Cola4Fin;
public:
	void AgregarCola(char _elemento, int Cola_A_Ingresar);
	bool ColaVacia(NodoColas* _frente);

};

