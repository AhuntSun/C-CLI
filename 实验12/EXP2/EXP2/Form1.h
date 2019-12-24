#pragma once

namespace EXP2 {

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

	protected:
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Data::OleDb::OleDbCommand^  oleDbSelectCommand1;
	private: System::Data::OleDb::OleDbConnection^  oleDbConnection1;
	private: System::Data::OleDb::OleDbCommand^  oleDbInsertCommand1;
	private: System::Data::OleDb::OleDbDataAdapter^  oleDbDataAdapter1;
	private: System::Data::DataSet^  dataSet1;
	private: System::Data::DataTable^  dataTable1;
	private: System::Data::DataColumn^  dataColumn1;

































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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->oleDbSelectCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbConnection1 = (gcnew System::Data::OleDb::OleDbConnection());
			this->oleDbInsertCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDataAdapter1 = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->dataSet1 = (gcnew System::Data::DataSet());
			this->dataTable1 = (gcnew System::Data::DataTable());
			this->dataColumn1 = (gcnew System::Data::DataColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(8, 72);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 23;
			this->dataGridView1->Size = System::Drawing::Size(440, 242);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CurrentCellChanged += gcnew System::EventHandler(this, &Form1::On_SelCell);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(24, 24);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 32);
			this->button1->TabIndex = 1;
			this->button1->Text = L"简单查询";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->Location = System::Drawing::Point(160, 24);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(112, 32);
			this->button2->TabIndex = 2;
			this->button2->Text = L"成绩表查询";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->Location = System::Drawing::Point(296, 24);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(112, 32);
			this->button3->TabIndex = 3;
			this->button3->Text = L"多表查询";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button4->Location = System::Drawing::Point(432, 24);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(112, 32);
			this->button4->TabIndex = 4;
			this->button4->Text = L"成绩表编辑";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->groupBox1->Controls->Add(this->numericUpDown1);
			this->groupBox1->Controls->Add(this->button7);
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->Location = System::Drawing::Point(456, 72);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(224, 240);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"成绩表编辑";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(80, 128);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 23);
			this->numericUpDown1->TabIndex = 9;
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button7->Location = System::Drawing::Point(152, 184);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(48, 24);
			this->button7->TabIndex = 8;
			this->button7->Text = L"修改";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::On_Change);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button6->Location = System::Drawing::Point(88, 184);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(48, 24);
			this->button6->TabIndex = 7;
			this->button6->Text = L"删除";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::On_Del);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button5->Location = System::Drawing::Point(24, 184);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(48, 24);
			this->button5->TabIndex = 6;
			this->button5->Text = L"添加";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::On_Add);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(24, 136);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 14);
			this->label3->TabIndex = 4;
			this->label3->Text = L"成绩：";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(80, 88);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(120, 23);
			this->textBox2->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(24, 96);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 14);
			this->label2->TabIndex = 2;
			this->label2->Text = L"课程号：";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(80, 48);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(120, 23);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(24, 56);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 14);
			this->label1->TabIndex = 0;
			this->label1->Text = L"学号：";
			// 
			// oleDbSelectCommand1
			// 
			this->oleDbSelectCommand1->CommandText = L"SELECT   学号, 课程号, 成绩\r\nFROM      CJB";
			this->oleDbSelectCommand1->Connection = this->oleDbConnection1;
			// 
			// oleDbConnection1
			// 
			this->oleDbConnection1->ConnectionString = L"Provider=Microsoft.Jet.OLEDB.4.0;Data Source=F:\\VS2013\\程序\\严某C++CLI\\实验12\\student.m"
				L"db";
			// 
			// oleDbInsertCommand1
			// 
			this->oleDbInsertCommand1->CommandText = L"INSERT INTO `CJB` (`学号`, `课程号`, `成绩`) VALUES (\?, \?, \?)";
			this->oleDbInsertCommand1->Connection = this->oleDbConnection1;
			this->oleDbInsertCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(3) {
				(gcnew System::Data::OleDb::OleDbParameter(L"学号",
					System::Data::OleDb::OleDbType::VarWChar, 0, L"学号")), (gcnew System::Data::OleDb::OleDbParameter(L"课程号", System::Data::OleDb::OleDbType::VarWChar,
					0, L"课程号")), (gcnew System::Data::OleDb::OleDbParameter(L"成绩", System::Data::OleDb::OleDbType::Single, 0, L"成绩"))
			});
			// 
			// oleDbDataAdapter1
			// 
			this->oleDbDataAdapter1->InsertCommand = this->oleDbInsertCommand1;
			this->oleDbDataAdapter1->SelectCommand = this->oleDbSelectCommand1;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__1 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(3) {
				(gcnew System::Data::Common::DataColumnMapping(L"学号",
					L"学号")), (gcnew System::Data::Common::DataColumnMapping(L"课程号", L"课程号")), (gcnew System::Data::Common::DataColumnMapping(L"成绩",
					L"成绩"))
			};
			this->oleDbDataAdapter1->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {
				(gcnew System::Data::Common::DataTableMapping(L"Table",
					L"CJB", __mcTemp__1))
			});
			// 
			// dataSet1
			// 
			this->dataSet1->DataSetName = L"NewDataSet";
			this->dataSet1->Tables->AddRange(gcnew cli::array< System::Data::DataTable^  >(1) { this->dataTable1 });
			// 
			// dataTable1
			// 
			this->dataTable1->Columns->AddRange(gcnew cli::array< System::Data::DataColumn^  >(1) { this->dataColumn1 });
			this->dataTable1->TableName = L"Table1";
			// 
			// dataColumn1
			// 
			this->dataColumn1->AllowDBNull = false;
			this->dataColumn1->ColumnName = L"Column1";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ClientSize = System::Drawing::Size(688, 322);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"成绩表编辑";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		DataTable^ table1 = gcnew DataTable;
		this->oleDbDataAdapter1->Fill(table1);
		this->dataGridView1->DataSource = table1;
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Text = "简单查询访问";
		this->oleDbDataAdapter1->Fill(dataSet1, "Simple");
		this->dataGridView1->DataSource = nullptr;
		this->dataGridView1->DataSource = dataSet1;
		this->dataGridView1->DataMember = "Simple";
	}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Text = "成绩表查询";
	String ^strCmd = "SELECT   *FROM   CJB";
	Data::OleDb::OleDbCommand ^ cmd = gcnew Data::OleDb::OleDbCommand(strCmd, this->oleDbConnection1);
	this->oleDbDataAdapter1->SelectCommand = cmd;
	oleDbDataAdapter1->Fill (dataSet1, "TestInfo");
	this->dataGridView1->DataSource = dataSet1;
	this->dataGridView1->DataMember = "TestInfo";
}

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	// dataSet1->Clear();
	this->Text = "多表关联查询访问";
	String ^strCmd = L" SELECT   XSB.学号,  XSB.姓名,  KCB.课程号,  CJB.成绩  " \
		L" FROM ((CJB  INNER JOIN  XSB ON CJB.学号  =  XSB.学号)   \
		   INNER JOIN  KCB ON CJB.课程号 = KCB.课程号) " ;
	// Data::OleDb::OleDbCommand ^ cmd= gcnew Data::OleDb::OleDbCommand(strCmd,this->oleDbConnection1);
	this->oleDbDataAdapter1->SelectCommand->CommandText = strCmd;
	oleDbDataAdapter1->Fill(dataSet1, "TestMInfo");
	this->dataGridView1->DataSource = dataSet1;
	this->dataGridView1->DataMember = "TestMInfo";
}

