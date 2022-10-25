#pragma once

namespace ColorMania {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MovRealizados
	/// </summary>
	public ref class MovRealizados : public System::Windows::Forms::Form
	{
	public:
		MovRealizados(void)
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
		~MovRealizados()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::ListBox^ LBMostrarMov;
	private: System::Windows::Forms::Button^ BRegresar;
	public:
	protected:


	private: System::Windows::Forms::Label^ label1;
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
			this->LBMostrarMov = (gcnew System::Windows::Forms::ListBox());
			this->BRegresar = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// LBMostrarMov
			// 
			this->LBMostrarMov->FormattingEnabled = true;
			this->LBMostrarMov->ItemHeight = 16;
			this->LBMostrarMov->Location = System::Drawing::Point(91, 66);
			this->LBMostrarMov->Name = L"LBMostrarMov";
			this->LBMostrarMov->Size = System::Drawing::Size(166, 196);
			this->LBMostrarMov->TabIndex = 0;
			// 
			// BRegresar
			// 
			this->BRegresar->Location = System::Drawing::Point(230, 283);
			this->BRegresar->Name = L"BRegresar";
			this->BRegresar->Size = System::Drawing::Size(121, 43);
			this->BRegresar->TabIndex = 1;
			this->BRegresar->Text = L"Regresar al juego";
			this->BRegresar->UseVisualStyleBackColor = true;
			this->BRegresar->Click += gcnew System::EventHandler(this, &MovRealizados::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(42, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(270, 32);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Movimientos Hechos";
			// 
			// MovRealizados
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(363, 338);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->BRegresar);
			this->Controls->Add(this->LBMostrarMov);
			this->Name = L"MovRealizados";
			this->Text = L"Movimientos Realizados";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		
	}
	};
}
