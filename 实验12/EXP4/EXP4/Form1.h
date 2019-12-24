#pragma once

namespace EXP4 {

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
	private: System::Windows::Forms::DateTimePicker^  birthday1;
	protected:

	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox4;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox3;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Data::OleDb::OleDbCommand^  oleDbSelectCommand1;
	private: System::Data::OleDb::OleDbConnection^  oleDbConnection1;

	private: System::Data::OleDb::OleDbDataAdapter^  oleDbDataAdapter1;
	private: System::Data::DataSet^  dataSet1;
	private: System::Data::OleDb::OleDbCommand^  oleDbDeleteCommand;
	private: System::Data::OleDb::OleDbCommand^  oleDbInsertCommand;
	private: System::Data::OleDb::OleDbCommand^  oleDbUpdateCommand;



	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->birthday1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->oleDbSelectCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbConnection1 = (gcnew System::Data::OleDb::OleDbConnection());
			this->oleDbDataAdapter1 = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->oleDbDeleteCommand = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbInsertCommand = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbUpdateCommand = (gcnew System::Data::OleDb::OleDbCommand());
			this->dataSet1 = (gcnew System::Data::DataSet());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->birthday1);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->checkBox1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(464, 8);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 312);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			// 
			// birthday1
			// 
			this->birthday1->Location = System::Drawing::Point(64, 136);
			this->birthday1->Name = L"birthday1";
			this->birthday1->Size = System::Drawing::Size(120, 21);
			this->birthday1->TabIndex = 16;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->Location = System::Drawing::Point(144, 280);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(48, 24);
			this->button3->TabIndex = 15;
			this->button3->Text = L"修改";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->Location = System::Drawing::Point(80, 280);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(48, 24);
			this->button2->TabIndex = 14;
			this->button2->Text = L"删除";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(16, 280);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(48, 24);
			this->button1->TabIndex = 13;
			this->button1->Text = L"添加";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(64, 208);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(120, 56);
			this->textBox4->TabIndex = 12;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(16, 208);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(45, 14);
			this->label6->TabIndex = 11;
			this->label6->Text = L"地址:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(64, 168);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(120, 21);
			this->textBox3->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(16, 168);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(45, 14);
			this->label5->TabIndex = 9;
			this->label5->Text = L"籍贯:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(16, 136);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(45, 14);
			this->label4->TabIndex = 7;
			this->label4->Text = L"出生:";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->checkBox1->Location = System::Drawing::Point(72, 104);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(41, 18);
			this->checkBox1->TabIndex = 6;
			this->checkBox1->Text = L"男";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(16, 104);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(45, 14);
			this->label3->TabIndex = 4;
			this->label3->Text = L"性别:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(64, 64);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(120, 21);
			this->textBox2->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(18, 66);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 14);
			this->label2->TabIndex = 2;
			this->label2->Text = L"学号:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(64, 24);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(120, 21);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(16, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 14);
			this->label1->TabIndex = 0;
			this->label1->Text = L"姓名:";
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button4->Location = System::Drawing::Point(488, 336);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(64, 24);
			this->button4->TabIndex = 14;
			this->button4->Text = L"查询";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::On_Find);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button5->Location = System::Drawing::Point(584, 336);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(64, 24);
			this->button5->TabIndex = 15;
			this->button5->Text = L"退出";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// listView1
			// 
			this->listView1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->listView1->FullRowSelect = true;
			this->listView1->GridLines = true;
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(8, 16);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(448, 344);
			this->listView1->TabIndex = 16;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::listView1_SelectedIndexChanged);
			// 
			// oleDbSelectCommand1
			// 
			this->oleDbSelectCommand1->CommandText = L"SELECT   学号, 姓名, 性别, 出生日期, 籍贯, 住址\r\nFROM      XSB";
			this->oleDbSelectCommand1->Connection = this->oleDbConnection1;
			// 
			// oleDbConnection1
			// 
			this->oleDbConnection1->ConnectionString = L"Provider=Microsoft.Jet.OLEDB.4.0;Data Source =F:\\VS2013\\程序\\严某C++CLI\\实验12\\student."
				L"mdb";
			// 
			// oleDbDataAdapter1
			// 
			this->oleDbDataAdapter1->DeleteCommand = this->oleDbDeleteCommand;
			this->oleDbDataAdapter1->InsertCommand = this->oleDbInsertCommand;
			this->oleDbDataAdapter1->SelectCommand = this->oleDbSelectCommand1;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__1 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(6) {
				(gcnew System::Data::Common::DataColumnMapping(L"学号",
					L"学号")), (gcnew System::Data::Common::DataColumnMapping(L"姓名", L"姓名")), (gcnew System::Data::Common::DataColumnMapping(L"性别",
					L"性别")), (gcnew System::Data::Common::DataColumnMapping(L"出生日期", L"出生日期")), (gcnew System::Data::Common::DataColumnMapping(L"籍贯",
					L"籍贯")), (gcnew System::Data::Common::DataColumnMapping(L"住址", L"住址"))
			};
			this->oleDbDataAdapter1->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {
				(gcnew System::Data::Common::DataTableMapping(L"Table",
					L"XSB", __mcTemp__1))
			});
			this->oleDbDataAdapter1->UpdateCommand = this->oleDbUpdateCommand;
			// 
			// oleDbDeleteCommand
			// 
			this->oleDbDeleteCommand->CommandText = resources->GetString(L"oleDbDeleteCommand.CommandText");
			this->oleDbDeleteCommand->Connection = this->oleDbConnection1;
			this->oleDbDeleteCommand->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(11) {
				(gcnew System::Data::OleDb::OleDbParameter(L"Original_学号",
					System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
					static_cast<System::Byte>(0), L"学号", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_姓名",
					System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
					L"姓名", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_姓名",
					System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
					static_cast<System::Byte>(0), L"姓名", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_性别",
					System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
					L"性别", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_性别",
					System::Data::OleDb::OleDbType::Boolean, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
					static_cast<System::Byte>(0), L"性别", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_出生日期",
					System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
					L"出生日期", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_出生日期",
					System::Data::OleDb::OleDbType::Date, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
					L"出生日期", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_籍贯", System::Data::OleDb::OleDbType::Integer,
					0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"籍贯", System::Data::DataRowVersion::Original,
					true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_籍贯", System::Data::OleDb::OleDbType::VarWChar, 0,
					System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"籍贯", System::Data::DataRowVersion::Original,
					nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_住址", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input,
					static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"住址", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_住址",
					System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
					static_cast<System::Byte>(0), L"住址", System::Data::DataRowVersion::Original, nullptr))
			});
			// 
			// oleDbInsertCommand
			// 
			this->oleDbInsertCommand->CommandText = L"INSERT INTO `XSB` (`学号`, `姓名`, `性别`, `出生日期`, `籍贯`, `住址`) VALUES (\?, \?, \?, \?, \?, \?"
				L")";
			this->oleDbInsertCommand->Connection = this->oleDbConnection1;
			this->oleDbInsertCommand->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(6) {
				(gcnew System::Data::OleDb::OleDbParameter(L"学号",
					System::Data::OleDb::OleDbType::VarWChar, 0, L"学号")), (gcnew System::Data::OleDb::OleDbParameter(L"姓名", System::Data::OleDb::OleDbType::VarWChar,
					0, L"姓名")), (gcnew System::Data::OleDb::OleDbParameter(L"性别", System::Data::OleDb::OleDbType::Boolean, 0, L"性别")), (gcnew System::Data::OleDb::OleDbParameter(L"出生日期",
					System::Data::OleDb::OleDbType::Date, 0, L"出生日期")), (gcnew System::Data::OleDb::OleDbParameter(L"籍贯", System::Data::OleDb::OleDbType::VarWChar,
					0, L"籍贯")), (gcnew System::Data::OleDb::OleDbParameter(L"住址", System::Data::OleDb::OleDbType::VarWChar, 0, L"住址"))
			});
			// 
			// oleDbUpdateCommand
			// 
			this->oleDbUpdateCommand->CommandText = resources->GetString(L"oleDbUpdateCommand.CommandText");
			this->oleDbUpdateCommand->Connection = this->oleDbConnection1;
			this->oleDbUpdateCommand->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(17) {
				(gcnew System::Data::OleDb::OleDbParameter(L"学号",
					System::Data::OleDb::OleDbType::VarWChar, 0, L"学号")), (gcnew System::Data::OleDb::OleDbParameter(L"姓名", System::Data::OleDb::OleDbType::VarWChar,
					0, L"姓名")), (gcnew System::Data::OleDb::OleDbParameter(L"性别", System::Data::OleDb::OleDbType::Boolean, 0, L"性别")), (gcnew System::Data::OleDb::OleDbParameter(L"出生日期",
					System::Data::OleDb::OleDbType::Date, 0, L"出生日期")), (gcnew System::Data::OleDb::OleDbParameter(L"籍贯", System::Data::OleDb::OleDbType::VarWChar,
					0, L"籍贯")), (gcnew System::Data::OleDb::OleDbParameter(L"住址", System::Data::OleDb::OleDbType::VarWChar, 0, L"住址")), (gcnew System::Data::OleDb::OleDbParameter(L"Original_学号",
					System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
					static_cast<System::Byte>(0), L"学号", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_姓名",
					System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
					L"姓名", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_姓名",
					System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
					static_cast<System::Byte>(0), L"姓名", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_性别",
					System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
					L"性别", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_性别",
					System::Data::OleDb::OleDbType::Boolean, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
					static_cast<System::Byte>(0), L"性别", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_出生日期",
					System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
					L"出生日期", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_出生日期",
					System::Data::OleDb::OleDbType::Date, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
					L"出生日期", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_籍贯", System::Data::OleDb::OleDbType::Integer,
					0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"籍贯", System::Data::DataRowVersion::Original,
					true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_籍贯", System::Data::OleDb::OleDbType::VarWChar, 0,
					System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"籍贯", System::Data::DataRowVersion::Original,
					nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_住址", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input,
					static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"住址", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_住址",
					System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
					static_cast<System::Byte>(0), L"住址", System::Data::DataRowVersion::Original, nullptr))
			});
			// 
			// dataSet1
			// 
			this->dataSet1->DataSetName = L"NewDataSet";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->ClientSize = System::Drawing::Size(673, 380);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Form1";
			this->Text = L"学生信息管理";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		//private: System::Void DispView(DataTable^ table)
		//{
		//	this->listView1->Columns->Clear();
		//	this->listView1->Items->Clear();
		//	if (table == nullptr) return;
		//	ListViewItem^ item;
		//	for each (DataRow^ row in table->Rows)
		//	{
		//		if (row->RowState != DataRowState::Deleted)// 不能是已删除的行
		//		{
		//			item = gcnew ListViewItem(row[0]->ToString());
		//			for (int i = 1; i < table->Columns->Count; i++)
		//				item->SubItems->Add(row[i]->ToString());
		//		}
		//		listView1->Items->Add(item);
		//	}
		//	// 创建ListView列表头
		//	for each (DataColumn^ col in table->Columns)
		//		listView1->Columns->Add(col->Caption, 80);
		//}

		private: System::Void DispView(DataTable^ table)
		{
			this->listView1->Columns->Clear();
			this->listView1->Items->Clear();
			if (table == nullptr) return;
			ListViewItem^ item;
			for each (DataRow^ row in table->Rows)
			{
				if (row->RowState != DataRowState::Deleted)// 不能是已删除的行
				{
					item = gcnew ListViewItem(row[0]->ToString());
					for (int i = 1; i < table->Columns->Count; i++)
						item->SubItems->Add(row[i]->ToString());
				}
				listView1->Items->Add(item);
			}
			// 创建ListView列表头
			for each (DataColumn^ col in table->Columns)
				listView1->Columns->Add(col->Caption, 80);
		}

