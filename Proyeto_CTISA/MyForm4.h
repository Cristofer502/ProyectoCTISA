#pragma once

#include "MyForm8.h"

namespace Proyetochito {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Resumen de MyForm4
	/// </summary>
	public ref class MyForm4 : public System::Windows::Forms::Form
	{
	public:
		MyForm4(void)
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
		~MyForm4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::MidnightBlue;
			this->panel1->Controls->Add(this->linkLabel1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(3, -4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1635, 84);
			this->panel1->TabIndex = 2;
			// 
			// linkLabel1
			// 
			this->linkLabel1->ActiveLinkColor = System::Drawing::Color::White;
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->LinkColor = System::Drawing::Color::White;
			this->linkLabel1->Location = System::Drawing::Point(1393, 13);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(156, 45);
			this->linkLabel1->TabIndex = 1;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Regresar";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(736, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(109, 45);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Curso";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(332, 211);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(689, 187);
			this->dataGridView1->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(332, 492);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(168, 61);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Registrar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm4::button1_Click);
			// 
			// MyForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1608, 802);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm4";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm4";
			this->Load += gcnew System::EventHandler(this, &MyForm4::MyForm4_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		private: void CargarCursos() {
			String^ connStr = "server=127.0.0.1;user=root;password=;database=Colegio;";
			MySqlConnection^ conn = gcnew MySqlConnection(connStr);

			try {
				conn->Open();
				MySqlCommand^ cmd = gcnew MySqlCommand(
					"SELECT c.idCurso AS ID, c.nombre AS Nombre, c.descripcion AS Descripcion, n.nombre AS Nivel "
					"FROM Curso c "
					"JOIN Nivel n ON c.idNivel = n.idNivel", conn
				);

				MySqlDataReader^ reader = cmd->ExecuteReader();
				dataGridView1->Rows->Clear();
				dataGridView1->Columns->Clear();

				dataGridView1->Columns->Add("ID_CURSO", "ID Curso");
				dataGridView1->Columns->Add("NOMBRE_CURSO", "Nombre");
				dataGridView1->Columns->Add("DESCRIPCION", "Descripción");
				dataGridView1->Columns->Add("NIVEL", "Nivel");

				while (reader->Read()) {
					int id_curso = reader->GetInt32("ID");
					String^ nombre_curso = reader->GetString("Nombre");
					String^ descripcion = reader->GetString("Descripcion");
					String^ nivel = reader->GetString("Nivel");
					dataGridView1->Rows->Add(id_curso, nombre_curso, descripcion, nivel);
				}

				reader->Close();
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error: " + ex->Message);
			}
			finally {
				conn->Close();
			}
		}



	private: System::Void MyForm4_Load(System::Object^ sender, System::EventArgs^ e) {
		CargarCursos();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm8^ form = gcnew MyForm8();
		form->ShowDialog();
	}
};
}
