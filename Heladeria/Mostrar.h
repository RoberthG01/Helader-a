#pragma once
#include "Agregar.h"

namespace Heladeria {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Mostrar
	/// </summary>
	public ref class Mostrar : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::Form^ otherform;
	public:
		Mostrar(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		Mostrar(System::Windows::Forms::Form^ o)
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
		~Mostrar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Bananasplit;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ cono;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Paletas;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Sundae;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Frito;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Smothie;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Mostrar::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Bananasplit = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cono = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Paletas = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Sundae = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Frito = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Smothie = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Bananasplit,
					this->cono, this->Paletas, this->Sundae, this->Frito, this->Smothie
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(646, 242);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Mostrar::dataGridView1_CellContentClick);
			// 
			// Bananasplit
			// 
			this->Bananasplit->HeaderText = L"Banana Split";
			this->Bananasplit->Name = L"Bananasplit";
			// 
			// cono
			// 
			this->cono->HeaderText = L"Helados de Cono";
			this->cono->Name = L"cono";
			// 
			// Paletas
			// 
			this->Paletas->HeaderText = L"Helados de Paleta";
			this->Paletas->Name = L"Paletas";
			// 
			// Sundae
			// 
			this->Sundae->HeaderText = L"Sundae";
			this->Sundae->Name = L"Sundae";
			// 
			// Frito
			// 
			this->Frito->HeaderText = L"Helado Frito";
			this->Frito->Name = L"Frito";
			// 
			// Smothie
			// 
			this->Smothie->HeaderText = L"Smothie";
			this->Smothie->Name = L"Smothie";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(295, 276);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(81, 68);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Mostrar::pictureBox1_Click);
			// 
			// Mostrar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(726, 356);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"Mostrar";
			this->Text = L"Mostrar";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Mostrar::Mostrar_FormClosed);
			this->Load += gcnew System::EventHandler(this, &Mostrar::Mostrar_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
		pilahelado* pilaCabecera = NULL;
		pilahelado* pilaAuxiliar;
		pilahelado* pilaNuevo;
#pragma endregion
	private: System::Void Mostrar_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		otherform->Enabled = true;
		otherform->Focus();
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void Mostrar_Load(System::Object^ sender, System::EventArgs^ e) {
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

		pilaAuxiliar = pilaCabecera;
		dataGridView1->Rows->Clear();

		while (pilaAuxiliar != NULL)
		{
			try
			{
				String^ banana;
				String^ cono;
				String^ paleta;
				String^ sundae;
				String^ frito;
				String^ smothie;
				banana = gcnew String(pilaAuxiliar->banana.c_str());
				cono = gcnew String(pilaAuxiliar->cono.c_str());
				paleta = gcnew String(pilaAuxiliar->paleta.c_str());
				sundae = gcnew String(pilaAuxiliar->sundae.c_str());
				frito = gcnew String(pilaAuxiliar->frito.c_str());
				smothie = gcnew String(pilaAuxiliar->smothie.c_str());
				dataGridView1->Rows->Add(banana, cono, paleta, sundae, frito, smothie);

				pilaAuxiliar = pilaAuxiliar->sgt;
			}
			catch (exception ex)
			{
				break;
			}
		}

	}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}