private: BindingSource^ binding1;
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		//// 获取数据表
		//oleDbDataAdapter1->Fill(dataSet1, "TheData");
		//DataTable^ table1 = dataSet1->Tables["TheData"];
		//table1->PrimaryKey = gcnew array<DataColumn^>{ table1->Columns[0] };
		//binding1 = gcnew BindingSource(dataSet1, "TheData");
		//// 显示表内容
		//DispView(table1);
		//// 将姓名绑定到textBox1
		//textBox1->DataBindings->Add(gcnew System::Windows::Forms::Binding(
		//	"Text", binding1, "姓名"));
		//// 将学号绑定到textBox2
		//textBox2->DataBindings->Add(gcnew System::Windows::Forms::Binding(
		//	"Text", binding1, "学号"));
		//// 将性别绑定到checkBox1
		//checkBox1->DataBindings->Add(gcnew System::Windows::Forms::Binding(
		//	"Checked", binding1, "性别"));
		//// 将出生时间绑定到birthday1
		//birthday1->DataBindings->Add(gcnew System::Windows::Forms::Binding(
		//	"Value", binding1, "出生时间"));
		//// 将专业绑定到textBox3
		//textBox3->DataBindings->Add(gcnew System::Windows::Forms::Binding(
		//	"Text", binding1, "专业"));
		//// 将总学分绑定到numericUpDown1
		///*numericUpDown1->DataBindings->Add(gcnew System::Windows::Forms::Binding(
		//	"Text", binding1, "总学分"));*/
		//// 将备注绑定到textBox4
		//textBox4->DataBindings->Add(gcnew System::Windows::Forms::Binding(
		//	"Text", binding1, "备注"));

		// 获取数据表
		oleDbDataAdapter1->Fill(dataSet1, "TheData");
		DataTable^ table1 = dataSet1->Tables["TheData"];
		table1->PrimaryKey = gcnew array<DataColumn^>{ table1->Columns[0] };
		binding1 = gcnew BindingSource(dataSet1, "TheData");
		// 显示表内容
		DispView(table1);
		// 将姓名绑定到textBox1
		textBox1->DataBindings->Add(gcnew System::Windows::Forms::Binding(
			"Text", binding1, "姓名"));
		// 将学号绑定到textBox2
		textBox2->DataBindings->Add(gcnew System::Windows::Forms::Binding(
			"Text", binding1, "学号"));
		// 将性别绑定到checkBox1
		checkBox1->DataBindings->Add(gcnew System::Windows::Forms::Binding(
			"Checked", binding1, "性别"));
		// 将出生时间绑定到birthday1
		birthday1->DataBindings->Add(gcnew System::Windows::Forms::Binding(
			"Value", binding1, "出生日期"));
		// 将专业绑定到textBox3
		textBox3->DataBindings->Add(gcnew System::Windows::Forms::Binding(
			"Text", binding1, "籍贯"));
		// 将总学分绑定到numericUpDown1
		//numericUpDown1->DataBindings->Add(gcnew System::Windows::Forms::Binding(

		//	"Text", binding1, "总学分"));
		// 将备注绑定到textBox4
		textBox4->DataBindings->Add(gcnew System::Windows::Forms::Binding(
			"Text", binding1, "住址"));
	}