private: System::Void On_SelCell(System::Object^  sender, System::EventArgs^  e) {
	// 使dataGridView1控件中当前选中的记录行内容显示在右边的控件中
	// 获取当前行
	DataGridViewRow^ curRow = this->dataGridView1->CurrentRow;
	if (curRow == nullptr) return;
	this->textBox1->Text = curRow->Cells[0]->Value->ToString();
	this->textBox2->Text = curRow->Cells[1]->Value->ToString();
	String^ strValue = curRow->Cells[2]->Value->ToString();
	if (String::IsNullOrEmpty(strValue))
		this->numericUpDown1->Value = Decimal(0.0);
	else
		this->numericUpDown1->Value = Decimal::Parse(strValue);
}

private: String ^strStuNO, ^strCourseNO;
bool dbedit;
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	if (!dbedit)
	{
		dbedit = true;
		this->button1->Enabled = false;
		this->button2->Enabled = false;
		this->button3->Enabled = false;
		this->button4->Text = "成绩表浏览";
		button2_Click(nullptr, nullptr);
		this->Text = "成绩表编辑";
	}
	else
	{
		dbedit = false;
		this->button1->Enabled = true;
		this->button2->Enabled = true;
		this->button3->Enabled = true;
		this->button4->Text = "成绩表编辑";
	}
}

