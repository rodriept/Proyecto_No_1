#pragma once
#include "Pilas.h"
#include "Colas.h"

namespace ColorMania {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	
	public:
		MyForm(void)
		{
			
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ BIngresarArchivo;
	private: System::Windows::Forms::OpenFileDialog^ OFDAbrirArchivo;
	private: System::Windows::Forms::Button^ BSalir;
	private: System::Windows::Forms::Button^ BIniciarJuego;
	private: System::Windows::Forms::DataGridView^ dataGridView1;




	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->BIngresarArchivo = (gcnew System::Windows::Forms::Button());
			this->OFDAbrirArchivo = (gcnew System::Windows::Forms::OpenFileDialog());
			this->BSalir = (gcnew System::Windows::Forms::Button());
			this->BIniciarJuego = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label1->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(106, 7);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(267, 28);
			this->label1->TabIndex = 0;
			this->label1->Text = L"¡BIENVENIDOS A COLOR MANÍA!";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(11, 59);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(210, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Ingrese el archivo de texto del mapa inicial:";
			// 
			// BIngresarArchivo
			// 
			this->BIngresarArchivo->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BIngresarArchivo->Location = System::Drawing::Point(225, 54);
			this->BIngresarArchivo->Margin = System::Windows::Forms::Padding(2);
			this->BIngresarArchivo->Name = L"BIngresarArchivo";
			this->BIngresarArchivo->Size = System::Drawing::Size(114, 22);
			this->BIngresarArchivo->TabIndex = 5;
			this->BIngresarArchivo->Text = L"Ingresar Archivo";
			this->BIngresarArchivo->UseVisualStyleBackColor = true;
			this->BIngresarArchivo->Click += gcnew System::EventHandler(this, &MyForm::BIngresarArchivo_Click);
			// 
			// OFDAbrirArchivo
			// 
			this->OFDAbrirArchivo->FileName = L"openFileDialog1";
			// 
			// BSalir
			// 
			this->BSalir->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BSalir->Location = System::Drawing::Point(374, 310);
			this->BSalir->Name = L"BSalir";
			this->BSalir->Size = System::Drawing::Size(67, 24);
			this->BSalir->TabIndex = 6;
			this->BSalir->Text = L"Salir ";
			this->BSalir->UseVisualStyleBackColor = true;
			this->BSalir->Click += gcnew System::EventHandler(this, &MyForm::BSalir_Click);
			// 
			// BIniciarJuego
			// 
			this->BIniciarJuego->Enabled = false;
			this->BIniciarJuego->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BIniciarJuego->Location = System::Drawing::Point(237, 81);
			this->BIniciarJuego->Name = L"BIniciarJuego";
			this->BIniciarJuego->Size = System::Drawing::Size(87, 25);
			this->BIniciarJuego->TabIndex = 7;
			this->BIniciarJuego->Text = L"Inciar Juego";
			this->BIniciarJuego->UseVisualStyleBackColor = true;
			this->BIniciarJuego->Click += gcnew System::EventHandler(this, &MyForm::BIniciarJuego_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->EnableHeadersVisualStyles = false;
			this->dataGridView1->Location = System::Drawing::Point(14, 112);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(344, 222);
			this->dataGridView1->TabIndex = 8;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(451, 345);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->BIniciarJuego);
			this->Controls->Add(this->BSalir);
			this->Controls->Add(this->BIngresarArchivo);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"Color Man{ia";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Pilas* PilaMapaInicial = new Pilas();
		int ContPilas = 0, ContDatos = 0, ContAgregarPilas = 0; 
	private: System::Void BIngresarArchivo_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		array<String^>^ DatosTemporales;
		
		if (System::Windows::Forms::DialogResult::OK == OFDAbrirArchivo->ShowDialog()) //Validar si ingreso el .txt
		{
			StreamReader^ inputStream = gcnew StreamReader(OFDAbrirArchivo->FileName); //Crear una variable para leer el .txt
			if (inputStream != nullptr)
			{
				String^ LeerLinea = inputStream->ReadLine();
				DatosTemporales = LeerLinea->Split(','); //Pasamos a un array de string los datos del .txt
				int RecorrerDatosTemporales = 0;
				while (DatosTemporales->Length != RecorrerDatosTemporales)
				{
					if (DatosTemporales[RecorrerDatosTemporales] == "X") //Verificar que no haya puesto mas de 4 pilas
					{                                                    
						ContPilas++;
						RecorrerDatosTemporales++;
						if (ContPilas > 4)
						{
							MessageBox::Show("El archivo de texto contiene más de pilas maximas o minimas para el juego", "Error: Pilas max o min", MessageBoxButtons::OK, MessageBoxIcon::Error);
							break;
						}
					}
					else
					{
						RecorrerDatosTemporales++;
					}
				}
				//Ingresar los datos a cada pila 
				if (ContPilas < 4 && ContPilas > 0)
				{
					RecorrerDatosTemporales = 0;
					
					while (DatosTemporales->Length != RecorrerDatosTemporales)
					{
						switch (ContAgregarPilas)
						{
						case 0:
							if (DatosTemporales[RecorrerDatosTemporales] == "X")
							{
								ContAgregarPilas++;
							}
							else
							{
								PilaMapaInicial->agregarDatosPila1(Convert::ToChar(DatosTemporales[RecorrerDatosTemporales]));
							}
							break;
						case 1: 
							if (DatosTemporales[RecorrerDatosTemporales] == "X")
							{
								ContAgregarPilas++;
							}
							else
							{
								PilaMapaInicial->agregarDatosPila2(Convert::ToChar(DatosTemporales[RecorrerDatosTemporales]));
							}
							break;
						case 2: 
							if (DatosTemporales[RecorrerDatosTemporales] == "X")
							{
								ContAgregarPilas++;
							}
							else
							{
								PilaMapaInicial->agregarDatosPila3(Convert::ToChar(DatosTemporales[RecorrerDatosTemporales]));
							}
							break;
						case 3: 
							if (DatosTemporales[RecorrerDatosTemporales] == "X")
							{
								ContAgregarPilas++;
							}
							else
							{
								PilaMapaInicial->agregarDatosPila4(Convert::ToChar(DatosTemporales[RecorrerDatosTemporales]));
							}
							break;
						default:
							break;
						}
						RecorrerDatosTemporales++;
					}
					MessageBox::Show("El archivo de texto se ingreso correctamente", "Archivo de texto leído", MessageBoxButtons::OK);
					this->BIniciarJuego->Enabled = true;
				}
				
			}
			else
			{
				MessageBox::Show("El archivo de texto se encuentra vacío", "Error: Archivo de texto vacío", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			inputStream->Close();
			
		}
		
	}
    private: System::Void BSalir_Click(System::Object^ sender, System::EventArgs^ e) 
    {
		Application::Exit();
    }
    private: System::Void BIniciarJuego_Click(System::Object^ sender, System::EventArgs^ e)
    {
		dataGridView1->ColumnCount = ContPilas + 1;
		dataGridView1->Rows->Add(9);
		dataGridView1->AllowUserToResizeColumns = false; //El usuario no pueda Cambiar el tamaño a las columnas
		dataGridView1->AllowUserToResizeRows = false; //El usuario no pueda cambiar el tamaño a las filas
		dataGridView1->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill; //Ajustarlo en el datagridview las pilas
		//Variables para colorear las casillas del datagridview
		System::Drawing::Color ColorRojo = Color::Red;
		System::Drawing::Color ColorAmarillo = Color::Yellow;
		System::Drawing::Color ColorVerde = Color::Green;
		System::Drawing::Color ColorMorado = Color::Purple;
		while (ContPilas >= 0)
		{
			if (ContPilas+1 == 4)
			{
				for (int i = 9; i > 0; i--)
				{
					for (int j = 3; j < 4; j++)
					{
						if (PilaMapaInicial->Pila4->Siguiente == nullptr)
						{
							break;
						}
						else
						{
							switch (PilaMapaInicial->Pila4->elemento)
							{
							case 86: //Verde
								dataGridView1->Rows[i]->Cells[j]->Style->BackColor = ColorVerde;

								break;
							case 65: //Amarillo
								dataGridView1->Rows[i]->Cells[j]->Style->BackColor = ColorAmarillo;
								break;
							case 77: //Morado
								dataGridView1->Rows[i]->Cells[j]->Style->BackColor = ColorMorado;
								break;
							case 82: //Rojo
								dataGridView1->Rows[i]->Cells[j]->Style->BackColor = ColorRojo;
								break;

							default:
								break;
							}
							PilaMapaInicial->SacarElemento(4);
						}

					}
				}
				
			}
			else if (ContPilas + 1 == 3) 
			{
				for (int i = 9; i > 0; i--)
				{
					for (int j = 2; j < 3; j++)
					{
						if (PilaMapaInicial->Pila3->Siguiente == nullptr)
						{
							break;
						}
						else
						{
							switch (PilaMapaInicial->Pila3->elemento)
							{
							case 86: //Verde
								dataGridView1->Rows[i]->Cells[j]->Style->BackColor = ColorVerde;

								break;
							case 65: //Amarillo
								dataGridView1->Rows[i]->Cells[j]->Style->BackColor = ColorAmarillo;
								break;
							case 77: //Morado
								dataGridView1->Rows[i]->Cells[j]->Style->BackColor = ColorMorado;
								break;
							case 82: //Rojo
								dataGridView1->Rows[i]->Cells[j]->Style->BackColor = ColorRojo;
								break;

							default:
								break;
							}
							PilaMapaInicial->SacarElemento(3);
						}

					}
				}
			}
			else if (ContPilas + 1 == 2)
			{
				for (int i = 9; i > 0; i--)
				{
					for (int j = 1; j < 2; j++)
					{
						if (PilaMapaInicial->Pila2->Siguiente == nullptr)
						{
							break;
						}
						else
						{
							switch (PilaMapaInicial->Pila2->elemento)
							{
							case 86: //Verde
								dataGridView1->Rows[i]->Cells[j]->Style->BackColor = ColorVerde;

								break;
							case 65: //Amarillo
								dataGridView1->Rows[i]->Cells[j]->Style->BackColor = ColorAmarillo;
								break;
							case 77: //Morado
								dataGridView1->Rows[i]->Cells[j]->Style->BackColor = ColorMorado;
								break;
							case 82: //Rojo
								dataGridView1->Rows[i]->Cells[j]->Style->BackColor = ColorRojo;
								break;

							default:
								break;
							}
							PilaMapaInicial->SacarElemento(2);
						}

					}
				}

			}
			else if(ContPilas+1 == 1)
			{
			for (int i = 9; i > 0; i--)
			{
				for (int j = 0; j < 1; j++)
				{

					if (PilaMapaInicial->Pila1->Siguiente == nullptr)
					{
						break;
					}
					else
					{
						switch (PilaMapaInicial->Pila1->elemento)
						{
						case 86: //Verde
							dataGridView1->Rows[i]->Cells[j]->Style->BackColor = ColorVerde;

							break;
						case 65: //Amarillo
							dataGridView1->Rows[i]->Cells[j]->Style->BackColor = ColorAmarillo;
							break;
						case 77: //Morado
							dataGridView1->Rows[i]->Cells[j]->Style->BackColor = ColorMorado;
							break;
						case 82: //Rojo
							dataGridView1->Rows[i]->Cells[j]->Style->BackColor = ColorRojo;
							break;

						default:

							break;
						}
						PilaMapaInicial->SacarElemento(1);

					}

				}
			}
            }
			ContPilas--;
		}
		
		
		
		
    }
};
}
