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
	/// Resumen de MyForm8
	/// </summary>
	public ref class MyForm8 : public System::Windows::Forms::Form
	{
	public:
		MyForm8(void)
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
		~MyForm8()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ comboBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;

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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(246, 350);
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
			this->button1->Location = System::Drawing::Point(102, 447);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(447, 54);
			this->button1->TabIndex = 52;
			this->button1->Text = L"Registrar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm8::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(125, 336);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(85, 38);
			this->label3->TabIndex = 55;
			this->label3->Text = L"Nivel";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(44, 198);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(169, 38);
			this->label2->TabIndex = 54;
			this->label2->Text = L"Descripcion";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(85, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(125, 38);
			this->label1->TabIndex = 53;
			this->label1->Text = L"Nombre";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(246, 55);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(314, 44);
			this->textBox1->TabIndex = 61;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(246, 198);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(314, 44);
			this->textBox2->TabIndex = 62;
			// 
			// MyForm8
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(646, 558);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm8";
			this->Text = L"MyForm8";
			this->Load += gcnew System::EventHandler(this, &MyForm8::MyForm8_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: void Carga_ComboBox_Nivel() {
			String^ connStr = "server=localhost;user id=root;password=;database=Colegio";
			MySqlConnection^ conn = gcnew MySqlConnection(connStr);

			try {
				conn->Open();
				MySqlCommand^ cmd = gcnew MySqlCommand("SELECT nombre FROM Nivel", conn);
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



	private: void RegistroCurso() {
		String^ connStr = "server=localhost;user id=root;password=;database=Colegio";
		MySqlConnection^ conn = gcnew MySqlConnection(connStr);

		try {
			conn->Open();

			String^ nombre = textBox1->Text;
			String^ descripcion = textBox2->Text;
			String^ nivelSeleccionado = comboBox1->SelectedItem->ToString();

			int id_nivel;
			MySqlCommand^ cmdNivel = gcnew MySqlCommand("SELECT idNivel FROM Nivel WHERE nombre = @nombre", conn);
			cmdNivel->Parameters->AddWithValue("@nombre", nivelSeleccionado);
			id_nivel = Convert::ToInt32(cmdNivel->ExecuteScalar());

		
			String^ query = "INSERT INTO Curso (nombre, descripcion, idNivel) " +
				"VALUES (@nombre, @descripcion, @idNivel)";

			MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
			cmd->Parameters->AddWithValue("@nombre", nombre);
			cmd->Parameters->AddWithValue("@descripcion", descripcion);
			cmd->Parameters->AddWithValue("@idNivel", id_nivel);

			cmd->ExecuteNonQuery();

			textBox1->Text = "";
			textBox2->Text = "";
			comboBox1->SelectedIndex = -1;

			MessageBox::Show("Curso registrado exitosamente");
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		finally {
			conn->Close();
		}
	}


	private: System::Void MyForm8_Load(System::Object^ sender, System::EventArgs^ e) {
		Carga_ComboBox_Nivel();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	RegistroCurso();
}
};
}