private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Boolean CheckValid(System::Void){
	strStuNO  = this->textBox1->Text->Trim();
	strCourseNO  = this->textBox2->Text->Trim();
	if (String::IsNullOrEmpty(strStuNO))		return false;
	if (String::IsNullOrEmpty(strCourseNO))	return false;
	return true;
}

private: System::Void On_Add(System::Object^  sender, System::EventArgs^  e) {
	//if (!CheckValid()) return;
	//// 判断是否有学生号和课程号都相同的记录，若有，则不添加
	//String^ strCmd = String::Format(
	//	"SELECT * FROM CJB WHERE 学号=' {0}' AND \
	//	课程号 = '{1}' ",strStuNO, strCourseNO );
	//	// 创建可执行命令
	//	Data::OleDb::OleDbCommand^ selectCmd = gcnew
	//	Data::OleDb::OleDbCommand(strCmd, oleDbConnection1);
	//// 执行操作
	//this->oleDbConnection1->Open();
	//Object^oRes = selectCmd->ExecuteScalar();
	//this->oleDbConnection1->Close();
	//if (oRes)
	//{
	//	MessageBox::Show("添加记录有重复！", "添加失败");
	//	return;
	//}
	//// 添加记录
	//try {
	//	strCmd = String::Format(
	//		"INSERT INTO CJB	( 学号, 课程号, 成绩)\
	//		VALUES( ' {0}', ' {1}' , {2} )",
	//		strStuNO, strCourseNO, numericUpDown1->Value);
	//	// 创建可执行命令
	//	Data::OleDb::OleDbCommand^ cmd = gcnew
	//		Data::OleDb::OleDbCommand(strCmd, oleDbConnection1);
	//	// 执行操作
	//	this->oleDbConnection1->Open();
	//	cmd->ExecuteNonQuery();
	//	this->oleDbConnection1->Close();
	//	// 显示结果
	//	DataTable^ table1 = gcnew DataTable;
	//	this->oleDbDataAdapter1->Fill(table1);
	//	this->dataGridView1->DataSource = table1;
	//}
	//catch (Data::OleDb::OleDbException^ e)
	//{
	//	MessageBox::Show(e->Message, "错误");
	//}

	if (!CheckValid()) return;

	// 判断是否有学生号和课程号都相同的记录，若有，则不添加

	String^ strCmd = String::Format(
		"SELECT * FROM CJB WHERE 学号='{0}' AND \
		课程号 = '{1}'",strStuNO, strCourseNO );
		// 创建可执行命令
		Data::OleDb::OleDbCommand^ selectCmd = gcnew

		Data::OleDb::OleDbCommand(strCmd, oleDbConnection1);

	// 执行操作

	this->oleDbConnection1->Open();

	Object^oRes = selectCmd->ExecuteScalar();

	this->oleDbConnection1->Close();

	if (oRes)

	{

		MessageBox::Show("添加记录有重复！", "添加失败");

		return;

	}

	// 添加记录

	try {
		strCmd = String::Format(
			"INSERT INTO CJB(学号,课程号,成绩)\
			VALUES('{0}', '{1}', { 2 })",
			strStuNO, strCourseNO, numericUpDown1->Value);
		// 创建可执行命令

		Data::OleDb::OleDbCommand^ cmd = gcnew

			Data::OleDb::OleDbCommand(strCmd, oleDbConnection1);

		// 执行操作

		this->oleDbConnection1->Open();

		cmd->ExecuteNonQuery();

		this->oleDbConnection1->Close();

		// 显示结果

		DataTable^ table1 = gcnew DataTable;

		this->oleDbDataAdapter1->Fill(table1);

		this->dataGridView1->DataSource = table1;

	}

	catch (Data::OleDb::OleDbException^ e)

	{

		MessageBox::Show(e->Message, "错误");

	}
}
private: System::Void On_Del(System::Object^  sender, System::EventArgs^  e) {
	//if (!CheckValid()   ) return;

	//// 删除记录

	//try {
	//	String^ strCmd = String::Format(
	//		"DELETE FROM CJB WHERE  学号  ='  {0} ' AND  课程号 = ' {1} ' ", strStuNO, strCourseNO);
	//		// 创建可执行命令
	//		Data::OleDb::OleDbCommand^ cmd = gcnew Data::OleDb::OleDbCommand(strCmd, oleDbConnection1);
	//	// 执行操作
	//	this->oleDbConnection1->Open();
	//	cmd->ExecuteNonQuery();
	//	this->oleDbConnection1->Close();
	//	// 显示结果
	//	DataTable^ table1 = gcnew DataTable;
	//	this->oleDbDataAdapter1->Fill(table1);
	//	this->dataGridView1->DataSource = table1;
	//}
	//catch (Data::OleDb::OleDbException^ e)
	//{
	//	MessageBox::Show(e->Message, "错误");
	//}

	if (!CheckValid()) return;

	// 删除记录

	try {
		String^ strCmd = String::Format(
			"DELETE FROM CJB WHERE 学号='{0}'\
			AND 课程号 = '{1}'",strStuNO,strCourseNO );
			// 创建可执行命令
			Data::OleDb::OleDbCommand^ cmd = gcnew
			Data::OleDb::OleDbCommand(strCmd, oleDbConnection1);

		// 执行操作

		this->oleDbConnection1->Open();

		cmd->ExecuteNonQuery();

		this->oleDbConnection1->Close();

		// 显示结果

		DataTable^ table1 = gcnew DataTable;

		this->oleDbDataAdapter1->Fill(table1);

		this->dataGridView1->DataSource = table1;

	}

	catch (Data::OleDb::OleDbException^ e)

	{

		MessageBox::Show(e->Message, "错误");

	}
}

