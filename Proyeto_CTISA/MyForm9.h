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
	/// Resumen de MyForm9
	/// </summary>
	public ref class MyForm9 : public System::Windows::Forms::Form
	{
	public:
		MyForm9(void)
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
		~MyForm9()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ comboBox2;
	protected:
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;

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
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(291, 178);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(314, 24);
			this->comboBox2->TabIndex = 58;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(291, 69);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(314, 24);
			this->comboBox1->TabIndex = 57;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Gray;
			this->button1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(140, 516);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(447, 54);
			this->button1->TabIndex = 52;
			this->button1->Text = L"Registrar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm9::button1_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(291, 409);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(314, 22);
			this->dateTimePicker1->TabIndex = 56;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(133, 397);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(92, 38);
			this->label3->TabIndex = 55;
			this->label3->Text = L"Fecha";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(133, 164);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(103, 38);
			this->label2->TabIndex = 54;
			this->label2->Text = L"Cursos";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(114, 55);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(122, 38);
			this->label1->TabIndex = 53;
			this->label1->Text = L"Alumno";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(291, 303);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(314, 22);
			this->textBox1->TabIndex = 59;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(69, 289);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(167, 38);
			this->label4->TabIndex = 60;
			this->label4->Text = L"Calificacion";
			// 
			// MyForm9
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(722, 663);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm9";
			this->Text = L"MyForm9";
			this->Load += gcnew System::EventHandler(this, &MyForm9::MyForm9_Load);
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
			MessageBox::Show("Error al cargar alumnos: " + ex->Message);
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
		MessageBox::Show("Error al cargar cursos: " + ex->Message);
	}
	finally {
		conn->Close();
	}
}

private: void RegistroCalificacion() {
	String^ connStr = "server=localhost;user id=root;password=;database=Colegio";
	MySqlConnection^ conn = gcnew MySqlConnection(connStr);

	try {
		conn->Open();

		// Obtenemos el nombre del alumno y curso seleccionados
		String^ alumnoSeleccionado = comboBox1->SelectedItem->ToString();
		String^ cursoSeleccionado = comboBox2->SelectedItem->ToString();
		int calificacion = Convert::ToInt16(textBox1->Text);
		String^ fechaCalificacion = dateTimePicker1->Value.ToString("yyyy-MM-dd");

		int id_alumno;
		MySqlCommand^ cmdAlumno = gcnew MySqlCommand("SELECT idAlumno FROM Alumno WHERE nombre = @nombre", conn);
		cmdAlumno->Parameters->AddWithValue("@nombre", alumnoSeleccionado);

		// Manejo de excepciones al obtener el idAlumno
		try {
			id_alumno = Convert::ToInt32(cmdAlumno->ExecuteScalar());
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error al obtener idAlumno: " + ex->Message);
			return; // Salir del método si ocurre un error
		}

		int id_curso;
		MySqlCommand^ cmdCurso = gcnew MySqlCommand("SELECT idCurso FROM Curso WHERE nombre = @nombre", conn);
		cmdCurso->Parameters->AddWithValue("@nombre", cursoSeleccionado);

		// Manejo de excepciones al obtener el idCurso
		try {
			id_curso = Convert::ToInt32(cmdCurso->ExecuteScalar());
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error al obtener idCurso: " + ex->Message);
			return; // Salir del método si ocurre un error
		}

		// Consulta de inserción
		String^ query = "INSERT INTO Calificaciones (idAlumno, idCurso, calificacion, fecha) " +
			"VALUES (@idAlumno, @idCurso, @calificacion, @fecha)";

		MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
		cmd->Parameters->AddWithValue("@idAlumno", id_alumno);
		cmd->Parameters->AddWithValue("@idCurso", id_curso);
		cmd->Parameters->AddWithValue("@calificacion", calificacion);
		cmd->Parameters->AddWithValue("@fecha", fechaCalificacion);

		cmd->ExecuteNonQuery();

		// Limpiar campos después de registrar la calificación
		comboBox1->SelectedIndex = -1;
		comboBox2->SelectedIndex = -1;
		textBox1->Text = "";
		dateTimePicker1->Value = DateTime::Now;

		MessageBox::Show("Calificación registrada exitosamente");
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error al registrar la calificación: " + ex->Message);
	}
	finally {
		conn->Close();
	}
}


private: System::Void MyForm9_Load(System::Object^ sender, System::EventArgs^ e) {
	CargaAlumno_ComboBox();
	CargaCurso_ComboBox();
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	RegistroCalificacion();
}

};
}
