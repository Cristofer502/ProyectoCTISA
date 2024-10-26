#pragma once


#include "MyForm6.h"

namespace Proyetochito {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Resumen de MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::MidnightBlue;
			this->panel1->Controls->Add(this->linkLabel1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(-15, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1635, 68);
			this->panel1->TabIndex = 0;
			// 
			// linkLabel1
			// 
			this->linkLabel1->ActiveLinkColor = System::Drawing::Color::White;
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->LinkColor = System::Drawing::Color::White;
			this->linkLabel1->Location = System::Drawing::Point(1284, 9);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(156, 45);
			this->linkLabel1->TabIndex = 1;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Regresar";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm2::linkLabel1_LinkClicked);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(617, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(142, 45);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Alumno";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(375, 296);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(746, 234);
			this->dataGridView1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(375, 567);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(171, 67);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Eliminar";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(950, 567);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(171, 67);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Registrar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1548, 824);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm2";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
// bace de datos

		private: void CargarAlumnos() {
			String^ connStr = "server=127.0.0.1;user=root;password=;database=Colegio;";
			MySqlConnection^ conn = gcnew MySqlConnection(connStr);

			try {
				conn->Open();
				MySqlCommand^ cmd = gcnew MySqlCommand(
					"SELECT idAlumno AS ID, nombre AS Nombre, apellido AS Apellido, "
					"fechaNacimiento AS FechaNacimiento, email AS Email "
					"FROM Alumno", conn
				);

				MySqlDataReader^ reader = cmd->ExecuteReader();
				dataGridView1->Rows->Clear();
				dataGridView1->Columns->Clear();

				dataGridView1->Columns->Add("ID_ALUMNO", "ID Alumno");
				dataGridView1->Columns->Add("NOMBRE", "Nombre");
				dataGridView1->Columns->Add("APELLIDO", "Apellido");
				dataGridView1->Columns->Add("FECHA_NACIMIENTO", "Fecha de Nacimiento");
				dataGridView1->Columns->Add("EMAIL", "Email");

				while (reader->Read()) {
					int id_alumno = reader->GetInt32("ID");
					String^ nombre = reader->GetString("Nombre");
					String^ apellido = reader->GetString("Apellido");
					DateTime fecha_nacimiento = reader->GetDateTime("FechaNacimiento");
					String^ fechaNacimientoStr = fecha_nacimiento.ToString("yyyy-MM-dd");
					String^ email = reader->GetString("Email");
					dataGridView1->Rows->Add(id_alumno, nombre, apellido, fechaNacimientoStr, email);
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


// bace de datos

	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		Close();
	}
	private: System::Void MyForm2_Load(System::Object^ sender, System::EventArgs^ e) {
		CargarAlumnos();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm6^ form = gcnew MyForm6();
	form->ShowDialog();
}
};
}