private: System::Void  On_Change(System::Object^  sender, System::EventArgs^  e) {
	//if (!CheckValid()) return;
	//// 修改记录
	//try {
	//	String^ strCmd = String::Format(
	//		"UPDATE  CJB  SET 成绩 = {2} WHERE 学号=' {0}' \
	//		AND 课程号 =' {1}' ", strStuNO, strCourseNO,
	//		this->numericUpDown1->Value );
	//	// 创建可执行命令
	//	Data::OleDb::OleDbCommand^ cmd = gcnew Data::OleDb::OleDbCommand(strCmd, oleDbConnection1);
	//	// 执行操作
	//	this->oleDbConnection1->Open();
	//	cmd->ExecuteNonQuery();
	//	this->oleDbConnection1->Close();
	//	// 显示结果
	//	DataTable^ table1 = gcnew DataTable;
	//	this->oleDbDataAdapter1->Fill(table1);
	//	this->dataGridView1->DataSource = table1;
	//}
	//catch (Data::OleDb::OleDbException^ e)
	//{
	//	MessageBox::Show(e->Message, "错误");
	//}

	if (!CheckValid()) return;

	// 删除记录

	try {
		String^ strCmd = String::Format(
			"UPDATE CJB SET 成绩={2} WHERE 学号='{0}'\
			AND 课程号 = '{1}'",strStuNO, strCourseNO, 
			this->numericUpDown1->Value);
		// 创建可执行命令
		Data::OleDb::OleDbCommand^ cmd = gcnew
			Data::OleDb::OleDbCommand(strCmd, oleDbConnection1);

		// 执行操作

		this->oleDbConnection1->Open();

		cmd->ExecuteNonQuery();

		this->oleDbConnection1->Close();

		// 显示结果

		DataTable^ table1 = gcnew DataTable;

		this->oleDbDataAdapter1->Fill(table1);

		this->dataGridView1->DataSource = table1;

	}

	catch (Data::OleDb::OleDbException^ e)

	{

		MessageBox::Show(e->Message, "错误");

	}
}

};
}

