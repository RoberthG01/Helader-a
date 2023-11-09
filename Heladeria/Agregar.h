#pragma once
#include <string>
#include <msclr/marshal_cppstd.h>

namespace Heladeria {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	public struct pilahelado
	{
		string banana;
		string cono;
		string paleta;
		string sundae;
		string frito;
		string smothie;
		pilahelado* sgt;
	};

	public struct pilaSave
	{
		string banana;
		string cono;
		string paleta;
		string sundae;
		string frito;
		string smothie;
		pilaSave* sgt;
	};
	/// <summary>
	/// Resumen de Agregar
	/// </summary>
	public ref class Agregar : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::Form^ otherform;
	public:
		Agregar(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		Agregar(System::Windows::Forms::Form^ o)
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
		~Agregar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button7;
	protected:
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Agregar::typeid));
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::White;
			this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.BackgroundImage")));
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button7->Font = (gcnew System::Drawing::Font(L"AngryBirds", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(232, 341);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(101, 53);
			this->button7->TabIndex = 33;
			this->button7->Text = L"Guardar";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Agregar::button7_Click);
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(430, 286);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(99, 35);
			this->textBox6->TabIndex = 32;
			// 
			// button6
			// 
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(309, 260);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(115, 61);
			this->button6->TabIndex = 31;
			this->button6->Text = L"Smothie";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(430, 179);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(99, 35);
			this->textBox5->TabIndex = 30;
			// 
			// button4
			// 
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(309, 155);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(115, 59);
			this->button4->TabIndex = 29;
			this->button4->Text = L"Helado Frito";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(430, 71);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(99, 35);
			this->textBox4->TabIndex = 28;
			// 
			// button5
			// 
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::Black;
			this->button5->Location = System::Drawing::Point(309, 46);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(115, 60);
			this->button5->TabIndex = 27;
			this->button5->Text = L"Sundae";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(162, 286);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(98, 35);
			this->textBox3->TabIndex = 26;
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(40, 260);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(115, 61);
			this->button3->TabIndex = 25;
			this->button3->Text = L"Paletas";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(162, 179);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(98, 35);
			this->textBox2->TabIndex = 24;
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(40, 155);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(115, 59);
			this->button2->TabIndex = 23;
			this->button2->Text = L"Helados de Cono";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(161, 71);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(99, 35);
			this->textBox1->TabIndex = 22;
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(40, 46);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(115, 60);
			this->button1->TabIndex = 21;
			this->button1->Text = L"Banana Split";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Agregar::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"AngryBirds", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(250, 9);
			this->label1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 18);
			this->label1->TabIndex = 20;
			this->label1->Text = L"Pedido";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(430, 341);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(83, 53);
			this->pictureBox1->TabIndex = 34;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Agregar::pictureBox1_Click);
			// 
			// Agregar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(564, 406);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"Agregar";
			this->Text = L"Agregar";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Agregar::Agregar_FormClosed);
			this->Load += gcnew System::EventHandler(this, &Agregar::Agregar_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		pilahelado* pilaCabecera = NULL;
		pilahelado* pilaAuxiliar;
		pilahelado* pilaNuevo;

		pilaSave* pilaC = NULL;
		pilaSave* pilaA;
		pilaSave* pilaN;
#pragma endregion
		private: System::Void Agregar_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
			pilaAuxiliar = pilaCabecera;

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

			FILE* archivo;
			archivo = fopen("pedido.txt", "w");

			while (pilaA != NULL)
			{
				fwrite(pilaA, sizeof(pilaSave), 1, archivo);
				pilaA = pilaA->sgt;
			}
			fclose(archivo);
			otherform->Enabled = true;
			otherform->Focus();
		}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		}
	
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "" ||
			textBox2->Text == "" ||
			textBox3->Text == "" ||
			textBox4->Text == "" ||
			textBox5->Text == "" ||
			textBox6->Text == "")
		{
			MessageBox::Show("Ingrese la información", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
			//Retornamos (salimos) del método para evitar que continúe con el ingreso de información
		}

		//Si la condición no se cumple, se procede a ingresar la información (o sea, existen datos en los textos)
		guardarhelado();
	}

		   void guardarhelado()
		   {
			   String^ banana = textBox1->Text;
			   String^ cono = textBox2->Text;
			   String^ paleta = textBox3->Text;
			   String^ sundae = textBox4->Text;
			   String^ frito = textBox5->Text;
			   String^ smothie = textBox6->Text;

			   pilaNuevo = new pilahelado();
			   pilaNuevo->banana = msclr::interop::marshal_as<string>(banana);
			   pilaNuevo->cono = msclr::interop::marshal_as<string>(cono);
			   pilaNuevo->paleta = msclr::interop::marshal_as<string>(paleta);
			   pilaNuevo->sundae = msclr::interop::marshal_as<string>(sundae);
			   pilaNuevo->frito = msclr::interop::marshal_as<string>(frito);
			   pilaNuevo->smothie = msclr::interop::marshal_as<string>(smothie);

			   pilaNuevo->sgt = pilaCabecera;
			   pilaCabecera = pilaNuevo;

			   textBox1->Text = ""; textBox2->Text = ""; textBox3->Text = ""; textBox4->Text = ""; textBox5->Text = ""; textBox6->Text = "";
			   MessageBox::Show("REGISTRO GUARDADO CORRECTAMENTE", "INFORMACIÓN", MessageBoxButtons::OK, MessageBoxIcon::Information);
			   textBox1->Focus();
	}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	this ->Close();
}
private: System::Void Agregar_Load(System::Object^ sender, System::EventArgs^ e) {
	FILE* archivo;
	archivo = fopen("pedido.txt", "rb");
	pilaCabecera = NULL;

	if (archivo == NULL)
	{
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
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
