#pragma once

namespace StudentForm {

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
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown5;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown4;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown3;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::CheckBox^  checkBox4;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::HelpProvider^  helpProvider1;
	private: System::Windows::Forms::ToolTip^  toolTip1;
	private: System::Windows::Forms::ErrorProvider^  errorProvider1;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// ����������������
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����֧������ķ��� - ��Ҫ
		/// ʹ�ô���༭���޸Ĵ˷��������ݡ�
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->helpProvider1 = (gcnew System::Windows::Forms::HelpProvider());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(40, 16);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 21);
			this->textBox1->TabIndex = 0;
			this->textBox1->Validated += gcnew System::EventHandler(this, &Form1::On_Validated);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(208, 16);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 21);
			this->textBox2->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Pink;
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(8, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(31, 12);
			this->label1->TabIndex = 2;
			this->label1->Text = L"����";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::LightPink;
			this->label2->Font = (gcnew System::Drawing::Font(L"����", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(176, 24);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(31, 12);
			this->label2->TabIndex = 3;
			this->label2->Text = L"ѧ��";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Pink;
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"����", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->Location = System::Drawing::Point(24, 64);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(96, 88);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"�Ա�";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(16, 64);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(36, 16);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Ů";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(16, 24);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(36, 16);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"��";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::Pink;
			this->groupBox2->Controls->Add(this->radioButton4);
			this->groupBox2->Controls->Add(this->radioButton3);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"����", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox2->Location = System::Drawing::Point(168, 64);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(112, 80);
			this->groupBox2->TabIndex = 5;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"��Դ";
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(8, 56);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(49, 16);
			this->radioButton4->TabIndex = 2;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"����";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(8, 24);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(49, 16);
			this->radioButton3->TabIndex = 1;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"����";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton3_CheckedChanged);
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->BeepOnError = true;
			this->maskedTextBox1->Location = System::Drawing::Point(72, 160);
			this->maskedTextBox1->Mask = L"0000��90��90��";
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(88, 21);
			this->maskedTextBox1->TabIndex = 3;
			this->maskedTextBox1->Text = L"19940101";
			this->maskedTextBox1->ValidatingType = System::DateTime::typeid;
			this->maskedTextBox1->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &Form1::maskedTextBox1_MaskInputRejected);
			this->maskedTextBox1->TextChanged += gcnew System::EventHandler(this, &Form1::On_Change);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::LightPink;
			this->label3->Font = (gcnew System::Drawing::Font(L"����", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(8, 168);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 12);
			this->label3->TabIndex = 6;
			this->label3->Text = L"��������";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::LightPink;
			this->label4->Font = (gcnew System::Drawing::Font(L"����", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(184, 168);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(44, 12);
			this->label4->TabIndex = 7;
			this->label4->Text = L"������";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Enabled = false;
			this->numericUpDown1->Location = System::Drawing::Point(232, 160);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(64, 21);
			this->numericUpDown1->TabIndex = 8;
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::Pink;
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->numericUpDown5);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->numericUpDown4);
			this->groupBox3->Controls->Add(this->numericUpDown3);
			this->groupBox3->Controls->Add(this->numericUpDown2);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"����", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox3->Location = System::Drawing::Point(32, 200);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(392, 72);
			this->groupBox3->TabIndex = 9;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"��ѧ�ɼ�";
			this->groupBox3->Enter += gcnew System::EventHandler(this, &Form1::groupBox3_Enter);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"����", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->Location = System::Drawing::Point(296, 32);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(31, 12);
			this->label8->TabIndex = 11;
			this->label8->Text = L"�ܷ�";
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Enabled = false;
			this->numericUpDown5->Location = System::Drawing::Point(328, 24);
			this->numericUpDown5->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 300, 0, 0, 0 });
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(40, 21);
			this->numericUpDown5->TabIndex = 10;
			this->numericUpDown5->ValueChanged += gcnew System::EventHandler(this, &Form1::On_Numer);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"����", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->Location = System::Drawing::Point(200, 32);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(31, 12);
			this->label7->TabIndex = 9;
			this->label7->Text = L"����";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"����", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(104, 32);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(31, 12);
			this->label6->TabIndex = 8;
			this->label6->Text = L"��ѧ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"����", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(8, 32);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(31, 12);
			this->label5->TabIndex = 7;
			this->label5->Text = L"����";
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(232, 24);
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(40, 21);
			this->numericUpDown4->TabIndex = 2;
			this->numericUpDown4->ValueChanged += gcnew System::EventHandler(this, &Form1::On_Numer);
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(136, 24);
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(40, 21);
			this->numericUpDown3->TabIndex = 1;
			this->numericUpDown3->ValueChanged += gcnew System::EventHandler(this, &Form1::On_Numer);
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(40, 24);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(40, 21);
			this->numericUpDown2->TabIndex = 0;
			this->numericUpDown2->ValueChanged += gcnew System::EventHandler(this, &Form1::On_Numer);
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::Color::Pink;
			this->groupBox4->Controls->Add(this->checkBox4);
			this->groupBox4->Controls->Add(this->checkBox3);
			this->groupBox4->Controls->Add(this->checkBox2);
			this->groupBox4->Controls->Add(this->checkBox1);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"����", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox4->Location = System::Drawing::Point(32, 280);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(312, 48);
			this->groupBox4->TabIndex = 12;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"��Ȥ����";
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(248, 24);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(50, 16);
			this->checkBox4->TabIndex = 3;
			this->checkBox4->Text = L"����";
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox4_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(168, 24);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(50, 16);
			this->checkBox3->TabIndex = 2;
			this->checkBox3->Text = L"����";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(88, 24);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(50, 16);
			this->checkBox2->TabIndex = 1;
			this->checkBox2->Text = L"����";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(8, 24);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(50, 16);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->Text = L"����";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->textBox3);
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"����", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox5->Location = System::Drawing::Point(32, 336);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(200, 100);
			this->groupBox5->TabIndex = 13;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"�����";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::Pink;
			this->helpProvider1->SetHelpKeyword(this->textBox3, L"f1");
			this->helpProvider1->SetHelpString(this->textBox3, L"f1");
			this->textBox3->Location = System::Drawing::Point(8, 16);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->helpProvider1->SetShowHelp(this->textBox3, true);
			this->textBox3->Size = System::Drawing::Size(184, 80);
			this->textBox3->TabIndex = 0;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Form1::On_Textchanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(328, 16);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(144, 176);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(272, 360);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(40, 21);
			this->textBox4->TabIndex = 14;
			// 
			// textBox5
			// 
			this->textBox5->Enabled = false;
			this->textBox5->Location = System::Drawing::Point(272, 400);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(40, 21);
			this->textBox5->TabIndex = 15;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::LightPink;
			this->label9->Font = (gcnew System::Drawing::Font(L"����", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label9->Location = System::Drawing::Point(240, 368);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(31, 12);
			this->label9->TabIndex = 16;
			this->label9->Text = L"����";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::LightPink;
			this->label10->Font = (gcnew System::Drawing::Font(L"����", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label10->Location = System::Drawing::Point(240, 408);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(31, 12);
			this->label10->TabIndex = 17;
			this->label10->Text = L"����";
			this->label10->Click += gcnew System::EventHandler(this, &Form1::label10_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightPink;
			this->button1->Font = (gcnew System::Drawing::Font(L"����", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(376, 344);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(72, 32);
			this->button1->TabIndex = 18;
			this->button1->Text = L"ȷ��";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LightPink;
			this->button2->Font = (gcnew System::Drawing::Font(L"����", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->Location = System::Drawing::Point(376, 400);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(72, 32);
			this->button2->TabIndex = 19;
			this->button2->Text = L"ȡ��";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(491, 442);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->maskedTextBox1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Form1";
			this->Text = L"ѧ���������";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
//MaskinputRejected�¼��������������ʽ����ʱ��������ʾ�������ʽ���󡱵Ĺ�����ʾ��Ϣ��	
private: System::Void maskedTextBox1_MaskInputRejected(System::Object^  sender, System::Windows::Forms::MaskInputRejectedEventArgs^  e) {
	this->toolTip1->ToolTipTitle = "�����ʽ����";
	toolTip1->Show("��������ֻ����(0-9)������", maskedTextBox1, maskedTextBox1->Location, 5000);
}

private: System::Void groupBox3_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {
}
	/*
		 Form1& operater +(System::Decimal d1, System::Decimal d2)
		 {
		 
		 }
		 */
		 //����Form Load�¼��Ľ������
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
	//��ʼ��Ĭ��ֵ
	this->radioButton2->Checked = true;//Ĭ�Ϲ�ѡradioButton2��Ĭ��ΪŮ��
	this->radioButton3->Checked = true;//Ĭ�Ϲ�ѡradioButton3��Ĭ��Ϊ����
	this->checkBox1->Checked = true;//Ĭ�Ϲ�ѡcheckBox1��Ĭ��Ϊ��Ȥ����Ϊ����

	this->helpProvider1->SetShowHelp(this->textBox1,true);
	//���õ����¡�F1��ʱtextBox1��ʾ����ʾ���
	this->helpProvider1->SetHelpString(this->textBox1,"�ڴ�����ѧ������");
	this->toolTip1->SetToolTip(this->textBox1,"�ڴ��ı���������ѧ������");

	//str1��ʾ���ڵ�ʱ��ת��Ϊ���ַ���
	String^str1 = DateTime::Now.Year.ToString("");
	//str2��ʾmaskedTextBox1��ʱ��ת��Ϊ���ַ���
	String ^str2 = maskedTextBox1->Text->ToString()->Substring(0, 4);
	//Trim()����ȥ���ַ���ͷβ�ո�
	if (str2->Trim()->Length>=4)
	{
		//��ȡnumericUpDown1���������ֵ
		this->numericUpDown1->Value = Convert::ToInt16(str1) - Convert::ToInt16(str2);
		//ToInt16:��ʾ16λ�з��ŵ��������������ֽڻ��洢��
		//��ȡ�ܷ�
		 this->numericUpDown5->Value = (int)this->numericUpDown2->Value +(int)this->numericUpDown3->Value  +(int)this->numericUpDown4->Value;
	}
}
		 //TextBox1 �¼�Validated������,û��������Ϣʱ����������ʾ
private: System::Void On_Validated(System::Object^  sender, System::EventArgs^  e) {
	if (this->textBox1->Text->Length < 1)
		this->errorProvider1->SetError(this->textBox1, "ѧ����������Ϊ�գ�Ҫ��������!");
	else
		this->errorProvider1->SetError(this->textBox1, "");
}

		 //MaskedTextBox�ؼ�TextChange�¼�������
private: System::Void On_Change(System::Object^  sender, System::EventArgs^  e) {
	String^ str1 = DateTime::Now.Year.ToString("");
	String^ str2 = maskedTextBox1->Text->ToString()->Substring(0, 4);
	if (str2->Trim()->Length >= 4)
		this->numericUpDown1->Value = Convert::ToInt16(str1) - Convert::ToInt16(str2);
}
		 //����\��ѧ\Ӣ��\�ܷ� ������ťValueChange�¼�������
private: System::Void On_Numer(System::Object^  sender, System::EventArgs^  e) {
	this->numericUpDown5->Value = (int)this->numericUpDown2->Value
		+ (int)this->numericUpDown3->Value + (int)this->numericUpDown4->Value;
}
		 
		 //�����ı�������ı����ı��ı��TextChanged�¼�������On_Textchanged,�ı����ݸı�ʱ��ȡ�ı���������������������ֵ������ʾ
private: System::Void On_Textchanged(System::Object^  sender, System::EventArgs^  e) {
	int strNum = 0;
	int lineNum = textBox3->Lines->Length;
	array<String ^>^ tempArray = gcnew array<String ^>(lineNum);
	tempArray = this->textBox3->Lines;
	for (int i = 0; i < lineNum; i++)
		strNum += tempArray[i]->Length;
	this->textBox4->Text = lineNum.ToString();
	this->textBox5->Text = strNum.ToString();
}
		 //Ϊ��ȡ������ť����¼�������
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}

 //Ϊ��ȷ������ť��ӵ����¼�������
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	//�����ַ���str�洢ѧ����Ϣ��
	//���ַ���str��ʼ��Ϊ��ѧ����������������\n��
	String^ str = L"ѧ��������" + this->textBox1->Text + L"\n";
	//ͨ��String��ľ�̬����Concat�����ַ���str�롰ѧ��ѧ�ţ�����ѧ��\n���ַ���
	str = String::Concat(str, L"ѧ��ѧ�ţ�", this->textBox2->Text, L"\n");
	//ͨ��String��ľ�̬����Concat�����ַ���str�롰�Ա���:���ַ���
	str = String::Concat(str, L"�Ա��ǣ�");
	// ��ȡ�Ա��ѡ��
	//����һ��forѭ��ѭ������С��ѡ��ĸ���
	for (int i = 0; i < this->groupBox1->Controls->Count; i++)
	{
		//��������������ѡ��ľ������
		RadioButton^ btn = safe_cast<RadioButton^>(groupBox1->Controls[i]);
		//�жϸþ�������Ƿ�ѡ�У�ѡ�к�����Concat��������str����ѡ����ı�������ѭ��
		if (btn->Checked) {
			str = String::Concat(str, btn->Text, L"\n");
			break;
		}
	}
	//ͨ��String��ľ�̬����Concat�����ַ���str�롰��Դ��:���ַ���
	str = String::Concat(str, L"��Դ�ǣ�");
	// ��ȡ��Դ��ѡ��
	//��foreachѭ��������Դѡ������������һ�����Դﵽforѭ����Ч��
	array<RadioButton^>^ btn2s = gcnew array<RadioButton^>{
		radioButton3, radioButton4	};
	for each (RadioButton^ btn in btn2s)
	{
		//�жϸþ�������Ƿ�ѡ�У�ѡ�к�����Concat��������str����ѡ����ı�������ѭ��
		if (btn->Checked) {
			str = String::Concat(str, btn->Text, L"\n");
			break;
		}
	}
	//��Concat���������ַ���str�͡������䣺��������\n���ַ���
	str = String::Concat(str, L"�����䣺", this->numericUpDown1->Value, L"\n");
	//��Concat���������ַ���str�͡���ѧ�ܷ�Ϊ���������\n���ַ���
	str = String::Concat(str, L"��ѧ�ܷ�Ϊ��", this->numericUpDown5->Value, L"\n");
	//��Concat���������ַ���str�͡���Ȥ������Ҫ�ǣ�\n���ַ���
	str = String::Concat(str, L"��Ȥ������Ҫ�ǣ�\n");
	// ��ȡ��Ȥ���õ�ѡ��
	for (int i = 0; i < this->groupBox4->Controls->Count; i++)
	{
		//����forѭ����������������ѡ��ľ������
		CheckBox^ check = safe_cast<CheckBox^>(groupBox4->Controls[i]);
		//�жϸþ�������Ƿ�ѡ�У�ѡ�к�����Concat��������str����ѡ����ı�������ѭ��
		if (check->Checked) {
			str = String::Concat(str, L"\t", check->Text, L"\n");
		}
	}
	//��Concat���������ַ���str�͡������Ϊ�������ı�\n���ַ���
	str = String::Concat(str, L"�����Ϊ��\n", this->textBox3->Text, L"\n");
	// �������ʾ
	MessageBox::Show(str, L"ѧ���Ļ������");
}
private: System::Void checkBox4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}

