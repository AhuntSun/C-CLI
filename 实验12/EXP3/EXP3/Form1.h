#pragma once

namespace EXP3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Form1 ժҪ
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Data::OleDb::OleDbCommand^  oleDbSelectCommand1;
	private: System::Data::OleDb::OleDbCommand^  oleDbInsertCommand1;
	private: System::Data::OleDb::OleDbCommand^  oleDbUpdateCommand1;
	private: System::Data::OleDb::OleDbCommand^  oleDbDeleteCommand1;
	private: System::Data::OleDb::OleDbDataAdapter^  oleDbDataAdapter1;

	private:
		/// <summary>
		/// ����������������
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����֧������ķ��� - ��Ҫ
		/// ʹ�ô���༭���޸Ĵ˷��������ݡ�
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->oleDbSelectCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbInsertCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbUpdateCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDeleteCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDataAdapter1 = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button1->Font = (gcnew System::Drawing::Font(L"����", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(24, 24);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 40);
			this->button1->TabIndex = 0;
			this->button1->Text = L"��������";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button2->Font = (gcnew System::Drawing::Font(L"����", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->Location = System::Drawing::Point(168, 24);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(80, 40);
			this->button2->TabIndex = 1;
			this->button2->Text = L"���";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::On_Add);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button3->Font = (gcnew System::Drawing::Font(L"����", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->Location = System::Drawing::Point(280, 24);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(80, 40);
			this->button3->TabIndex = 2;
			this->button3->Text = L"�޸�";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::On_Mod);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button4->Font = (gcnew System::Drawing::Font(L"����", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button4->Location = System::Drawing::Point(392, 24);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(80, 40);
			this->button4->TabIndex = 3;
			this->button4->Text = L"ɾ��";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// listView1
			// 
			this->listView1->GridLines = true;
			this->listView1->Location = System::Drawing::Point(16, 88);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(688, 224);
			this->listView1->TabIndex = 4;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(16, 336);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(688, 40);
			this->textBox1->TabIndex = 5;
			// 
			// oleDbDataAdapter1
			// 
			this->oleDbDataAdapter1->DeleteCommand = this->oleDbDeleteCommand1;
			this->oleDbDataAdapter1->InsertCommand = this->oleDbInsertCommand1;
			this->oleDbDataAdapter1->SelectCommand = this->oleDbSelectCommand1;
			this->oleDbDataAdapter1->UpdateCommand = this->oleDbUpdateCommand1;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(717, 417);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"���ݿ����в���";
			//this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		DataTable^ dataTable;// �������ݵ�DataTable����
		System::Data::OleDb::OleDbDataAdapter^adapter;//DataAdapter����

		private: System::Void display_View() {
			listView1->Items->Clear();
			listView1->Columns->Clear();
			array<int>^ nwidth = gcnew array<int>{8, 16, 8, 8, 6, 6};
			int i = 0;
			//������б���
			for each(DataColumn^ col in dataTable->Columns)
				listView1->Columns->Add(col->ColumnName->ToString(), nwidth[i++] * 8);
			//�������
			for each(DataRow^ row in dataTable->Rows)
			{
				ListViewItem ^item = gcnew ListViewItem(row[0]->ToString());
				for (int i = 1; i < dataTable->Columns->Count; i++)
					item->SubItems->Add(row[i]->ToString());
				listView1->Items->Add(item);
			}
		}



	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		//String^str;
		//try {
		//	String^ strSql = L"SELECT * FROM KCB";
		//	String^ strConn = L"Provider=Microsoft.Jet.OLEDB.4.0;DataSource=F:\\VS2013\\����\\��ĳC++CLI\\ʵ��12\\student.mdb";
		//	str = String::Format(L"> ����DataAdapter����: {0}\r\n", strConn);
		//	adapter = gcnew System::Data::OleDb::OleDbDataAdapter(strSql, strConn);
		//	dataTable = gcnew DataTable();  //�������ݵ�DataTable����
		//	int retrievedRows = adapter->Fill(dataTable);  //ȡ�ò�ѯ������
		//	dataTable->PrimaryKey = gcnew array<DataColumn^>{dataTable->Columns[L"�γ̺�"]};
		//	str += String::Format(L"> �����Ľ��(��{0}����¼):\r\n", retrievedRows);
		//	if (retrievedRows < 1) return;
		//	display_View();
		//}
		//catch (Data::OleDb::OleDbException^ e) {             // �쳣����
		//	str += String::Format(L"> ִ�д���: " + e->ToString());
		//}
		//textBox1->Text = str;

		String^str;
		try {
			String^ strSql = L"SELECT  * FROM KCB";
		//Data Source���м�Ŀո����Ǹ����˰� ������
			String^ strConn = L"Provider=Microsoft.Jet.OLEDB.4.0;Data Source=F:\\VS2013\\����\\��ĳC++CLI\\ʵ��12\\student.mdb";
			str = String::Format(L"> ����DataAdapter����: {0}\r\n", strConn);
			adapter = gcnew System::Data::OleDb::OleDbDataAdapter(strSql, strConn);
			dataTable = gcnew DataTable();  //�������ݵ�DataTable����
			int retrievedRows = adapter->Fill(dataTable);  //ȡ�ò�ѯ������
			dataTable->PrimaryKey = gcnew array<DataColumn^>{dataTable->Columns[L"�γ̺�"]};
			str += String::Format(L"> �����Ľ��(��{0}����¼):\r\n", retrievedRows);
			if (retrievedRows < 1) return;
			display_View();
		}
		catch (Data::OleDb::OleDbException^ e) {             // �쳣����
			str += String::Format(L"> ִ�д���: " + e->ToString());
		}
		textBox1->Text = str;
	}

private: System::Void On_Add(System::Object^  sender, System::EventArgs^  e) {
	String ^str;
	try {
		//����¼�¼
		str = ">����¼�¼\r\n";
		DataRow^ newRow = dataTable->NewRow();       // ������������
		newRow[L"�γ̺�"] = L"303";                   // ���ø��е�����
		newRow[L"�γ�����"] = L"���ݽṹC����";
		newRow[L"����ѧ��"] = 8;
		newRow[L"ѧʱ"] = 50;
		newRow[L"ѧ��"] = 5;
		dataTable->Rows->Add(newRow);                      // ��ӵ�����
		dataTable->Rows->Add(L"304", L"���ݽṹC����", 8, 50, 5);
		dataTable->AcceptChanges();
		adapter->Update(dataTable);                        // ���±�
		//dataTable->Clear();
		//adapter->Fill(dataTable);    // ����ȡ�ò�ѯ�Ľ��
		DataRow^ oldRow = dataTable->Rows->Find(L"303");// ��������ӵ���
		if (oldRow != nullptr) {                   // �Ѿ��ɹ���ӣ���ʾ�ü�¼
			str += String::Format(L">����¼�¼: ");
			str += String::Format(L"{0},", oldRow[L"�γ̺�"]);
			str += String::Format(L"{0},", oldRow[L"�γ�����"]);
			str += String::Format(L"{0}", oldRow[L"ѧ��"]);
			str += String::Format(L"\r\n304, ���ݽṹC����, 8, 50, 5");
		}
	}
	catch (Data::OleDb::OleDbException^ e) {                    //�쳣����
		str += String::Format(L">ִ�д���: " + e->ToString());
	}
	textBox1->Text = str;
	display_View();
}

private: System::Void On_Mod(System::Object^  sender, System::EventArgs^  e) {
	//�޸ļ�¼
	String^str;
	try {
		DataRow^oldRow = dataTable->Rows->Find(L"303"); //��������ӵ���
		if (oldRow != nullptr) {                               //�޸�ԭ��ӵļ�¼
			oldRow[L"�γ�����"] = L"���ݽṹ(C++)";            // �޸ĸü�¼������
			dataTable->AcceptChanges();
			adapter->Update(dataTable);                    // ���¸��±�
		}
		//  dataTable->Clear(), adapter->Fill(dataTable);
		oldRow = dataTable->Rows->Find(L"303");
		if (oldRow != nullptr) {                               //��ʾ�޸ĺ�ļ�¼
			str += String::Format(L">�޸ĺ��¼: ");
			str += String::Format(L"{0},", oldRow[L"�γ̺�"]);
			str += String::Format(L"{0},", oldRow[L"�γ�����"]);
			str += String::Format(L"{0}", oldRow[L"ѧ��"]);
		}
	}
	catch (Data::OleDb::OleDbException^ e) {                       //�쳣����
		str += String::Format(L"> ִ�д���: " + e->ToString());
	}
	textBox1->Text = str;
	display_View();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	//ɾ����¼
	String ^str;
	try {
		DataRow^ oldRow = dataTable->Rows->Find(L"303");// ��������ӵ���
		if (oldRow != nullptr) {                      // ɾ���޸ĺ�ļ�¼
			str = (L"> ɾ���ļ�¼: ");
			str += String::Format(L"{0},", oldRow[L"�γ̺�"]);
			str += String::Format(L"{0},", oldRow[L"�γ�����"]);
			str += String::Format(L"{0}\r\n", oldRow[L"ѧ��"]);
			oldRow->Delete();                                  //���Ϊɾ��
			dataTable->AcceptChanges();
			adapter->Update(dataTable);                    // ���²�����ɾ��
		}
		// dataTable->Clear(), adapter->Fill(dataTable);
		oldRow = dataTable->Rows->Find(L"303");            // �Ƿ���ɾ���ü�¼
		if (oldRow == nullptr) str += String::Format(L">��ɾ����¼.");
		else str += String::Format(L">{0}��¼δɾ��!", oldRow[L"�γ̺�"]);
	}
	catch (Data::OleDb::OleDbException^ e) {              //�쳣����
		str += String::Format(L">ִ�д���: " + e->ToString());
	}
	textBox1->Text = str;
	display_View();
}
};
}

