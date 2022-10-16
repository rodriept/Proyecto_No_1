#pragma once
#include "PilasJuego.h"

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
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ TBIngresoDePilas;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ BIngresarArchivo;

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->TBIngresoDePilas = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->BIngresarArchivo = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label1->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(76, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(267, 28);
			this->label1->TabIndex = 0;
			this->label1->Text = L"¡BIENVENIDOS A COLOR MANÍA!";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 63);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(175, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Ingrese la cantidad de pilas:";
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Location = System::Drawing::Point(247, 61);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(109, 27);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Ingresar Pilas";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// TBIngresoDePilas
			// 
			this->TBIngresoDePilas->Location = System::Drawing::Point(193, 63);
			this->TBIngresoDePilas->Name = L"TBIngresoDePilas";
			this->TBIngresoDePilas->Size = System::Drawing::Size(48, 22);
			this->TBIngresoDePilas->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 113);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(263, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Ingrese el archivo de texto del mapa inicial:";
			this->label3->Visible = false;
			// 
			// BIngresarArchivo
			// 
			this->BIngresarArchivo->Enabled = false;
			this->BIngresarArchivo->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BIngresarArchivo->Location = System::Drawing::Point(281, 108);
			this->BIngresarArchivo->Name = L"BIngresarArchivo";
			this->BIngresarArchivo->Size = System::Drawing::Size(121, 27);
			this->BIngresarArchivo->TabIndex = 5;
			this->BIngresarArchivo->Text = L"Ingresar Archivo";
			this->BIngresarArchivo->UseVisualStyleBackColor = true;
			this->BIngresarArchivo->Click += gcnew System::EventHandler(this, &MyForm::BIngresarArchivo_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(434, 403);
			this->Controls->Add(this->BIngresarArchivo);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->TBIngresoDePilas);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Colo manía";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int CantPilas;
		
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			CantPilas = Convert::ToInt32(TBIngresoDePilas->Text);
			if (CantPilas = 0 || CantPilas < 0)
			{
				MessageBox::Show("Ingrese una cantidad de pilas mayor a 0", "Error: Ingrese una cantidad de pilas", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else
			{
				this->label3->Visible = true;
				this->BIngresarArchivo->Enabled = true;
				MessageBox::Show("Pilas ingresadas correctamente", "Pilas ingresadas", MessageBoxButtons::OK);
			}
		}
		catch (...)
		{
			MessageBox::Show("Ingrese una cantidad de pilas que tendrá el mapa inicial", "Error: Ingresar la cantidad de pilas", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void BIngresarArchivo_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ Archivo = "Mapa_Inicial.txt";
		StreamReader^ LeerArchivo = File::OpenText(Archivo);
		StreamReader^ ValidarArchivo = File::OpenText(Archivo);
		if (ValidarArchivo == nullptr)
		{
			MessageBox::Show("El archivo de texto se encuentra vacío ingrese el mapa inicial", "Error: Archivo vacío", MessageBoxButtons::OK,MessageBoxIcon::Error);
		}
		else
		{
			
		}
	}
};
}
