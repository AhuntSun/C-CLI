#pragma once
#using <System.dll>
#include"cstdlib"
#include"ctime"
namespace project31 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Form1 摘要
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: 在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected:
	private: System::Windows::Forms::NumericUpDown^  numericUpDown3;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown8;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown7;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown6;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown5;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown4;


































	private: System::Windows::Forms::GroupBox^  groupBox4;


	private: System::Windows::Forms::ComboBox^  comboBox5;
	private: System::Windows::Forms::ComboBox^  comboBox4;

	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label28;

	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label25;

	private: System::Windows::Forms::NumericUpDown^  numericUpDown25;
	private: System::Windows::Forms::Label^  label30;


	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  仿真设置ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  帮助ToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^  groupBox6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::IO::Ports::SerialPort^  serialPort1;
	private: System::Windows::Forms::Timer^  timer1;
private: System::Windows::Forms::Button^  button2;
private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::Label^  label27;

	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown8 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown7 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown25 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->仿真设置ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->帮助ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown25))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->numericUpDown8);
			this->groupBox1->Controls->Add(this->numericUpDown7);
			this->groupBox1->Controls->Add(this->numericUpDown6);
			this->groupBox1->Controls->Add(this->numericUpDown5);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->numericUpDown4);
			this->groupBox1->Controls->Add(this->numericUpDown3);
			this->groupBox1->Controls->Add(this->numericUpDown2);
			this->groupBox1->Controls->Add(this->numericUpDown1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(56, 320);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox1->Size = System::Drawing::Size(511, 101);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"模拟量波动设置";
			// 
			// numericUpDown8
			// 
			this->numericUpDown8->Location = System::Drawing::Point(420, 71);
			this->numericUpDown8->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->numericUpDown8->Name = L"numericUpDown8";
			this->numericUpDown8->Size = System::Drawing::Size(42, 21);
			this->numericUpDown8->TabIndex = 15;
			this->numericUpDown8->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown1_ValueChanged);
			// 
			// numericUpDown7
			// 
			this->numericUpDown7->Location = System::Drawing::Point(348, 70);
			this->numericUpDown7->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->numericUpDown7->Name = L"numericUpDown7";
			this->numericUpDown7->Size = System::Drawing::Size(42, 21);
			this->numericUpDown7->TabIndex = 14;
			this->numericUpDown7->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown1_ValueChanged);
			// 
			// numericUpDown6
			// 
			this->numericUpDown6->Location = System::Drawing::Point(146, 65);
			this->numericUpDown6->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->numericUpDown6->Name = L"numericUpDown6";
			this->numericUpDown6->Size = System::Drawing::Size(42, 21);
			this->numericUpDown6->TabIndex = 13;
			this->numericUpDown6->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown1_ValueChanged);
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Location = System::Drawing::Point(72, 64);
			this->numericUpDown5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(42, 21);
			this->numericUpDown5->TabIndex = 12;
			this->numericUpDown5->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown1_ValueChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(388, 76);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(29, 12);
			this->label8->TabIndex = 11;
			this->label8->Text = L"——";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(108, 75);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(29, 12);
			this->label7->TabIndex = 10;
			this->label7->Text = L"——";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(388, 32);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(29, 12);
			this->label6->TabIndex = 9;
			this->label6->Text = L"——";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(114, 30);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(29, 12);
			this->label5->TabIndex = 8;
			this->label5->Text = L"——";
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(420, 26);
			this->numericUpDown4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(42, 21);
			this->numericUpDown4->TabIndex = 7;
			this->numericUpDown4->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown1_ValueChanged);
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(348, 27);
			this->numericUpDown3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(42, 21);
			this->numericUpDown3->TabIndex = 6;
			this->numericUpDown3->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown1_ValueChanged);
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(144, 24);
			this->numericUpDown2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(42, 21);
			this->numericUpDown2->TabIndex = 5;
			this->numericUpDown2->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown1_ValueChanged);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(72, 24);
			this->numericUpDown1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(42, 21);
			this->numericUpDown1->TabIndex = 4;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown1_ValueChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::MistyRose;
			this->label4->Location = System::Drawing::Point(272, 72);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(47, 12);
			this->label4->TabIndex = 3;
			this->label4->Text = L"CO2浓度";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::MistyRose;
			this->label3->Location = System::Drawing::Point(8, 72);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 12);
			this->label3->TabIndex = 2;
			this->label3->Text = L"光 强";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::MistyRose;
			this->label2->Location = System::Drawing::Point(272, 32);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 12);
			this->label2->TabIndex = 1;
			this->label2->Text = L"湿度(%)";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::MistyRose;
			this->label1->Location = System::Drawing::Point(8, 32);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 12);
			this->label1->TabIndex = 0;
			this->label1->Text = L"温度(℃)";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->button2);
			this->groupBox4->Controls->Add(this->button1);
			this->groupBox4->Controls->Add(this->comboBox5);
			this->groupBox4->Controls->Add(this->comboBox4);
			this->groupBox4->Controls->Add(this->comboBox2);
			this->groupBox4->Controls->Add(this->comboBox1);
			this->groupBox4->Controls->Add(this->label29);
			this->groupBox4->Controls->Add(this->label28);
			this->groupBox4->Controls->Add(this->label26);
			this->groupBox4->Controls->Add(this->label25);
			this->groupBox4->Location = System::Drawing::Point(650, 30);
			this->groupBox4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox4->Size = System::Drawing::Size(159, 204);
			this->groupBox4->TabIndex = 3;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"参数设置";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Info;
			this->button2->Font = (gcnew System::Drawing::Font(L"宋体", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->Location = System::Drawing::Point(8, 174);
			this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(54, 25);
			this->button2->TabIndex = 11;
			this->button2->Text = L"确定";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button1
			// 
			this->button1->AutoSize = true;
			this->button1->BackColor = System::Drawing::SystemColors::Info;
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(80, 174);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(63, 25);
			this->button1->TabIndex = 10;
			this->button1->Text = L"清空参数";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// comboBox5
			// 
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"0", L"1", L"2" });
			this->comboBox5->Location = System::Drawing::Point(66, 145);
			this->comboBox5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(61, 20);
			this->comboBox5->TabIndex = 9;
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"8", L"16" });
			this->comboBox4->Location = System::Drawing::Point(66, 100);
			this->comboBox4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(61, 20);
			this->comboBox4->TabIndex = 8;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"9600", L"1000" });
			this->comboBox2->Location = System::Drawing::Point(66, 58);
			this->comboBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(61, 20);
			this->comboBox2->TabIndex = 6;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"COM1", L"COM2", L"COM3", L"COM4" });
			this->comboBox1->Location = System::Drawing::Point(66, 26);
			this->comboBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(61, 20);
			this->comboBox1->TabIndex = 5;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->BackColor = System::Drawing::Color::MistyRose;
			this->label29->Location = System::Drawing::Point(12, 147);
			this->label29->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(41, 12);
			this->label29->TabIndex = 4;
			this->label29->Text = L"停止位";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->BackColor = System::Drawing::Color::MistyRose;
			this->label28->Location = System::Drawing::Point(12, 102);
			this->label28->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(41, 12);
			this->label28->TabIndex = 3;
			this->label28->Text = L"数据位";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->BackColor = System::Drawing::Color::MistyRose;
			this->label26->Location = System::Drawing::Point(12, 58);
			this->label26->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(41, 12);
			this->label26->TabIndex = 1;
			this->label26->Text = L"波特率";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->BackColor = System::Drawing::Color::MistyRose;
			this->label25->Location = System::Drawing::Point(12, 26);
			this->label25->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(29, 12);
			this->label25->TabIndex = 0;
			this->label25->Text = L"串口";
			// 
			// numericUpDown25
			// 
			this->numericUpDown25->Location = System::Drawing::Point(81, 31);
			this->numericUpDown25->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->numericUpDown25->Name = L"numericUpDown25";
			this->numericUpDown25->Size = System::Drawing::Size(60, 21);
			this->numericUpDown25->TabIndex = 3;
			this->numericUpDown25->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown25_ValueChanged);
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->BackColor = System::Drawing::Color::MistyRose;
			this->label30->Location = System::Drawing::Point(14, 33);
			this->label30->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(53, 12);
			this->label30->TabIndex = 2;
			this->label30->Text = L"间隔(s):";
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::PaleTurquoise;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->仿真设置ToolStripMenuItem,
					this->帮助ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(818, 25);
			this->menuStrip1->TabIndex = 5;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// 仿真设置ToolStripMenuItem
			// 
			this->仿真设置ToolStripMenuItem->Name = L"仿真设置ToolStripMenuItem";
			this->仿真设置ToolStripMenuItem->Size = System::Drawing::Size(68, 21);
			this->仿真设置ToolStripMenuItem->Text = L"仿真设置";
			// 
			// 帮助ToolStripMenuItem
			// 
			this->帮助ToolStripMenuItem->Name = L"帮助ToolStripMenuItem";
			this->帮助ToolStripMenuItem->Size = System::Drawing::Size(44, 21);
			this->帮助ToolStripMenuItem->Text = L"帮助";
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->numericUpDown25);
			this->groupBox6->Controls->Add(this->button7);
			this->groupBox6->Controls->Add(this->button6);
			this->groupBox6->Controls->Add(this->label30);
			this->groupBox6->Controls->Add(this->button5);
			this->groupBox6->Location = System::Drawing::Point(650, 256);
			this->groupBox6->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox6->Size = System::Drawing::Size(159, 178);
			this->groupBox6->TabIndex = 6;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"时间设置";
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::Info;
			this->button7->Font = (gcnew System::Drawing::Font(L"宋体", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button7->Location = System::Drawing::Point(25, 140);
			this->button7->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(54, 25);
			this->button7->TabIndex = 2;
			this->button7->Text = L"退出";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button6
			// 
			this->button6->AutoSize = true;
			this->button6->BackColor = System::Drawing::SystemColors::Info;
			this->button6->Location = System::Drawing::Point(24, 110);
			this->button6->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(87, 26);
			this->button6->TabIndex = 1;
			this->button6->Text = L"清空数据显示";
			this->button6->UseVisualStyleBackColor = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::Info;
			this->button5->Location = System::Drawing::Point(25, 75);
			this->button5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(54, 26);
			this->button5->TabIndex = 0;
			this->button5->Text = L"发送";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(9, 27);
			this->label31->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(65, 12);
			this->label31->TabIndex = 7;
			this->label31->Text = L"数据发送区";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->HorizontalScrollbar = true;
			this->listBox1->ItemHeight = 12;
			this->listBox1->Location = System::Drawing::Point(11, 42);
			this->listBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->listBox1->Name = L"listBox1";
			this->listBox1->ScrollAlwaysVisible = true;
			this->listBox1->Size = System::Drawing::Size(606, 268);
			this->listBox1->TabIndex = 8;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(590, 331);
			this->label27->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(41, 12);
			this->label27->TabIndex = 9;
			this->label27->Text = L"ceshi ";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(818, 443);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"Form1";
			this->Text = L"下位机";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown25))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private:String^ str1;
			    array <String^>^ wd = gcnew  array<String^>(3);//温度
				array <String^>^ sd = gcnew  array<String^>(3);//湿度
				array <String^>^co2 = gcnew  array<String^>(3);//CO2
				array <String^>^ gz = gcnew  array<String^>(3);//光照

				array<float>^ lssj = gcnew array<float>(4);
				array<float>^BZsj = gcnew array<float>(4);

				private:void fangzheng_fasong(void)//数据仿真和发送
				{
					for (int i = 0; i < 3; i++)
					{
						lssj[0] = BZsj[0] + rand() / 3600.0;
						lssj[1] = BZsj[1] + rand() / 3600.0;
						lssj[2] = BZsj[2] + rand() / 3600.0;
						lssj[3] = BZsj[3] + rand() / 3600.0;

						wd[i] = lssj[0].ToString();
						sd[i] = lssj[1].ToString();
						co2[i] = lssj[2].ToString();
						gz[i] = lssj[3].ToString();

					}
					label27->Text = wd[0];
					String^ separator = L",";
					String^ joined = String::Join(separator, wd);
					joined += L"," + joined->Join(separator, sd);
					joined += L"," + joined->Join(separator, co2);
					joined += L"," + joined->Join(separator, gz);
					str1 += joined;
					serialPort1->WriteLine(str1);

					listBox1->Items->Add(str1);

					str1 = nullptr;
					joined = nullptr;
				}


