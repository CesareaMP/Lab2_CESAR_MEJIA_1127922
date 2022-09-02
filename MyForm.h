#pragma once
#include "FIGURAS.h"

namespace Lab2CESARMEJIA1127922 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ lblarea;
	private: System::Windows::Forms::Label^ lblperimetro;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;






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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lblarea = (gcnew System::Windows::Forms::Label());
			this->lblperimetro = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(47, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(125, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Seleccione la figura";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"TRIANGULO", L"CUADRILATERO", L"PENTAGONO", L"HEXAGONO",
					L"HEPTAGONO", L"OCTAGONO", L"ENEAGONO", L"DECAGONO"
			});
			this->comboBox1->Location = System::Drawing::Point(190, 47);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			this->comboBox1->Move += gcnew System::EventHandler(this, &MyForm::comboBox1_Move);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(47, 89);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(96, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Ingrese el lado";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(190, 89);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(121, 22);
			this->textBox1->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(103, 215);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(147, 70);
			this->button1->TabIndex = 4;
			this->button1->Text = L"CALCULAR";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// lblarea
			// 
			this->lblarea->AutoSize = true;
			this->lblarea->Location = System::Drawing::Point(45, 300);
			this->lblarea->Name = L"lblarea";
			this->lblarea->Size = System::Drawing::Size(0, 16);
			this->lblarea->TabIndex = 5;
			// 
			// lblperimetro
			// 
			this->lblperimetro->AutoSize = true;
			this->lblperimetro->Location = System::Drawing::Point(45, 333);
			this->lblperimetro->Name = L"lblperimetro";
			this->lblperimetro->Size = System::Drawing::Size(0, 16);
			this->lblperimetro->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(190, 135);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(121, 22);
			this->textBox2->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(47, 135);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(123, 16);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Ingrese el apotema";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(344, 417);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->lblperimetro);
			this->Controls->Add(this->lblarea);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"FIGURAS GEOMETRICAS";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Move += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			int lugar = comboBox1->SelectedIndex;
			figuras figura;
			figura.longitud = Convert::ToInt32(textBox1->Text);
			figura.apotema = Convert::ToInt32(textBox2->Text);
			switch (lugar)
			{
			case 0:
				lblperimetro->Text = "El perimetro es:" + Convert::ToString(figura.perimetrotriangulo());
				lblarea->Text = "El area es: " + Convert::ToString(figura.areatriangulo());
				break;
			case 1:
				lblperimetro->Text = "El perimetro es:" + Convert::ToString(figura.perimetrocuadrilatero());
				lblarea->Text = "El area es: " + Convert::ToString(figura.areacuadrilatero());
				break;
			case 2:
				lblperimetro->Text = "El perimetro es:" + Convert::ToString(figura.perimetropentagono());
				lblarea->Text = "El area es: " + Convert::ToString(figura.areapentagono());
				break;
			case 3:
				lblperimetro->Text = "El perimetro es:" + Convert::ToString(figura.perimetrohexagono());
				lblarea->Text = "El area es: " + Convert::ToString(figura.areahexagono());
				break;
			case 4:
				lblperimetro->Text = "El perimetro es:" + Convert::ToString(figura.perimetroheptagono());
				lblarea->Text = "El area es: " + Convert::ToString(figura.areaheptagono());
				break;
			case 5:
				lblperimetro->Text = "El perimetro es:" + Convert::ToString(figura.perimetrooctagono());
				lblarea->Text = "El area es: " + Convert::ToString(figura.areaoctagono());
				break;
			case 6:
				lblperimetro->Text = "El perimetro es:" + Convert::ToString(figura.perimetroeneagono());
				lblarea->Text = "El area es: " + Convert::ToString(figura.areaeneagono());
				break;
			case 7:
				lblperimetro->Text = "El perimetro es:" + Convert::ToString(figura.perimetrodecagono());
				lblarea->Text = "El area es: " + Convert::ToString(figura.areadecagono());
				break;
			default:
				lblarea->Text = "figura no seleccionada";
				break;
			}
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	textBox2->Text = "1";
	textBox2->Enabled = false;
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	int lugar = comboBox1->SelectedIndex;
	switch (lugar)
	{
	case 0:
		textBox2->Text = "1";
		textBox2->Enabled = false;
		break;
	case 1:
		textBox2->Text = "1";
		textBox2->Enabled = false;
		break;
	default:
		textBox2->Enabled = true;
		textBox2->Text = "";
		break;
	}
}
private: System::Void comboBox1_Move(System::Object^ sender, System::EventArgs^ e) {
	
}
};
}
