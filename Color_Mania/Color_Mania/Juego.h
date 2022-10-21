#pragma once
#include "Pilas.h"
namespace ColorMania {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Juego
	/// </summary>
	public ref class Juego : public System::Windows::Forms::Form
	{
		
	public:
		Juego(void)
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
		~Juego()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ DGVMapaJuego;
	protected:

	private: System::Windows::Forms::Button^ BRegresarMenu;
	protected:

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
			this->DGVMapaJuego = (gcnew System::Windows::Forms::DataGridView());
			this->BRegresarMenu = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGVMapaJuego))->BeginInit();
			this->SuspendLayout();
			// 
			// DGVMapaJuego
			// 
			this->DGVMapaJuego->AllowUserToAddRows = false;
			this->DGVMapaJuego->AllowUserToDeleteRows = false;
			this->DGVMapaJuego->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DGVMapaJuego->Location = System::Drawing::Point(60, 57);
			this->DGVMapaJuego->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->DGVMapaJuego->Name = L"DGVMapaJuego";
			this->DGVMapaJuego->ReadOnly = true;
			this->DGVMapaJuego->Size = System::Drawing::Size(355, 233);
			this->DGVMapaJuego->TabIndex = 0;
			// 
			// BRegresarMenu
			// 
			this->BRegresarMenu->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BRegresarMenu->Location = System::Drawing::Point(319, 334);
			this->BRegresarMenu->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->BRegresarMenu->Name = L"BRegresarMenu";
			this->BRegresarMenu->Size = System::Drawing::Size(153, 31);
			this->BRegresarMenu->TabIndex = 1;
			this->BRegresarMenu->Text = L"Regresar al menú";
			this->BRegresarMenu->UseVisualStyleBackColor = true;
			this->BRegresarMenu->Click += gcnew System::EventHandler(this, &Juego::BRegresarMenu_Click);
			// 
			// Juego
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(488, 379);
			this->Controls->Add(this->BRegresarMenu);
			this->Controls->Add(this->DGVMapaJuego);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"Juego";
			this->Text = L"Juego";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGVMapaJuego))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		
	private: System::Void BRegresarMenu_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close();
	}
	};
}
