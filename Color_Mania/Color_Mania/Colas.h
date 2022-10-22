#pragma once
class Colas
{
	class NodoColas
	{
	public:
		char elemento;
		NodoColas* Siguiente; 
		NodoColas* frente;
		NodoColas* fin;
	};
private:
	NodoColas Cola1();
	NodoColas Cola2();
	NodoColas Cola3();
	NodoColas Cola4();
public:
	void AgregarCola(char _elemento, int Cola_A_Ingresar);
	bool ColaVacia();

};

