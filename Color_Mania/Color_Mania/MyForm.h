#pragma once
#include "Pilas.h"
#include "Colas.h"
#include "MovRealizados.h"

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
		static int Segundo = 0;
		static int minuto = 0;
		String^ Seg;
	private: System::Windows::Forms::Button^ BCambiarCola;
	private: System::Windows::Forms::Button^ BGuardar;
		   String^ Min;
	
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
	private: System::Windows::Forms::Button^ BBorrarMapa;
	private: System::Windows::Forms::ComboBox^ CBElegirModo;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ LMovimientosRes;
	private: System::Windows::Forms::Button^ BIrAMovRealizados;
	private: System::Windows::Forms::Timer^ Timer1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ LTiempo;
	private: System::ComponentModel::IContainer^ components;





	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->BIngresarArchivo = (gcnew System::Windows::Forms::Button());
			this->OFDAbrirArchivo = (gcnew System::Windows::Forms::OpenFileDialog());
			this->BSalir = (gcnew System::Windows::Forms::Button());
			this->BIniciarJuego = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->BBorrarMapa = (gcnew System::Windows::Forms::Button());
			this->CBElegirModo = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->LMovimientosRes = (gcnew System::Windows::Forms::Label());
			this->BIrAMovRealizados = (gcnew System::Windows::Forms::Button());
			this->Timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->LTiempo = (gcnew System::Windows::Forms::Label());
			this->BCambiarCola = (gcnew System::Windows::Forms::Button());
			this->BGuardar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Info;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label1->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(159, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(405, 39);
			this->label1->TabIndex = 0;
			this->label1->Text = L"¡BIENVENIDOS A COLOR MANÍA!";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label3->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label3->Location = System::Drawing::Point(17, 91);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(309, 20);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Ingrese el archivo de texto del mapa inicial:";
			// 
			// BIngresarArchivo
			// 
			this->BIngresarArchivo->BackColor = System::Drawing::SystemColors::MenuBar;
			this->BIngresarArchivo->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BIngresarArchivo->ForeColor = System::Drawing::SystemColors::Desktop;
			this->BIngresarArchivo->Location = System::Drawing::Point(338, 82);
			this->BIngresarArchivo->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->BIngresarArchivo->Name = L"BIngresarArchivo";
			this->BIngresarArchivo->Size = System::Drawing::Size(171, 34);
			this->BIngresarArchivo->TabIndex = 5;
			this->BIngresarArchivo->Text = L"Ingresar Archivo";
			this->BIngresarArchivo->UseVisualStyleBackColor = false;
			this->BIngresarArchivo->Click += gcnew System::EventHandler(this, &MyForm::BIngresarArchivo_Click);
			// 
			// OFDAbrirArchivo
			// 
			this->OFDAbrirArchivo->FileName = L"openFileDialog1";
			// 
			// BSalir
			// 
			this->BSalir->BackColor = System::Drawing::SystemColors::MenuBar;
			this->BSalir->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BSalir->Location = System::Drawing::Point(609, 561);
			this->BSalir->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->BSalir->Name = L"BSalir";
			this->BSalir->Size = System::Drawing::Size(100, 38);
			this->BSalir->TabIndex = 6;
			this->BSalir->Text = L"Salir ";
			this->BSalir->UseVisualStyleBackColor = false;
			this->BSalir->Click += gcnew System::EventHandler(this, &MyForm::BSalir_Click);
			// 
			// BIniciarJuego
			// 
			this->BIniciarJuego->BackColor = System::Drawing::SystemColors::MenuBar;
			this->BIniciarJuego->Enabled = false;
			this->BIniciarJuego->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BIniciarJuego->Location = System::Drawing::Point(356, 125);
			this->BIniciarJuego->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->BIniciarJuego->Name = L"BIniciarJuego";
			this->BIniciarJuego->Size = System::Drawing::Size(130, 39);
			this->BIniciarJuego->TabIndex = 7;
			this->BIniciarJuego->Text = L"Inciar Juego";
			this->BIniciarJuego->UseVisualStyleBackColor = false;
			this->BIniciarJuego->Click += gcnew System::EventHandler(this, &MyForm::BIniciarJuego_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->EnableHeadersVisualStyles = false;
			this->dataGridView1->Location = System::Drawing::Point(21, 172);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(516, 341);
			this->dataGridView1->TabIndex = 8;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellClick);
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// BBorrarMapa
			// 
			this->BBorrarMapa->BackColor = System::Drawing::SystemColors::MenuBar;
			this->BBorrarMapa->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BBorrarMapa->Location = System::Drawing::Point(449, 561);
			this->BBorrarMapa->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->BBorrarMapa->Name = L"BBorrarMapa";
			this->BBorrarMapa->Size = System::Drawing::Size(152, 38);
			this->BBorrarMapa->TabIndex = 9;
			this->BBorrarMapa->Text = L"Borrar Mapa";
			this->BBorrarMapa->UseVisualStyleBackColor = false;
			this->BBorrarMapa->Click += gcnew System::EventHandler(this, &MyForm::BBorrarMapa_Click);
			// 
			// CBElegirModo
			// 
			this->CBElegirModo->FormattingEnabled = true;
			this->CBElegirModo->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Fácil", L"Medio", L"Difícil" });
			this->CBElegirModo->Location = System::Drawing::Point(534, 131);
			this->CBElegirModo->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->CBElegirModo->Name = L"CBElegirModo";
			this->CBElegirModo->Size = System::Drawing::Size(166, 28);
			this->CBElegirModo->TabIndex = 10;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::Window;
			this->label2->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label2->Location = System::Drawing::Point(530, 106);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(162, 20);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Elegir Modo de juego:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::Window;
			this->label4->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label4->Location = System::Drawing::Point(544, 212);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(101, 20);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Movimientos:";
			// 
			// LMovimientosRes
			// 
			this->LMovimientosRes->AutoSize = true;
			this->LMovimientosRes->BackColor = System::Drawing::SystemColors::Window;
			this->LMovimientosRes->ForeColor = System::Drawing::SystemColors::Desktop;
			this->LMovimientosRes->Location = System::Drawing::Point(648, 212);
			this->LMovimientosRes->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LMovimientosRes->Name = L"LMovimientosRes";
			this->LMovimientosRes->Size = System::Drawing::Size(0, 20);
			this->LMovimientosRes->TabIndex = 13;
			// 
			// BIrAMovRealizados
			// 
			this->BIrAMovRealizados->BackColor = System::Drawing::SystemColors::Control;
			this->BIrAMovRealizados->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BIrAMovRealizados->Location = System::Drawing::Point(181, 561);
			this->BIrAMovRealizados->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->BIrAMovRealizados->Name = L"BIrAMovRealizados";
			this->BIrAMovRealizados->Size = System::Drawing::Size(260, 38);
			this->BIrAMovRealizados->TabIndex = 14;
			this->BIrAMovRealizados->Text = L"Ver Movimientos realizados";
			this->BIrAMovRealizados->UseVisualStyleBackColor = false;
			this->BIrAMovRealizados->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Timer1
			// 
			this->Timer1->Interval = 1000;
			this->Timer1->Tick += gcnew System::EventHandler(this, &MyForm::Timer1_Tick);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label5->Location = System::Drawing::Point(544, 247);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(65, 20);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Tiempo:";
			// 
			// LTiempo
			// 
			this->LTiempo->AutoSize = true;
			this->LTiempo->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->LTiempo->Location = System::Drawing::Point(615, 247);
			this->LTiempo->Name = L"LTiempo";
			this->LTiempo->Size = System::Drawing::Size(40, 20);
			this->LTiempo->TabIndex = 16;
			this->LTiempo->Text = L"0:00";
			// 
			// BCambiarCola
			// 
			this->BCambiarCola->BackColor = System::Drawing::SystemColors::Control;
			this->BCambiarCola->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BCambiarCola->Location = System::Drawing::Point(548, 296);
			this->BCambiarCola->Name = L"BCambiarCola";
			this->BCambiarCola->Size = System::Drawing::Size(144, 32);
			this->BCambiarCola->TabIndex = 17;
			this->BCambiarCola->Text = L"Cambiar a cola";
			this->BCambiarCola->UseVisualStyleBackColor = false;
			// 
			// BGuardar
			// 
			this->BGuardar->BackColor = System::Drawing::SystemColors::Control;
			this->BGuardar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BGuardar->Location = System::Drawing::Point(548, 334);
			this->BGuardar->Name = L"BGuardar";
			this->BGuardar->Size = System::Drawing::Size(144, 31);
			this->BGuardar->TabIndex = 18;
			this->BGuardar->Text = L"Guardar Partida";
			this->BGuardar->UseVisualStyleBackColor = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(748, 618);
			this->Controls->Add(this->BGuardar);
			this->Controls->Add(this->BCambiarCola);
			this->Controls->Add(this->LTiempo);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->BIrAMovRealizados);
			this->Controls->Add(this->LMovimientosRes);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->CBElegirModo);
			this->Controls->Add(this->BBorrarMapa);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->BIniciarJuego);
			this->Controls->Add(this->BSalir);
			this->Controls->Add(this->BIngresarArchivo);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->Text = L"Color Man{ia";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Variables globales
		Pilas* PilaMapaInicial = new Pilas();
		int ContPilas = 0;
		int Clicks, FilaDGV, ColumnaDGV, ColumnaClick2;
		int pilaMax1 = 0, pilaMax2 = 0, pilaMax3 = 0, pilaMax4 = 0, pilaMax;
		int Movimientos, opcionModo;
		MovRealizados^ MandarMov = gcnew MovRealizados;
		String^ MovimientoRealizado;
	private: System::Void BIngresarArchivo_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		array<String^>^ DatosTemporales;
		int ContAgregarPilas = 0;
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
								pilaMax1++;
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
								pilaMax2++;
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
								pilaMax3++;
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
								pilaMax4++;
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
		if (pilaMax1>pilaMax2 && pilaMax1>pilaMax3 && pilaMax1>pilaMax4)
		{
			pilaMax = pilaMax1;
			dataGridView1->Rows->Add(pilaMax1);
		}
		else if (pilaMax2 > pilaMax1 && pilaMax2 > pilaMax3 && pilaMax2 > pilaMax4)
		{
			pilaMax = pilaMax2;
			dataGridView1->Rows->Add(pilaMax2);
		}
		else if (pilaMax3 > pilaMax1 && pilaMax3 > pilaMax2 && pilaMax3 > pilaMax4)
		{
			pilaMax = pilaMax3;
			dataGridView1->Rows->Add(pilaMax3);
		}
		else
		{
			pilaMax = pilaMax4;
			dataGridView1->Rows->Add(pilaMax4);
		}
		dataGridView1->AllowUserToResizeColumns = false; //El usuario no pueda Cambiar el tamaño a las columnas
		dataGridView1->AllowUserToResizeRows = false; //El usuario no pueda cambiar el tamaño a las filas
		dataGridView1->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill; //Ajustarlo en el datagridview las pilas
		//Variables para colorear las casillas del datagridview
		System::Drawing::Color ColorRojo = Color::Red;
		System::Drawing::Color ColorAmarillo = Color::Yellow;
		System::Drawing::Color ColorVerde = Color::Green;
		System::Drawing::Color ColorMorado = Color::Purple;
		System::Drawing::Color ColorBlanco = Color::White;
		while (ContPilas >= 0)
		{
			if (ContPilas+1 == 4)
			{
				for (int i = pilaMax; i > 0; i--)
				{
					for (int j = 3; j < 4; j++)
					{
						if (PilaMapaInicial->Pila4->Siguiente == nullptr)
						{
							dataGridView1->Rows[i]->Cells[j]->Style->BackColor = ColorBlanco;
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
				for (int i = pilaMax; i > 0; i--)
				{
					for (int j = 2; j < 3; j++)
					{
						if (PilaMapaInicial->Pila3->Siguiente == nullptr)
						{
							dataGridView1->Rows[i]->Cells[j]->Style->BackColor = ColorBlanco;
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
				for (int i = pilaMax; i > 0; i--)
				{
					for (int j = 1; j < 2; j++)
					{
						if (PilaMapaInicial->Pila2->Siguiente == nullptr)
						{
							dataGridView1->Rows[i]->Cells[j]->Style->BackColor = ColorBlanco;
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
			for (int i = pilaMax; i > 0; i--)
			{
				for (int j = 0; j < 1; j++)
				{

					if (PilaMapaInicial->Pila1->Siguiente == nullptr)
					{
						dataGridView1->Rows[i]->Cells[j]->Style->BackColor = ColorBlanco;
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
		opcionModo = CBElegirModo->SelectedIndex;
		switch (opcionModo)
		{
		case 0:
			Movimientos = 100000;
			LMovimientosRes->Text = "infinito";
			LTiempo->Text = "infinito";
			break;
		case 1:
			Movimientos = 50;
			LMovimientosRes->Text = Convert::ToString(Movimientos);
			break;
		case 2:
			Movimientos = 25;
			LMovimientosRes->Text = Convert::ToString(Movimientos);
			break;
		default:
			break;
		}
		Timer1->Enabled = true;
		pilaMax = 0;
		pilaMax1 = 0;
		pilaMax2 = 0;
		pilaMax3 = 0;
		pilaMax4 = 0;
		ContPilas = 0;
		BIniciarJuego->Enabled = false;
    }
    private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
    {
		
		
		if (Movimientos == 0)
		{
			MessageBox::Show("Ya no tienes mas movimientos terminó el juego", "Juego terminado", MessageBoxButtons::OK);
		}
		else
		{
			if (Clicks == 0)
			{
				if (dataGridView1->Rows[e->RowIndex - 1]->Cells[e->ColumnIndex]->Style->BackColor != Color::White)
				{
					MessageBox::Show("Casilla no permitida porque tiene una arriba de el", "Error: Casilla no permitida", MessageBoxButtons::OK, MessageBoxIcon::Error);

				}
				else
				{
					MessageBox::Show("Presione donde quiere ingresar el color", "Ingrese la casilla", MessageBoxButtons::OK);
					FilaDGV = e->RowIndex;
					ColumnaDGV = e->ColumnIndex;
					Clicks++;
					if (ColumnaDGV == 0)
					{
						MovimientoRealizado = "P1-->";
					}
					else if (ColumnaDGV == 1)
					{
						MovimientoRealizado = "P2-->";
					}
					else if(ColumnaDGV == 2)
					{
						MovimientoRealizado = "P3-->";
					}
					else
					{
						MovimientoRealizado = "P4-->";
					}
				}
			}
			else if (Clicks == 1)
			{

				if (dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Style->BackColor != Color::White)
				{
					MessageBox::Show("Lugar ya ocupado por un color, Ingrese el color en otra casilla", "Error: Ingrese el color en otra casilla", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else
				{

					dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Style->BackColor = dataGridView1->Rows[FilaDGV]->Cells[ColumnaDGV]->Style->BackColor;
					dataGridView1->Rows[FilaDGV]->Cells[ColumnaDGV]->Style->BackColor = Color::White;
					ColumnaClick2 = e->ColumnIndex;
					if (opcionModo != 0)
					{
						Movimientos--;
						LMovimientosRes->Text = Convert::ToString(Movimientos);
					}
					Clicks--;
					if (ColumnaClick2 == 0)
					{
						MovimientoRealizado += "P1";
						MandarMov->LBMostrarMov->Items->Add(MovimientoRealizado);
						MovimientoRealizado = "";
					}
					else if (ColumnaClick2 == 1)
					{
						MovimientoRealizado += "P2";
						MandarMov->LBMostrarMov->Items->Add(MovimientoRealizado);
						MovimientoRealizado = "";
					}
					else if (ColumnaClick2 == 2)
					{
						MovimientoRealizado += "P3";
						MandarMov->LBMostrarMov->Items->Add(MovimientoRealizado);
						MovimientoRealizado = "";
					}
					else
					{
						MovimientoRealizado += "P4";
						MandarMov->LBMostrarMov->Items->Add(MovimientoRealizado);
						MovimientoRealizado = "";
					}


				}
			}
		}
			
		
    }
   
    private: System::Void BBorrarMapa_Click(System::Object^ sender, System::EventArgs^ e) 
    {
	
	  dataGridView1->Columns->Clear();
	   dataGridView1->Rows->Clear();
	
    }
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		MandarMov->ShowDialog();
		
    }
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
    private: System::Void Timer1_Tick(System::Object^ sender, System::EventArgs^ e) 
    {
		int opcion = CBElegirModo->SelectedIndex;
		Segundo++;
		if (Segundo == 60)
		{
			Segundo = 0;
			minuto++;
		}
		Seg = Convert::ToString(Segundo);
		Min = Convert::ToString(minuto);
		LTiempo->Text = Min + ":" + Seg;
		switch (opcion)
		{
		case 1:
			if (minuto == 10)
			{
				Timer1->Enabled = false;
				MessageBox::Show("El tiempo ha acabado, termino el juego", "Tiempo terminado", MessageBoxButtons::OK);
				dataGridView1->Enabled = false;

			}
			break;
		case 2:
			if (minuto == 5)
			{
				Timer1->Enabled = false;
				MessageBox::Show("El tiempo ha acabado, Termino el juego", "Tiempo terminado", MessageBoxButtons::OK);
				dataGridView1->Enabled = false;
			}
			break;
		default:
			break;
		}
    }
};
}
