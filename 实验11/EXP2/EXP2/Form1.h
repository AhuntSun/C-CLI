#pragma once

namespace EXP2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

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
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	protected:
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;

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
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Name = L"splitContainer1";
			this->splitContainer1->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->BackColor = System::Drawing::Color::Bisque;
			this->splitContainer1->Panel1->Controls->Add(this->groupBox2);
			this->splitContainer1->Panel1->Controls->Add(this->groupBox1);
			this->splitContainer1->Panel1->Controls->Add(this->textBox1);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->textBox2);
			this->splitContainer1->Size = System::Drawing::Size(837, 511);
			this->splitContainer1->SplitterDistance = 138;
			this->splitContainer1->TabIndex = 0;
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->groupBox2->Controls->Add(this->button7);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->button6);
			this->groupBox2->Location = System::Drawing::Point(328, 40);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(504, 80);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"DirectoryInfo";
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button7->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button7->Location = System::Drawing::Point(336, 32);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(144, 23);
			this->button7->TabIndex = 3;
			this->button7->Text = L"提取文件夹的文件";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::GetFileFromDir);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button4->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button4->Location = System::Drawing::Point(224, 32);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(96, 23);
			this->button4->TabIndex = 2;
			this->button4->Text = L"删除文件夹";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::Delete_Dir);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button5->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button5->Location = System::Drawing::Point(112, 32);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(96, 23);
			this->button5->TabIndex = 1;
			this->button5->Text = L"新建文件夹";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::Create_Dir);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::Info;
			this->button6->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button6->Location = System::Drawing::Point(0, 32);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(96, 23);
			this->button6->TabIndex = 0;
			this->button6->Text = L"浏览文件夹";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::FolderBroser);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Location = System::Drawing::Point(16, 40);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(296, 80);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"FileInfo";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &Form1::groupBox1_Enter);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button3->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->Location = System::Drawing::Point(192, 32);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"删除文件";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::Del_File);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button2->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->Location = System::Drawing::Point(96, 32);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"新建文件";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::CreateFile);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(8, 32);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"浏览文件";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::Select_File);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox1->Location = System::Drawing::Point(16, 8);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(808, 21);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox2->Location = System::Drawing::Point(0, 0);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(837, 369);
			this->textBox2->TabIndex = 0;
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripStatusLabel1 });
			this->statusStrip1->Location = System::Drawing::Point(0, 489);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(837, 22);
			this->statusStrip1->TabIndex = 1;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(131, 17);
			this->toolStripStatusLabel1->Text = L"toolStripStatusLabel1";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(837, 511);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->splitContainer1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"文件及文件夹操作";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String ^CurPath;
	private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
	//获取当前目录（即该进程从中启动的目录）的完全限定路径。
	CurPath = System::Environment::CurrentDirectory->ToString();;
	toolStripStatusLabel1->Text = String::Concat("当前目录为【", CurPath, "】 ");// 在状态栏上显示信息
}
private: System::Void Select_File(System::Object^  sender, System::EventArgs^  e) {
	openFileDialog1->InitialDirectory = CurPath;

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK && openFileDialog1->FileName != "")

	{

		textBox1->Text = openFileDialog1->FileName;

		FileInfo ^filestr = gcnew FileInfo(openFileDialog1->FileName);

		CurPath = filestr->DirectoryName;

		textBox2->Text = String::Concat("文件名：", filestr->Name, "\r\n文件大小:", filestr->Length, "\r\n最后存取时间：", filestr->LastAccessTime);

		//CurPath = CurPath->Substring(0, CurPath->LastIndexOf("\\")); //去掉/后面的程序名

		// CurPath = Directory::GetDirectories(openFileDialog1->FileName)->ToString();

		// 在状态栏上显示信息

		toolStripStatusLabel1->Text = String::Concat("当前目录为【", CurPath, "】 ");

	}

	else

		MessageBox::Show(this, "对不起，没有选择文件或选择文件失败！", "提示对话框", MessageBoxButtons::OK, MessageBoxIcon::Warning);
}
private: System::Void CreateFile(System::Object^  sender, System::EventArgs^  e) {
	String ^filestr = textBox1->Text->Trim();

	if (textBox1->Text == "")

		MessageBox::Show(this, "文件名不能为空！", "提示对话框", MessageBoxButtons::OK, MessageBoxIcon::Information);

	else

	{
		FileStream^ stream = nullptr;

		FileInfo^ fileInfo1 = gcnew FileInfo(filestr);

		if (fileInfo1->Exists)

			MessageBox::Show(this, "该文件名已经存在！" + fileInfo1->FullName, "提示对话框", MessageBoxButtons::OK, MessageBoxIcon::Information);

		else

		{
			stream = fileInfo1->Create();

			stream->Close();

			// 在状态栏上显示信息

			toolStripStatusLabel1->Text = String::Concat("当前目录为【", fileInfo1->DirectoryName, "】新建文件：", fileInfo1->Name);

			MessageBox::Show(this, "成功创建文件！" + fileInfo1->FullName, "提示对话框", MessageBoxButtons::OK, MessageBoxIcon::Information);

		}

	}
}
private: System::Void Del_File(System::Object^  sender, System::EventArgs^  e) {
	String ^filestr = textBox1->Text->Trim();

	if (filestr == "")

		MessageBox::Show(this, "文件路径及名称不能为空！", "信息提示", MessageBoxButtons::OK, MessageBoxIcon::Information);

	else

	{

		FileInfo^ fileInfo1 = gcnew FileInfo(filestr);

		if (!fileInfo1->Exists)

			MessageBox::Show(this, "要删除的文件不存在！", "信息提示", MessageBoxButtons::OK, MessageBoxIcon::Information);

		else

		{

			fileInfo1->Delete();

			// 在状态栏上显示信息

			toolStripStatusLabel1->Text = String::Concat("当前目录为【", fileInfo1->DirectoryName, "】删除文件：", fileInfo1->Name);

			MessageBox::Show(this, "成功删除了文件！", "信息提示", MessageBoxButtons::OK, MessageBoxIcon::Information);

		}

	}
}
private: System::Void FolderBroser(System::Object^  sender, System::EventArgs^  e) {
	folderBrowserDialog1->SelectedPath = CurPath;

	if (folderBrowserDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)

	{

		textBox1->Text = folderBrowserDialog1->SelectedPath;   //获取文件夹位置

		CurPath = textBox1->Text;

		// 在状态栏上显示信息

		toolStripStatusLabel1->Text = String::Concat("当前目录为【", textBox1->Text, "】 ");

	}

	else

		MessageBox::Show(this, "浏览文件夹错误！", "提示对话框", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void Create_Dir(System::Object^  sender, System::EventArgs^  e) {
	String ^Dirstr = textBox1->Text->Trim();

	if (Dirstr == "")

		MessageBox::Show(this, "文件夹位置及名称不能为空！", "提示对话框", MessageBoxButtons::OK, MessageBoxIcon::Information);

	else

	{

		DirectoryInfo^ dirInfo1 = gcnew DirectoryInfo(Dirstr);

		if (!dirInfo1->Exists)  //判断文件夹是否存在 

		{

			dirInfo1->Create();     //创建新文件夹 

			CurPath = dirInfo1->Parent->FullName;

			MessageBox::Show(this, "成功创建文件夹！" + dirInfo1->FullName, "提示对话框", MessageBoxButtons::OK, MessageBoxIcon::Information);

			// 在状态栏上显示信息

			toolStripStatusLabel1->Text = String::Concat("当前目录为【", dirInfo1->Parent->FullName, "】 创建文件夹", dirInfo1->FullName);

		}

		else

			MessageBox::Show(this, "该文件夹已存在！" + dirInfo1->FullName, "提示对话框", MessageBoxButtons::OK, MessageBoxIcon::Information);

	}
}
private: System::Void Delete_Dir(System::Object^  sender, System::EventArgs^  e) {
	String ^Dirstr = textBox1->Text->Trim();

	if (Dirstr == "")

		MessageBox::Show(this, "文件夹位置及名称不能为空！", "提示对话框", MessageBoxButtons::OK, MessageBoxIcon::Information);

	else

	{

		DirectoryInfo^ dirInfo1 = gcnew DirectoryInfo(Dirstr);

		if (dirInfo1->Exists)  //判断文件夹是否存在 

		{

			dirInfo1->Delete();     //删除文件夹 

			CurPath = dirInfo1->Parent->FullName;

			MessageBox::Show(this, "成功删除文件夹！" + dirInfo1->FullName, "提示对话框", MessageBoxButtons::OK, MessageBoxIcon::Information);

			// 在状态栏上显示信息

			toolStripStatusLabel1->Text = String::Concat("当前目录为【", dirInfo1->Parent->FullName, "】 删除文件夹", dirInfo1->FullName);

		}

		else

			MessageBox::Show(this, "该文件夹不存在！" + dirInfo1->FullName, "提示对话框", MessageBoxButtons::OK, MessageBoxIcon::Information);

	}
}
private: System::Void GetFileFromDir(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text == "")

	{

		MessageBox::Show(this, "请选择文件夹！", "提示对话框", MessageBoxButtons::OK, MessageBoxIcon::Information);

	}

	else

	{

		DirectoryInfo ^dir = gcnew DirectoryInfo(textBox1->Text);

		CurPath = dir->FullName;

		array <FileInfo ^> ^f = dir->GetFiles();

		textBox2->Text = String::Concat("当前目录为【", dir->FullName, "】 ", "\r\n");//显示完整目录

		for (int i = 0; i < f->Length; i++)

		{

			textBox2->Text += "\r\n";

			textBox2->Text += f[i]->FullName;//显示文件列表

		}

		// 在状态栏上显示信息

		toolStripStatusLabel1->Text = String::Concat("当前目录为【", dir->FullName, "】 ");

	}
}
};
}

