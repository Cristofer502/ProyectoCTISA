#pragma once

namespace Proyetochito {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Resumen de MyForm7
	/// </summary>
	public ref class MyForm7 : public System::Windows::Forms::Form
	{
	public:
		MyForm7(void)
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
		~MyForm7()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;

	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox3;

	private: System::Windows::Forms::Label^ label5;


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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Gray;
			this->button1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(130, 532);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(447, 54);
			this->button1->TabIndex = 38;
			this->button1->Text = L"Registrar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm7::button1_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(263, 272);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(314, 22);
			this->dateTimePicker1->TabIndex = 45;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(105, 260);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(92, 38);
			this->label3->TabIndex = 41;
			this->label3->Text = L"Fecha";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(105, 137);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(103, 38);
			this->label2->TabIndex = 40;
			this->label2->Text = L"Cursos";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(86, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(122, 38);
			this->label1->TabIndex = 39;
			this->label1->Text = L"Alumno";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(263, 42);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(314, 24);
			this->comboBox1->TabIndex = 47;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(263, 151);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(314, 24);
			this->comboBox2->TabIndex = 48;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(263, 412);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(314, 24);
			this->comboBox3->TabIndex = 49;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(49, 398);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(148, 38);
			this->label5->TabIndex = 51;
			this->label5->Text = L"Asistencia";
			// 
			// MyForm7
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(748, 697);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm7";
			this->Text = L"MyForm7";
			this->Load += gcnew System::EventHandler(this, &MyForm7::MyForm7_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: void CargaAlumno_ComboBox() {
			String^ connStr = "server=localhost;user id=root;password=;database=Colegio";
			MySqlConnection^ conn = gcnew MySqlConnection(connStr);

			try {
				conn->Open();
				MySqlCommand^ cmd = gcnew MySqlCommand("SELECT nombre FROM Alumno", conn);
				MySqlDataReader^ reader = cmd->ExecuteReader();

				while (reader->Read()) {
					comboBox1->Items->Add(reader->GetString(0));
				}
				reader->Close();
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			}
			finally {
				conn->Close();
			}
		}

private: void CargaCurso_ComboBox() {
	String^ connStr = "server=localhost;user id=root;password=;database=Colegio";
	MySqlConnection^ conn = gcnew MySqlConnection(connStr);

	try {
		conn->Open();
		MySqlCommand^ cmd = gcnew MySqlCommand("SELECT nombre FROM Curso", conn);
		MySqlDataReader^ reader = cmd->ExecuteReader();

		while (reader->Read()) {
			comboBox2->Items->Add(reader->GetString(0));
		}
		reader->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
	finally {
		conn->Close();
	}
}

private: void CargaEstadoAsistencia_ComboBox() {
	String^ connStr = "server=localhost;user id=root;password=;database=Colegio";
	MySqlConnection^ conn = gcnew MySqlConnection(connStr);

	try {
		conn->Open();
		MySqlCommand^ cmd = gcnew MySqlCommand("SELECT estado FROM EstadoAsistencia", conn);
		MySqlDataReader^ reader = cmd->ExecuteReader();

		while (reader->Read()) {
			comboBox3->Items->Add(reader->GetString(0));
		}
		reader->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
	finally {
		conn->Close();
	}


}
	   private: void RegistroAsistencia() {
		   String^ connStr = "server=localhost;user id=root;password=;database=Colegio";
		   MySqlConnection^ conn = gcnew MySqlConnection(connStr);

		   try {
			   conn->Open();

			   String^ alumnoSeleccionado = comboBox1->SelectedItem->ToString();
			   String^ cursoSeleccionado = comboBox2->SelectedItem->ToString();
			   String^ estadoSeleccionado = comboBox3->SelectedItem->ToString();
			   String^ fechaAsistencia = dateTimePicker1->Value.ToString("yyyy-MM-dd");

			   int id_alumno;
			   MySqlCommand^ cmdAlumno = gcnew MySqlCommand("SELECT idAlumno FROM Alumno WHERE nombre = @nombre", conn);
			   cmdAlumno->Parameters->AddWithValue("@nombre", alumnoSeleccionado);
			   id_alumno = Convert::ToInt32(cmdAlumno->ExecuteScalar());

			   int id_curso;
			   MySqlCommand^ cmdCurso = gcnew MySqlCommand("SELECT idCurso FROM Curso WHERE nombre = @nombre", conn);
			   cmdCurso->Parameters->AddWithValue("@nombre", cursoSeleccionado);
			   id_curso = Convert::ToInt32(cmdCurso->ExecuteScalar());

			   int id_estado;
			   MySqlCommand^ cmdEstado = gcnew MySqlCommand("SELECT idEstado FROM EstadoAsistencia WHERE estado = @estado", conn);
			   cmdEstado->Parameters->AddWithValue("@estado", estadoSeleccionado);
			   id_estado = Convert::ToInt32(cmdEstado->ExecuteScalar());

			   String^ query = "INSERT INTO Asistencia (idAlumno, idCurso, fecha, idEstado) " +
				   "VALUES (@id_alumno, @id_curso, @fecha, @id_estado)";

			   MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
			   cmd->Parameters->AddWithValue("@id_alumno", id_alumno);
			   cmd->Parameters->AddWithValue("@id_curso", id_curso);
			   cmd->Parameters->AddWithValue("@fecha", fechaAsistencia);
			   cmd->Parameters->AddWithValue("@id_estado", id_estado);

			   cmd->ExecuteNonQuery();

			   comboBox1->SelectedIndex = -1;
			   comboBox2->SelectedIndex = -1;
			   comboBox3->SelectedIndex = -1;
			   dateTimePicker1->Value = DateTime::Now;

			   MessageBox::Show("Asistencia registrada exitosamente");
		   }
		   catch (Exception^ ex) {
			   MessageBox::Show(ex->Message);
		   }
		   finally {
			   conn->Close();
		   }
	   }


	private: System::Void MyForm7_Load(System::Object^ sender, System::EventArgs^ e) {
		CargaAlumno_ComboBox();
		CargaCurso_ComboBox();
		CargaEstadoAsistencia_ComboBox();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	RegistroAsistencia();
}
};
}