private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (listView1->SelectedIndices->Count < 1) return;
	// 当它选择列表项时，要自动更新绑定的控件内容
	int nIndex = listView1->SelectedIndices[0];
	// 移动表的游标
	this->binding1->Position = nIndex;
}
private: String ^strStuNO, ^strStuName;
private: System::Boolean CheckValid(System::Void){
	strStuName = this->textBox1->Text->Trim();
	strStuNO = this->textBox2->Text->Trim();
	if (String::IsNullOrEmpty(strStuName))     return false;
	if (String::IsNullOrEmpty(strStuNO))       return false;
	return true;
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (!CheckValid()) return;
	// 判断是否有学生姓名和学生号相同的记录，若有，则不添加
	// 使用DataView来判断
	DataTable^ table1 = dataSet1->Tables["TheData"];
	DataView^ view1 = gcnew DataView(table1);
	// 指定行过滤条件
	view1->RowFilter = String::Format("学号='{0}'", strStuNO);
	if (view1->Count > 0)
	{
		MessageBox::Show("添加记录的学号有重复！", "添加失败");
		return;
	}
	// 获取当前项中由控件指定的数据
	DataRowView^ rowView1 = (DataRowView^)binding1->Current;
	DataRow^   row1 = table1->NewRow();
	// 将当前控件中行的内容赋给新行
	for (int i = 0; i < table1->Columns->Count; i++)
		row1[i] = rowView1->Row[i];
	table1->Rows->Add(row1);
	// 获取控件中与数据表绑定的原来的数据
	rowView1->CancelEdit();
	// 显示表内容
	DispView(table1);
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	// 删除在listView1选中的行
	if (listView1->SelectedIndices->Count < 1){
		MessageBox::Show("请在左侧列表中选择要删除的记录行！", "提示");
		return;
	}
	int nIndex = listView1->SelectedIndices[0];
	DataTable^ table1 = dataSet1->Tables["TheData"];
	// 不能删除当前行
	if (nIndex == table1->Rows->Count - 1)
		binding1->MoveFirst();
	else
		binding1->MoveNext();
	table1->Rows[nIndex]->Delete();
	listView1->Items->RemoveAt(nIndex);
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (!CheckValid()) return;
	// 获取当前项中由控件指定的数据
	DataRowView^ rowView1 = (DataRowView^)binding1->Current;
	// 在listView1选中的行
	if (listView1->SelectedIndices->Count < 1){
		MessageBox::Show("请在左侧列表中选择要修改的记录行！", "提示");
		rowView1->CancelEdit();
		return;
	}
	rowView1->EndEdit();
	// 显示表内容
	DispView(dataSet1->Tables["TheData"]);
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	// 由于是参照列表显示的内容来更新数据源的，所以
	DataRowView^ rowView1 = (DataRowView^)binding1->Current;
	rowView1->CancelEdit();
	DataTable^ table1 = dataSet1->Tables["TheData"];
	this->oleDbDataAdapter1->Update(table1);
	table1->AcceptChanges();   // 这是保证更新数据源的关键
	this->Close();
}

private: System::Void  On_Find(System::Object^  sender, System::EventArgs^  e) {
			 String^ selectSql = L"SELECT * FROM XSB WHERE ";
			 if (this->textBox1->Text == String::Empty) selectSql += L"1>0";
			 else selectSql += L"姓名 LIKE '" + this->textBox1->Text + L"'";
			 selectSql += L" AND";                     // 学号和课程号查询条件
			 if (this->textBox2->Text == String::Empty) selectSql += L"1>0";
			 else selectSql += L"学号 LIKE '" + this->textBox2->Text + L"'";
			 this->dataSet1->Clear();                     // 清空DataSet中的数据
			 // 执行查询(模糊查询)
			 this->oleDbDataAdapter1->SelectCommand->CommandText = selectSql;
			 this->oleDbDataAdapter1->Fill(this->dataSet1, "TheData");//填充查询结果
			 DispView(dataSet1->Tables["TheData"]);
		 }
		 
};
}