private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
	srand(unsigned(time(NULL)));//随机数种子
	timer1->Stop();
	if (serialPort1->IsOpen)
	serialPort1->Close();//先将串口，计时器关闭
}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	      fangzheng_fasong();
}
		 //设置采集时间间隔
private: System::Void numericUpDown25_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	timer1->Interval = (Int32::Parse(this->numericUpDown25->Text))*1000;
}
		 
		 //退出
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}

		 //开始采集，发送
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	
	if (!serialPort1->IsOpen)
		serialPort1->Open();
	   timer1->Start();
}

		 //设置串口参数
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	if ((this->comboBox1->Text != nullptr)&&(this->comboBox2->Text != nullptr)&&(this->comboBox4->Text != nullptr)&&(this->comboBox5->Text != nullptr))
	{
		serialPort1->PortName = comboBox1->Text->Trim();
		serialPort1->BaudRate =Int32::Parse( comboBox2->Text->Trim());
		serialPort1->DataBits = Int32::Parse(comboBox4->Text->Trim());
		/*switch (Int32::Parse(comboBox5->Text->Trim()))
		{
		case 0:serialPort1->StopBits = SerialPort::StopBits::None;
		}*/
	}
	else
		MessageBox::Show(L"请填好参数");
}

		 //q清空
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	this->comboBox1->Text = nullptr;
	this->comboBox2->Text = nullptr;
	this->comboBox4->Text = nullptr;
	this->comboBox5->Text = nullptr;
}
		 //设置参数标准值
private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	BZsj[0] = ((float::Parse(numericUpDown1->Text)) + (float::Parse(numericUpDown2->Text)) )/2;
	BZsj[1] = ((float::Parse(numericUpDown3->Text)) + (float::Parse(numericUpDown4->Text))) / 2;
	BZsj[2] = ((float::Parse(numericUpDown5->Text)) + (float::Parse(numericUpDown6->Text))) / 2;
	BZsj[3] = ((float::Parse(numericUpDown7->Text)) + (float::Parse(numericUpDown8->Text))) / 2;
}
};
}

