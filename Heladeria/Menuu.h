#pragma once
#include <string>
#include "Agregar.h"
#include <msclr/marshal_cppstd.h>
#include "Mostrar.h"

namespace Heladeria {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Heladeria;

	/// <summary>
	/// Resumen de Menuu
	/// </summary>
	public ref class Menuu : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::Form^ otherform;
	public:
		Menuu(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		Menuu(System::Windows::Forms::Form^ o)
		{
			otherform = o;
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Menuu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button3;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Menuu::typeid));
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->Font = (gcnew System::Drawing::Font(L"AngryBirds", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(388, 234);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(153, 86);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Eliminar Pedido";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Menuu::button3_Click);
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->Font = (gcnew System::Drawing::Font(L"AngryBirds", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(199, 129);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(153, 75);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Mostrar Pedido";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Menuu::button2_Click);
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Font = (gcnew System::Drawing::Font(L"AngryBirds", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(22, 21);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(147, 75);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Agregar Pedido";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Menuu::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(462, 21);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(79, 57);
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Menuu::pictureBox1_Click);
			// 
			// Menuu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(576, 322);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Menuu";
			this->Text = L"Menuu";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Menuu::Menuu_FormClosed);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
		pilahelado* pilaCabecera = NULL;
		pilahelado* pilaAuxiliar;
		pilahelado* pilaNuevo;

		pilaSave* pilaC = NULL;
		pilaSave* pilaA;
		pilaSave* pilaN;
#pragma endregion
	private: System::Void Menuu_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		otherform->Enabled = true;
		otherform->Focus();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Form^ f1 = gcnew Agregar(this);
		f1->Show();
		this->Enabled = false;
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		//Leemos
		FILE* archivo;
		archivo = fopen("pedido.txt", "rb");

		pilaCabecera = NULL;

		if (archivo == NULL)
		{
			MessageBox::Show("NO HAY PEDIDOS", "INFORMACIÓN", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		while (feof(archivo) == 0)
		{
			pilaNuevo = (pilahelado*)malloc(sizeof(pilahelado));
			if (1 != fread(pilaNuevo, sizeof(pilahelado), 1, archivo)) break;
			pilaNuevo->sgt = pilaCabecera;
			pilaCabecera = pilaNuevo;
		}
		fclose(archivo);

		//Removemos
		pilaAuxiliar = NULL;

		if (pilaCabecera != NULL)
		{
			pilaAuxiliar = pilaCabecera;
			pilaCabecera = pilaAuxiliar->sgt;

			string dato = "Banana: " + pilaAuxiliar->banana + "\n";
			dato += "Cono: " + pilaAuxiliar->cono;
			dato += "Paleta: " + pilaAuxiliar->paleta;
			dato += "Sundae: " + pilaAuxiliar->sundae;
			dato += "Frito: " + pilaAuxiliar->frito;
			dato += "Smothie: " + pilaAuxiliar->smothie;
			MessageBox::Show(gcnew String(dato.c_str()), "PEDIDO ATENDIDO", MessageBoxButtons::OK, MessageBoxIcon::Information);
			free(pilaAuxiliar);
		}
		else
		{
			MessageBox::Show("NO HAY PEDIDOS", "INFORMACIÓN", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}

		//Guardamos

		pilaAuxiliar = pilaCabecera;
		pilaC = NULL;

		while (pilaAuxiliar != NULL)
		{
			//Depositamos la pila en una nueva estructura para guardar el archivo en orden.
			pilaN = new pilaSave();
			pilaN->banana = pilaAuxiliar->banana;
			pilaN->cono = pilaAuxiliar->cono;
			pilaN->paleta = pilaAuxiliar->paleta;
			pilaN->sundae = pilaAuxiliar->sundae;
			pilaN->frito = pilaAuxiliar->frito;
			pilaN->smothie = pilaAuxiliar->smothie;
			pilaN->sgt = pilaC;
			pilaC = pilaN;

			pilaAuxiliar = pilaAuxiliar->sgt;
		}

		//Guardamos el archivo recorriendo el pilaSave (orden invertido)
		pilaA = pilaC;

		FILE* archivo2;
		archivo2 = fopen("pedido.txt", "w");

		while (pilaA != NULL)
		{
			fwrite(pilaA, sizeof(pilaSave), 1, archivo2);
			pilaA = pilaA->sgt;
		}
		fclose(archivo2);
	}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	this ->Close();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Form^ f1 = gcnew Mostrar(this);
	f1->Show();
	this->Enabled = false;
}
};
}
