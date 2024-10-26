#pragma once

#include "MyForm9.h"

namespace Proyetochito {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Resumen de MyForm5
	/// </summary>
	public ref class MyForm5 : public System::Windows::Forms::Form
	{
	public:
		MyForm5(void)
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
		~MyForm5()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(301, 215);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(921, 295);
			this->dataGridView1->TabIndex = 0;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::MidnightBlue;
			this->panel1->Controls->Add(this->linkLabel1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(-2, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1640, 84);
			this->panel1->TabIndex = 3;
			// 
			// linkLabel1
			// 
			this->linkLabel1->ActiveLinkColor = System::Drawing::Color::White;
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->LinkColor = System::Drawing::Color::White;
			this->linkLabel1->Location = System::Drawing::Point(1367, 13);
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
			this->label1->Location = System::Drawing::Point(571, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(231, 45);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Calificaciones";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(301, 552);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(171, 69);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Registrar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm5::button1_Click);
			// 
			// MyForm5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1622, 841);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyForm5";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm5";
			this->Load += gcnew System::EventHandler(this, &MyForm5::MyForm5_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion



	private: void CargarCalificaciones() {
		String^ connStr = "server=127.0.0.1;user=root;password=;database=Colegio;";
		MySqlConnection^ conn = gcnew MySqlConnection(connStr);

		try {
			conn->Open();
			MySqlCommand^ cmd = gcnew MySqlCommand(
				"SELECT c.idCalificacion AS ID, al.nombre AS Alumno, cu.nombre AS Curso, "
				"c.calificacion AS Calificacion, c.fecha AS Fecha "
				"FROM Calificaciones c "
				"JOIN Alumno al ON c.idAlumno = al.idAlumno "
				"JOIN Curso cu ON c.idCurso = cu.idCurso", conn
			);

			MySqlDataReader^ reader = cmd->ExecuteReader();
			dataGridView1->Rows->Clear();
			dataGridView1->Columns->Clear();

			dataGridView1->Columns->Add("ID_CALIFICACION", "ID Calificación");
			dataGridView1->Columns->Add("NOMBRE_ALUMNO", "Alumno");
			dataGridView1->Columns->Add("NOMBRE_CURSO", "Curso");
			dataGridView1->Columns->Add("CALIFICACION", "Calificación");
			dataGridView1->Columns->Add("FECHA", "Fecha");

			while (reader->Read()) {
				int id_calificacion = reader->GetInt32("ID");
				String^ nombre_alumno = reader->GetString("Alumno");
				String^ nombre_curso = reader->GetString("Curso");
				Decimal calificacion = reader->GetDecimal("Calificacion");
				DateTime fecha = reader->GetDateTime("Fecha");
				dataGridView1->Rows->Add(id_calificacion, nombre_alumno, nombre_curso, calificacion, fecha);
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



	private: System::Void MyForm5_Load(System::Object^ sender, System::EventArgs^ e) {
		CargarCalificaciones();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm9^ form = gcnew MyForm9();
		form->ShowDialog();
	}
};
}
