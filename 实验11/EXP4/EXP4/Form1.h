#pragma once

namespace EXP4 {
	using namespace System::IO;
	using namespace System::Text;
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
	private: System::Windows::Forms::Label^  label1;
	protected:


	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;


	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::ListBox^  listBox3;
	private: System::Windows::Forms::ListBox^  listBox4;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(8, 8);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 23);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ƫ����";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"����", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(136, 8);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 23);
			this->label2->TabIndex = 2;
			this->label2->Text = L"ʮ����������";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"����", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(456, 8);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 23);
			this->label3->TabIndex = 4;
			this->label3->Text = L"ASCII����";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"����", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(8, 288);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(100, 23);
			this->label4->TabIndex = 6;
			this->label4->Text = L"ƫ����";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"����", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(32, 440);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(100, 23);
			this->label5->TabIndex = 8;
			this->label5->Text = L"ƫ�Ƶ�ַ";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::PeachPuff;
			this->textBox1->Location = System::Drawing::Point(104, 440);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(144, 21);
			this->textBox1->TabIndex = 9;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::PeachPuff;
			this->textBox2->Location = System::Drawing::Point(400, 440);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(144, 21);
			this->textBox2->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"����", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(312, 440);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(120, 23);
			this->label6->TabIndex = 10;
			this->label6->Text = L"ʮ������ֵ";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::MistyRose;
			this->button1->Font = (gcnew System::Drawing::Font(L"����", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(592, 40);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(88, 32);
			this->button1->TabIndex = 12;
			this->button1->Text = L"���ļ�";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::MistyRose;
			this->button2->Enabled = false;
			this->button2->Font = (gcnew System::Drawing::Font(L"����", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->Location = System::Drawing::Point(592, 96);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(88, 32);
			this->button2->TabIndex = 13;
			this->button2->Text = L"�����ļ�";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::MistyRose;
			this->button3->Enabled = false;
			this->button3->Font = (gcnew System::Drawing::Font(L"����", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->Location = System::Drawing::Point(592, 256);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(88, 32);
			this->button3->TabIndex = 14;
			this->button3->Text = L"��������";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::MistyRose;
			this->button4->Enabled = false;
			this->button4->Font = (gcnew System::Drawing::Font(L"����", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button4->Location = System::Drawing::Point(592, 432);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(88, 32);
			this->button4->TabIndex = 15;
			this->button4->Text = L"�޸�����";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::SystemColors::Info;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 12;
			this->listBox1->Location = System::Drawing::Point(8, 32);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(112, 244);
			this->listBox1->TabIndex = 16;
			// 
			// listBox2
			// 
			this->listBox2->BackColor = System::Drawing::SystemColors::Info;
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 12;
			this->listBox2->Location = System::Drawing::Point(136, 32);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(304, 244);
			this->listBox2->TabIndex = 17;
			// 
			// listBox3
			// 
			this->listBox3->BackColor = System::Drawing::SystemColors::Info;
			this->listBox3->FormattingEnabled = true;
			this->listBox3->ItemHeight = 12;
			this->listBox3->Location = System::Drawing::Point(456, 32);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(120, 244);
			this->listBox3->TabIndex = 18;
			// 
			// listBox4
			// 
			this->listBox4->BackColor = System::Drawing::SystemColors::Info;
			this->listBox4->FormattingEnabled = true;
			this->listBox4->HorizontalScrollbar = true;
			this->listBox4->ItemHeight = 12;
			this->listBox4->Location = System::Drawing::Point(8, 312);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(568, 100);
			this->listBox4->TabIndex = 19;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(701, 488);
			this->Controls->Add(this->listBox4);
			this->Controls->Add(this->listBox3);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"�ޱ���-�����Ʊ༭��";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
	}
			  private: array<unsigned char>^ buffer;
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	OpenFileDialog^ dlg = gcnew OpenFileDialog();      // ���ļ��Ի���

	dlg->FileName = L"*.*";                // ȱʡ�ļ���

	dlg->Filter = L"�����ļ�(*.*)|*.*";        // �ļ������ַ���

	if (dlg->ShowDialog() != System::Windows::Forms::DialogResult::OK)

		return;                              // δѡ���ļ�,�˳�

	try {

		FileInfo^   fileInfo = gcnew FileInfo(dlg->FileName);

		FileStream^   stream = fileInfo->Open(FileMode::Open, FileAccess::Read);

		BinaryReader^ reader = gcnew BinaryReader(stream);

		this->Text = fileInfo->Name + L" - �����Ʊ༭��"; // �򿪵��ļ�

		this->buffer = reader->ReadBytes((int)fileInfo->Length);//��ȡ�ֽ�����

		reader->Close();                  // �ر�BinaryReader

		stream->Close();                 // �ر�FileStream

		button3_Click(sender, e);   // �������ݵĴ�����, ע�⣡

		this->button2->Enabled = true;    // ���á������ļ�����ť

		this->button3->Enabled = true;     // ���á��������ݡ���ť

		this->button4->Enabled = true;     // ���á��޸����ݡ���ť

	}

	catch (IOException^ e) {          // ���ļ����ȡ����ʧ��

		this->buffer = nullptr;                        // ��������Ч

		MessageBox::Show(e->ToString());           // ����������ʾ

	}

}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	SaveFileDialog^ dlg = gcnew SaveFileDialog();// �����ļ��Ի���

	dlg->FileName = L"*.*";                // ȱʡ�ļ���

	dlg->Filter = L"�����ļ�(*.*)|*.*";        // �ļ������ַ���

	if (dlg->ShowDialog() != System::Windows::Forms::DialogResult::OK)

		return;                           // δѡ���ļ�,�˳�

	try {

		FileInfo^   fileInfo = gcnew FileInfo(dlg->FileName);

		FileStream^   stream = fileInfo->Open(FileMode::OpenOrCreate, FileAccess::Write);

		BinaryWriter^writer = gcnew BinaryWriter(stream);

		writer->Write(this->buffer, 0, this->buffer->Length); // д������

		writer->Close();

		stream->Close();

	}

	catch (IOException^ e){       // ���ļ����ȡ����ʧ��

		MessageBox::Show(e->ToString()); // ����������ʾ

	}
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->buffer == nullptr) return;

	this->listBox1->Items->Clear();         // ��ա�ƫ�������б��

	this->listBox2->Items->Clear();       // ��ա�ʮ�����ơ��б��

	this->listBox3->Items->Clear();       // ��ա�ASC�롱�б��

	this->listBox4->Items->Clear();        // ��ա������ơ��б��

	String ^hexAddr, ^binData, ^hexData, ^ascData;

	hexAddr = binData = hexData = ascData = String::Empty;     // ���

	for (int i = 0; i < this->buffer->Length; i++) { // ��ȡ�ֽ������е������ֽ�

		hexAddr = i.ToString(L"X6");  // ƫ����,6λ��ʮ�����Ʊ�ʾ

		if (i % 8 == 0)                             // ��ʼƫ����

			this->listBox1->Items->Add(hexAddr);

		if (i && (i % 8 == 0)){                         // ÿ��8�ֽ�

			this->listBox2->Items->Add(hexData);       // ʮ������

			this->listBox3->Items->Add(ascData);       // ASC��

			this->listBox4->Items->Add(binData);       // ������

			hexData = binData = ascData = String::Empty;//��պ��ټ�¼��һ��

		}

		ascData += System::Char(this->buffer[i]);     //ASCII�ַ�

		hexData += this->buffer[i].ToString(L"X2") + L"  "; // 2λ������ʮ������

		binData += Convert::ToString(this->buffer[i], 2)->PadLeft(8, '0') + L" ";

		// ת��Ϊ������, 8λ����

	}
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->buffer == nullptr) return;

	if (this->textBox1->Text == String::Empty) return;        //ƫ������ַ

	if (this->textBox2->Text == String::Empty) return;        //ʮ��������ֵ

	try{

		int address = Convert::ToInt32(this->textBox1->Text, 16);

		unsigned char value = Convert::ToByte(this->textBox2->Text, 16);

		this->buffer[address] = value;                  //�޸�����

		button3_Click(sender, e);                      // ��������

	}

	catch (Exception^ e) {                             // �ַ���ת������

		MessageBox::Show(L"��������ȷ����ֵ!\n\n" + e->ToString());

	}
}
};
}

