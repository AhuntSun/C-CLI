#pragma once

namespace EXP1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data;

	using namespace System::Data;
	using namespace System::Data::OleDb;
	using namespace System::Data::Common;
	using namespace System::Drawing;
	using namespace  System::Data::Odbc;

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

	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::DataGridView^  dataGridView1;


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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(96, 16);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(192, 20);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::On_SelChange);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(40, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 14);
			this->label1->TabIndex = 2;
			this->label1->Text = L"数据表";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(344, 16);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 24);
			this->button1->TabIndex = 3;
			this->button1->Text = L"调入";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::On_DBOpen);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(24, 56);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 23;
			this->dataGridView1->Size = System::Drawing::Size(648, 296);
			this->dataGridView1->TabIndex = 4;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(693, 356);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"简单的数据库浏览器";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: String^ strConn;
	private: System::Void On_DBOpen(System::Object^  sender, System::EventArgs^  e) {
		OpenFileDialog^  pOFD = gcnew OpenFileDialog();
		pOFD->Filter = "Access文件(*.mdb)|*.mdb";
		pOFD->DefaultExt = "mdb";
		if (pOFD->ShowDialog() != System::Windows::Forms::DialogResult::OK) return;
		strConn = String::Format(
			// Data Source这里这个空格真踏吗害死人
			"Provider=Microsoft.Jet.OLEDB.4.0; Data Source={0}", pOFD->FileName);
		OleDbConnection^ con1 = gcnew OleDbConnection(strConn);
		con1->Open();    // 打开连接
		// 清空组合框的列表项
		this->comboBox1->Items->Clear();
		// 获取数据表名称，并填充到toolStripComboBox1中
		// 指定限制列，用于GetOleDbSchemaTable中,返回第四列为table表
		array<String^>^strs = gcnew array<String^>{ nullptr, nullptr, nullptr, "TABLE"};
		DataTable^table = con1->GetOleDbSchemaTable(
			OleDbSchemaGuid::Tables, strs);       // 获取数据表名
		if (table->Rows->Count > 0)
		{
			for each(DataRow^ row in table->Rows)
			{
				this->comboBox1->Items->Add(row["TABLE_NAME"]);
			}
			this->comboBox1->SelectedIndex = 0;
		}
		con1->Close();
	}
private: System::Void On_SelChange(System::Object^  sender, System::EventArgs^  e) {
	int nIndex = this->comboBox1->SelectedIndex;
	if (nIndex < 0) return;
	// 获取选择的数据表名
	String^ strTableName = this->comboBox1->Items[nIndex]->ToString();
	// 使用DataAdapter和DataSet
	String^ cmdText = String::Format("SELECT * FROM {0}", strTableName);
	OleDbDataAdapter^ da1 = gcnew OleDbDataAdapter(cmdText, strConn);
	DataSet^ theSet1 = gcnew DataSet();
	da1->Fill(theSet1, "Test");         // 重新指定表名称
	this->dataGridView1->DataSource = theSet1;
	this->dataGridView1->DataMember = "Test"; // 指定要打开的表
	/* 直接使用表
	DataTable^ table = gcnew DataTable;
	da1->Fill( table );
	this->dataGridView1->DataSource =table;*/
}
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}

