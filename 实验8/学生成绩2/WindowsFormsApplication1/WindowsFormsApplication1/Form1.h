#pragma once
//#include"InputDlg.h"
namespace  WindowsFormsApplication1{

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
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	public: System::Windows::Forms::TreeView^  treeView1;
	private:

	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::Windows::Forms::ImageList^  imageList2;


	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	private: System::Windows::Forms::ColumnHeader^  columnHeader5;
	private: System::Windows::Forms::ListView^  listView1;
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
			System::Windows::Forms::TreeNode^  treeNode1 = (gcnew System::Windows::Forms::TreeNode(L"张三"));
			System::Windows::Forms::TreeNode^  treeNode2 = (gcnew System::Windows::Forms::TreeNode(L"语文：78", 2, 2));
			System::Windows::Forms::TreeNode^  treeNode3 = (gcnew System::Windows::Forms::TreeNode(L"数学：98", 2, 2));
			System::Windows::Forms::TreeNode^  treeNode4 = (gcnew System::Windows::Forms::TreeNode(L"英语：67", 2, 2));
			System::Windows::Forms::TreeNode^  treeNode5 = (gcnew System::Windows::Forms::TreeNode(L"成绩", 1, 1, gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {
				treeNode2,
					treeNode3, treeNode4
			}));
			System::Windows::Forms::TreeNode^  treeNode6 = (gcnew System::Windows::Forms::TreeNode(L"2019001", gcnew cli::array< System::Windows::Forms::TreeNode^  >(2) {
				treeNode1,
					treeNode5
			}));
			System::Windows::Forms::TreeNode^  treeNode7 = (gcnew System::Windows::Forms::TreeNode(L"李四", 0, 0));
			System::Windows::Forms::TreeNode^  treeNode8 = (gcnew System::Windows::Forms::TreeNode(L"语文：92", 2, 2));
			System::Windows::Forms::TreeNode^  treeNode9 = (gcnew System::Windows::Forms::TreeNode(L"数学：84", 2, 2));
			System::Windows::Forms::TreeNode^  treeNode10 = (gcnew System::Windows::Forms::TreeNode(L"英语：96", 2, 2));
			System::Windows::Forms::TreeNode^  treeNode11 = (gcnew System::Windows::Forms::TreeNode(L"成绩", 1, 1, gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {
				treeNode8,
					treeNode9, treeNode10
			}));
			System::Windows::Forms::TreeNode^  treeNode12 = (gcnew System::Windows::Forms::TreeNode(L"2019002", 0, 0, gcnew cli::array< System::Windows::Forms::TreeNode^  >(2) {
				treeNode7,
					treeNode11
			}));
			System::Windows::Forms::TreeNode^  treeNode13 = (gcnew System::Windows::Forms::TreeNode(L"王二麻子", 0, 0));
			System::Windows::Forms::TreeNode^  treeNode14 = (gcnew System::Windows::Forms::TreeNode(L"语文：90", 2, 2));
			System::Windows::Forms::TreeNode^  treeNode15 = (gcnew System::Windows::Forms::TreeNode(L"数学：80", 2, 2));
			System::Windows::Forms::TreeNode^  treeNode16 = (gcnew System::Windows::Forms::TreeNode(L"英语：70", 2, 2));
			System::Windows::Forms::TreeNode^  treeNode17 = (gcnew System::Windows::Forms::TreeNode(L"成绩", 1, 1, gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {
				treeNode14,
					treeNode15, treeNode16
			}));
			System::Windows::Forms::TreeNode^  treeNode18 = (gcnew System::Windows::Forms::TreeNode(L"2019003", 0, 0, gcnew cli::array< System::Windows::Forms::TreeNode^  >(2) {
				treeNode13,
					treeNode17
			}));
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->imageList2 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader(L"(无)"));
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::MediumTurquoise;
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(432, 40);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 32);
			this->button1->TabIndex = 0;
			this->button1->Text = L"添加";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::MediumTurquoise;
			this->button2->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->Location = System::Drawing::Point(432, 112);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(80, 32);
			this->button2->TabIndex = 1;
			this->button2->Text = L"删除";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::MediumTurquoise;
			this->button3->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->Location = System::Drawing::Point(432, 184);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(80, 32);
			this->button3->TabIndex = 2;
			this->button3->Text = L"修改";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->treeView1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->Location = System::Drawing::Point(8, 16);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(176, 256);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"所有学生";
			// 
			// treeView1
			// 
			this->treeView1->BackColor = System::Drawing::Color::Wheat;
			this->treeView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->treeView1->ImageIndex = 0;
			this->treeView1->ImageList = this->imageList1;
			this->treeView1->Location = System::Drawing::Point(3, 19);
			this->treeView1->Name = L"treeView1";
			treeNode1->ImageIndex = 0;
			treeNode1->Name = L"节点4";
			treeNode1->Text = L"张三";
			treeNode2->ImageIndex = 2;
			treeNode2->Name = L"节点9";
			treeNode2->SelectedImageIndex = 2;
			treeNode2->Text = L"语文：78";
			treeNode3->ImageIndex = 2;
			treeNode3->Name = L"节点10";
			treeNode3->SelectedImageIndex = 2;
			treeNode3->Text = L"数学：98";
			treeNode4->ImageIndex = 2;
			treeNode4->Name = L"节点11";
			treeNode4->SelectedImageIndex = 2;
			treeNode4->Text = L"英语：67";
			treeNode5->ImageIndex = 1;
			treeNode5->Name = L"节点8";
			treeNode5->SelectedImageIndex = 1;
			treeNode5->Text = L"成绩";
			treeNode6->ImageIndex = 0;
			treeNode6->Name = L"节点1";
			treeNode6->Text = L"2019001";
			treeNode7->ImageIndex = 0;
			treeNode7->Name = L"节点5";
			treeNode7->SelectedImageIndex = 0;
			treeNode7->Text = L"李四";
			treeNode8->ImageIndex = 2;
			treeNode8->Name = L"节点13";
			treeNode8->SelectedImageIndex = 2;
			treeNode8->Text = L"语文：92";
			treeNode9->ImageIndex = 2;
			treeNode9->Name = L"节点14";
			treeNode9->SelectedImageIndex = 2;
			treeNode9->Text = L"数学：84";
			treeNode10->ImageIndex = 2;
			treeNode10->Name = L"节点15";
			treeNode10->SelectedImageIndex = 2;
			treeNode10->Text = L"英语：96";
			treeNode11->ImageIndex = 1;
			treeNode11->Name = L"节点12";
			treeNode11->SelectedImageIndex = 1;
			treeNode11->Text = L"成绩";
			treeNode12->ImageIndex = 0;
			treeNode12->Name = L"节点2";
			treeNode12->SelectedImageIndex = 0;
			treeNode12->Text = L"2019002";
			treeNode13->ImageIndex = 0;
			treeNode13->Name = L"节点6";
			treeNode13->SelectedImageIndex = 0;
			treeNode13->Text = L"王二麻子";
			treeNode14->ImageIndex = 2;
			treeNode14->Name = L"节点17";
			treeNode14->SelectedImageIndex = 2;
			treeNode14->Text = L"语文：90";
			treeNode15->ImageIndex = 2;
			treeNode15->Name = L"节点18";
			treeNode15->SelectedImageIndex = 2;
			treeNode15->Text = L"数学：80";
			treeNode16->ImageIndex = 2;
			treeNode16->Name = L"节点19";
			treeNode16->SelectedImageIndex = 2;
			treeNode16->Text = L"英语：70";
			treeNode17->ImageIndex = 1;
			treeNode17->Name = L"节点16";
			treeNode17->SelectedImageIndex = 1;
			treeNode17->Text = L"成绩";
			treeNode18->ImageIndex = 0;
			treeNode18->Name = L"节点3";
			treeNode18->SelectedImageIndex = 0;
			treeNode18->Text = L"2019003";
			this->treeView1->Nodes->AddRange(gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) { treeNode6, treeNode12, treeNode18 });
			this->treeView1->SelectedImageIndex = 0;
			this->treeView1->ShowLines = false;
			this->treeView1->Size = System::Drawing::Size(170, 234);
			this->treeView1->TabIndex = 4;
			this->treeView1->AfterSelect += gcnew System::Windows::Forms::TreeViewEventHandler(this, &Form1::treeView1_AfterSelect);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"user_24px_1237032_easyicon.net.ico");
			this->imageList1->Images->SetKeyName(1, L"folder_24px_1237034_easyicon.net.ico");
			this->imageList1->Images->SetKeyName(2, L"checklist_32px_1234207_easyicon.net.ico");
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::LightYellow;
			this->groupBox2->Controls->Add(this->radioButton4);
			this->groupBox2->Controls->Add(this->radioButton3);
			this->groupBox2->Controls->Add(this->radioButton2);
			this->groupBox2->Controls->Add(this->radioButton1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox2->Location = System::Drawing::Point(32, 288);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(120, 136);
			this->groupBox2->TabIndex = 5;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"列表显示方式";
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(8, 104);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(73, 18);
			this->radioButton4->TabIndex = 3;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Detail";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton4_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(8, 80);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(57, 18);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"List";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton3_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(8, 56);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(65, 18);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Small";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(8, 32);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(65, 18);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Large";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton1_CheckedChanged);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(200, 16);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(192, 216);
			this->tabControl1->TabIndex = 6;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::MistyRose;
			this->tabPage1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(184, 190);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"基本情况";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(56, 112);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 23);
			this->textBox2->TabIndex = 6;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(8, 112);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(52, 14);
			this->label5->TabIndex = 5;
			this->label5->Text = L"学号：";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(56, 56);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 23);
			this->textBox1->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(8, 56);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(52, 14);
			this->label4->TabIndex = 0;
			this->label4->Text = L"姓名：";
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::PeachPuff;
			this->tabPage2->Controls->Add(this->numericUpDown3);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->numericUpDown2);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->numericUpDown1);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(184, 190);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"成绩表";
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(80, 128);
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(56, 23);
			this->numericUpDown3->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(24, 128);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 14);
			this->label3->TabIndex = 4;
			this->label3->Text = L"成绩3：";
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(80, 80);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(56, 23);
			this->numericUpDown2->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(24, 80);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 14);
			this->label2->TabIndex = 2;
			this->label2->Text = L"成绩2：";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(80, 32);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(56, 23);
			this->numericUpDown1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(24, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 14);
			this->label1->TabIndex = 0;
			this->label1->Text = L"成绩1：";
			// 
			// imageList2
			// 
			this->imageList2->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList2.ImageStream")));
			this->imageList2->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList2->Images->SetKeyName(0, L"user_24px_1237032_easyicon.net.ico");
			// 
			// listView1
			// 
			this->listView1->BackColor = System::Drawing::Color::LightCoral;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3, this->columnHeader4, this->columnHeader5
			});
			this->listView1->ForeColor = System::Drawing::SystemColors::WindowText;
			this->listView1->GridLines = true;
			this->listView1->LargeImageList = this->imageList1;
			this->listView1->Location = System::Drawing::Point(200, 264);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(368, 160);
			this->listView1->SmallImageList = this->imageList1;
			this->listView1->TabIndex = 1;
			this->listView1->TileSize = System::Drawing::Size(100, 28);
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"姓名";
			this->columnHeader1->Width = 90;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"学号";
			this->columnHeader2->Width = 90;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"成绩1";
			this->columnHeader3->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"成绩2";
			this->columnHeader4->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"成绩3";
			this->columnHeader5->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(579, 433);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"学生成绩管理";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		//为radioButton1控件"Large"添加CheckedChanged事件处理函数
	private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		this->listView1->View = View::LargeIcon; // 大图标方式显示
	}

			 //为radioButton控件"Large"添加CheckedChanged事件处理函数
	private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		this->listView1->View = View::SmallIcon; // 小图标方式显示
	}

			 //为radioButton3控件"Large"添加CheckedChanged事件处理函数
	private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		this->listView1->View = View::List; // 列表方式显示
	}

			 //为radioButton4控件"Large"添加CheckedChanged事件处理函数
	private: System::Void radioButton4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		this->listView1->View = View::Details; // 详细信息方式显示
	}

			 //为"添加"按钮添加单击事件处理函数
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		InputDlg^ pDlg = gcnew InputDlg(); //创建InputDlg对象句柄以调用InputDlg窗体
		if (pDlg->ShowDialog(this) != System::Windows::Forms::DialogResult::OK) return;
		// 判断是否有重号
		String^ strNo = pDlg->textBox2->Text->Trim();
		if (String::IsNullOrEmpty(strNo))
		{
			MessageBox::Show("添加的节点学号不能为空！", "提示");
			return;
		}
		for (int i = 0; i < treeView1->Nodes->Count; i++)
		{
			if (strNo->Equals(treeView1->Nodes[i]->Text->Trim()))
			{
				MessageBox::Show("该学号节点已添加！", "提示");
				return;
			}
		}
		// 添加节点
		TreeNode^ scoreNode1 = gcnew TreeNode(pDlg->numericUpDown1->Text, 1, 1);
		TreeNode^ scoreNode2 = gcnew TreeNode(pDlg->numericUpDown2->Text, 1, 1);
		TreeNode^ scoreNode3 = gcnew TreeNode(pDlg->numericUpDown3->Text, 1, 1);
		TreeNode^ scoreNodes = gcnew TreeNode("成绩", 1, 1);
		scoreNodes->Nodes->Add(scoreNode1);
		scoreNodes->Nodes->Add(scoreNode2);
		scoreNodes->Nodes->Add(scoreNode3);
		TreeNode^ nameNode = gcnew TreeNode(pDlg->textBox1->Text, 1, 1);
		TreeNode^ rootNode = gcnew TreeNode(strNo);
		rootNode->Nodes->Add(nameNode);
		rootNode->Nodes->Add(scoreNodes);
		this->treeView1->Nodes->Add(rootNode);
		///
		ListViewItem^ item1 = gcnew ListViewItem(pDlg->textBox1->Text, 0);
		item1->SubItems->Add(pDlg->textBox2->Text);       // 学号
		item1->SubItems->Add(pDlg->numericUpDown1->Text); // 成绩1
		item1->SubItems->Add(pDlg->numericUpDown2->Text); // 成绩2
		item1->SubItems->Add(pDlg->numericUpDown3->Text); // 成绩3
		ListViewItem^ addItem = this->listView1->Items->Add(item1);
		addItem->Selected = true;  // 设置当前添加的列表项为当前选择项
	}
			 //创建自定义方法
	private: TreeNode^ GetSelRootNode(System::Void)
	{
		if (treeView1->SelectedNode == nullptr)
		{
			MessageBox::Show("本操作先要选择节点记录！", "提示");
			return nullptr;
		}
		// 找到选中的最高级根节点
		TreeNode^ rootNode = treeView1->SelectedNode->Parent;
		if (rootNode == nullptr)
			rootNode = treeView1->SelectedNode;
		else
		{
			if (rootNode->Parent != nullptr)
				rootNode = rootNode->Parent;
		}
		return rootNode;
	}

			 //为树视图的AfterSelect添加事件处理函数
	private: System::Void treeView1_AfterSelect(System::Object^  sender, System::Windows::Forms::TreeViewEventArgs^  e) {
		TreeNode ^rootNode = GetSelRootNode();
		if (rootNode == nullptr) return;
		for (int i = 0; i < this->listView1->Items->Count; i++)
		{
			ListViewItem ^item1 = listView1->Items[i];
			if (item1->Text->Equals(rootNode->FirstNode->Text))
			{
				item1->Selected = true;// 设置当前列表项为当前选择项
				break;
			}
		}
		// 将获取的节点内容反填充到成绩管理对话框中
		this->textBox1->Text = rootNode->FirstNode->Text;	// 姓名
		this->textBox2->Text = rootNode->Text;		// 学号
		// 学号节点不能更改
		this->textBox2->Enabled = false;
		TreeNode^ scoreNode = rootNode->LastNode->FirstNode;
		this->numericUpDown1->Text = scoreNode->Text;	// 成绩1
		scoreNode = scoreNode->NextNode;
		this->numericUpDown2->Text = scoreNode->Text;	// 成绩2
		scoreNode = scoreNode->NextNode;
		this->numericUpDown3->Text = scoreNode->Text;	// 成绩3
	}
			 //这是“删除”按钮执行的时间处理方法。
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		//Del
		TreeNode^ rootNode = GetSelRootNode();
		if (rootNode == nullptr) return;
		this->treeView1->Nodes->Remove(GetSelRootNode());
		//
		// 若当前没有选择项，则返回
		if (listView1->SelectedItems->Count <= 0) {
			MessageBox::Show("请选定一个列表项！", this->Text);
			return;
		}
		// 获取当前选择的列表项
		// ListViewItem^ item1 = listView1->SelectedItems[0]; //好象不行
		for (int i = 0; i < this->listView1->Items->Count; i++)
		{
			ListViewItem ^item1 = listView1->Items[i];
			if (item1->Text->Equals(rootNode->FirstNode->Text))
			{	 // 删除当前选择的列表项
				listView1->Items->Remove(item1);
				break;
			}
		}
	}
			 //这是“修改”按钮执行的事件处理函数。
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		//Modi
		TreeNode^ rootNode = GetSelRootNode();
		if (rootNode == nullptr) return;
		// 将获取的节点内容反填充到成绩管理对话框中
		InputDlg^ pDlg = gcnew InputDlg();
		pDlg->textBox1->Text = rootNode->FirstNode->Text;	// 姓名
		pDlg->textBox2->Text = rootNode->Text;	// 学号
		// 学号节点不能更改
		pDlg->textBox2->Enabled = false;
		TreeNode^ scoreNode = rootNode->LastNode->FirstNode;
		pDlg->numericUpDown1->Text = scoreNode->Text;	// 成绩1
		scoreNode = scoreNode->NextNode;
		pDlg->numericUpDown2->Text = scoreNode->Text;	// 成绩2
		scoreNode = scoreNode->NextNode;
		pDlg->numericUpDown3->Text = scoreNode->Text;	// 成绩3
		if (pDlg->ShowDialog(this) != System::Windows::Forms::DialogResult::OK) return;
		rootNode->FirstNode->Text = pDlg->textBox1->Text;
		scoreNode = rootNode->LastNode->FirstNode;
		scoreNode->Text = pDlg->numericUpDown1->Text;
		scoreNode = scoreNode->NextNode;
		scoreNode->Text = pDlg->numericUpDown2->Text;
		scoreNode = scoreNode->NextNode;
		scoreNode->Text = pDlg->numericUpDown3->Text;
		// 若当前没有选择项，则返回
		if (listView1->SelectedItems->Count <= 0) {
			MessageBox::Show("请选定一个列表项！", this->Text);
			return;
		}
		// 获取当前选择的列表项
		ListViewItem^ item1 = listView1->SelectedItems[0];
		// 修改选择的列表项的内容
		item1->SubItems[0]->Text = pDlg->textBox1->Text;
		item1->SubItems[1]->Text = pDlg->textBox2->Text;
		item1->SubItems[2]->Text = pDlg->numericUpDown1->Text;
		item1->SubItems[3]->Text = pDlg->numericUpDown2->Text;
		item1->SubItems[4]->Text = pDlg->numericUpDown3->Text;
	}
			 //为Form1的Load事件添加事件处理函数
	private: System::Void  Form1_Load(System::Object^  sender, System::EventArgs^  e) {

		if (treeView1->Nodes->Count > 0)//判断树视图是否有节点
		{
			for (int i = 0; i < treeView1->Nodes->Count; i++)//遍历树视图的全部节点并分别为列表图各行赋值
			{    // 添加节点
				TreeNode ^Node = treeView1->Nodes[i];
				//把节点中的姓名和图标添加到列表图的第一列中
				ListViewItem^ item1 = gcnew ListViewItem(Node->FirstNode->Text, 0);
				item1->SubItems->Add(Node->Text); // 把节点中的学号添加到列表图的第一列中
				Node = Node->LastNode->FirstNode;//获取最后一个节点的第一个子树节点
				item1->SubItems->Add(Node->Text);  // 把节点中的成绩1添加到列表图第一列中
				Node = Node->NextNode;//下一个节点
				item1->SubItems->Add(Node->Text);  //把节点中的成绩2添加到列表图中
				item1->SubItems->Add(Node->NextNode->Text);    // 把节点中的成绩3添加到列表图第一列中
				ListViewItem^ addItem = this->listView1->Items->Add(item1);
				addItem->Selected = true;  // 设置当前添加的列表项为当前选择项
			}
		}
		this->tabPage1->Enabled = true;//默认显示tabcontrol1的tabPage1
		this->radioButton4->Checked = true;//默认设置选择radioButton4
		this->listView1->View = View::Details; // 默认设置列表图view属性为Detail
	}
	};

}

