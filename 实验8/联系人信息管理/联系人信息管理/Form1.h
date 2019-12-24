#pragma once
#include"Contact.h"
namespace 联系人信息管理 {
	using namespace Contacter;
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
			this->contactList = gcnew ArrayList();
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
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox4;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox3;

	private: System::Windows::Forms::Label^  label6;

	private: System::Windows::Forms::Label^  label5;

	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  textBox6;

	private: System::Windows::Forms::Label^  label11;

	private: System::Windows::Forms::Label^  label10;

	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox5;


	private:
		/// <summary>
		/// 必需的设计器变量。
		ArrayList^contactList;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox1;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox3;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox2;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox4;


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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->maskedTextBox2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->maskedTextBox4 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox3 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(264, 16);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(296, 264);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage1.BackgroundImage")));
			this->tabPage1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage1->Controls->Add(this->radioButton2);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->dateTimePicker1);
			this->tabPage1->Controls->Add(this->radioButton1);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(288, 238);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"基本情况";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->BackColor = System::Drawing::Color::RosyBrown;
			this->radioButton2->Location = System::Drawing::Point(168, 136);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(40, 18);
			this->radioButton2->TabIndex = 9;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"女";
			this->radioButton2->UseVisualStyleBackColor = false;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(88, 80);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(120, 23);
			this->textBox2->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::MediumAquamarine;
			this->label4->Location = System::Drawing::Point(32, 192);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(82, 14);
			this->label4->TabIndex = 6;
			this->label4->Text = L"出生日期：";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::MediumAquamarine;
			this->label3->Location = System::Drawing::Point(32, 136);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 14);
			this->label3->TabIndex = 5;
			this->label3->Text = L"性别：";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::MediumTurquoise;
			this->label2->Location = System::Drawing::Point(32, 80);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 14);
			this->label2->TabIndex = 4;
			this->label2->Text = L"昵称：";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(120, 184);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(128, 23);
			this->dateTimePicker1->TabIndex = 3;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->BackColor = System::Drawing::Color::RosyBrown;
			this->radioButton1->Location = System::Drawing::Point(88, 136);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(40, 18);
			this->radioButton1->TabIndex = 2;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"男";
			this->radioButton1->UseVisualStyleBackColor = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(88, 24);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(120, 23);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::MediumTurquoise;
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(32, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 14);
			this->label1->TabIndex = 0;
			this->label1->Text = L"姓名：";
			// 
			// tabPage2
			// 
			this->tabPage2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage2.BackgroundImage")));
			this->tabPage2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage2->Controls->Add(this->maskedTextBox2);
			this->tabPage2->Controls->Add(this->maskedTextBox1);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->textBox4);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->textBox3);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(288, 238);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"联系方式";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// maskedTextBox2
			// 
			this->maskedTextBox2->Location = System::Drawing::Point(128, 80);
			this->maskedTextBox2->Name = L"maskedTextBox2";
			this->maskedTextBox2->Size = System::Drawing::Size(120, 23);
			this->maskedTextBox2->TabIndex = 20;
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Location = System::Drawing::Point(128, 32);
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(120, 23);
			this->maskedTextBox1->TabIndex = 17;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::IndianRed;
			this->label8->Location = System::Drawing::Point(40, 176);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(82, 14);
			this->label8->TabIndex = 16;
			this->label8->Text = L"联系地址：";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(120, 176);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(136, 48);
			this->textBox4->TabIndex = 15;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::IndianRed;
			this->label7->Location = System::Drawing::Point(40, 128);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(82, 14);
			this->label7->TabIndex = 14;
			this->label7->Text = L"电子邮件：";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(120, 128);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(136, 23);
			this->textBox3->TabIndex = 13;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::IndianRed;
			this->label6->Location = System::Drawing::Point(40, 80);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(82, 14);
			this->label6->TabIndex = 12;
			this->label6->Text = L"移动电话：";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::IndianRed;
			this->label5->Location = System::Drawing::Point(40, 32);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(82, 14);
			this->label5->TabIndex = 10;
			this->label5->Text = L"联系电话：";
			// 
			// tabPage3
			// 
			this->tabPage3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage3.BackgroundImage")));
			this->tabPage3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage3->Controls->Add(this->maskedTextBox4);
			this->tabPage3->Controls->Add(this->maskedTextBox3);
			this->tabPage3->Controls->Add(this->label12);
			this->tabPage3->Controls->Add(this->textBox6);
			this->tabPage3->Controls->Add(this->label11);
			this->tabPage3->Controls->Add(this->label10);
			this->tabPage3->Controls->Add(this->label9);
			this->tabPage3->Controls->Add(this->textBox5);
			this->tabPage3->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(288, 238);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"单位信息";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// maskedTextBox4
			// 
			this->maskedTextBox4->Location = System::Drawing::Point(120, 120);
			this->maskedTextBox4->Name = L"maskedTextBox4";
			this->maskedTextBox4->Size = System::Drawing::Size(120, 23);
			this->maskedTextBox4->TabIndex = 21;
			// 
			// maskedTextBox3
			// 
			this->maskedTextBox3->Location = System::Drawing::Point(120, 80);
			this->maskedTextBox3->Name = L"maskedTextBox3";
			this->maskedTextBox3->Size = System::Drawing::Size(120, 23);
			this->maskedTextBox3->TabIndex = 20;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Orange;
			this->label12->Location = System::Drawing::Point(32, 168);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(82, 14);
			this->label12->TabIndex = 18;
			this->label12->Text = L"单位地址：";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(120, 168);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(120, 23);
			this->textBox6->TabIndex = 17;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Orange;
			this->label11->Location = System::Drawing::Point(32, 120);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(84, 14);
			this->label11->TabIndex = 16;
			this->label11->Text = L"邮    编：";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Orange;
			this->label10->Location = System::Drawing::Point(32, 80);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(82, 14);
			this->label10->TabIndex = 14;
			this->label10->Text = L"单位电话：";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::DarkOrange;
			this->label9->Location = System::Drawing::Point(32, 40);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(82, 14);
			this->label9->TabIndex = 12;
			this->label9->Text = L"单位名称：";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(120, 40);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(120, 23);
			this->textBox5->TabIndex = 11;
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::MediumAquamarine;
			this->listBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 14;
			this->listBox1->Location = System::Drawing::Point(3, 19);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(186, 226);
			this->listBox1->TabIndex = 0;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::listBox1_SelectedIndexChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->listBox1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->Location = System::Drawing::Point(24, 24);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(192, 248);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"所有联系人";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::MediumTurquoise;
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(120, 312);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 29);
			this->button1->TabIndex = 0;
			this->button1->Text = L"删除";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::MediumTurquoise;
			this->button2->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->Location = System::Drawing::Point(240, 312);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 29);
			this->button2->TabIndex = 2;
			this->button2->Text = L"添加";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::MediumTurquoise;
			this->button3->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->Location = System::Drawing::Point(368, 312);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 29);
			this->button3->TabIndex = 3;
			this->button3->Text = L"修改";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(579, 372);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->tabControl1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"联系人信息管理";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);

		}

#pragma endregion

	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {


	}
		//为"添加"按钮添加事件处理方法
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ strText = this->textBox1->Text->Trim();
		if (String::IsNullOrEmpty(strText))//判断姓名文本框是否为空
		{
			MessageBox::Show(L"姓名不能为空！", L"提示");//显示提示信息
			return;
		}
		int nIndex = -1;//定义存放索引的变量
		nIndex = this->listBox1->FindString(strText);//FindStringExact( strText );寻找以指定字符开头的字符串
		if (nIndex >= 0)   // 有重复项
			MessageBox::Show(String::Format("列表项[{0}]已添加过了！", strText), L"提示");//显示提示信息
		else
		{
			Contact^ contact = gcnew Contact();//创建结构体Contact的引用句柄变量
			contact->contactName = this->textBox1->Text;          // 初始化Contact结构体实例contact姓名
			contact->contactNick = this->textBox2->Text;          // 初始化Contact结构体实例contact昵称
			contact->contactSex = this->radioButton1->Checked; // 初始化Contact结构体实例contact，默认选择性别,男为true
			contact->contactBirth = this->dateTimePicker1->Value;    // 初始化Contact结构体实例contact出生日期
			contact->contactPhone = this->maskedTextBox1->Text;    // 初始化Contact结构体实例contact联系电话
			contact->contactMobile = this->maskedTextBox2->Text;    // 初始化Contact结构体实例contact移动电话
			contact->contactEmail = this->textBox3->Text;            // 初始化Contact结构体实例contact电子邮件
			contact->contactAddress = this->textBox4->Text;           // 初始化Contact结构体实例contact联系地址
			contact->companyName = this->textBox5->Text;            // 初始化Contact结构体实例contact单位名称
			contact->companyPhone = this->maskedTextBox3->Text;      // 初始化Contact结构体实例contact单位电话
			contact->companyPost = this->maskedTextBox4->Text;     // 初始化Contact结构体实例contact邮编
			contact->companyAddress = this->textBox6->Text;          // 初始化Contact结构体实例contact单位地址
			this->contactList->Add(contact);   //把Contact结构体实例contact添加到ArrayList中
			int index = this->listBox1->Items->Add(contact->contactName); // 将实例conact的contactName属性添加到ListBox中
			this->listBox1->SelectedIndex = index;// 设置存放索引变量的值为选中状态
		}
	}
//为"删除"按钮添加事件处理方法
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->listBox1->SelectedIndex == -1) return; // 未选择联系人
	String^ contactName = listBox1->Items[listBox1->SelectedIndex]->ToString();//将listBox1选中项赋值给 contactName
	for (int i = 0; i <=contactList->Count-1; i++) {  // 查找该联系人
		Contact^ contact = safe_cast<Contact^>(contactList[i]);
		if (contactName == contact->contactName) {
			contactList->RemoveAt(i); break;   // 删除该联系人
		}
	}
	this->listBox1->Items->RemoveAt(listBox1->SelectedIndex); // 从ListBox中删除该项
}
		 //为"修改"按钮添加事件处理方法
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	button1_Click(sender, e);                     // 删除原信息
	button2_Click(sender, e);                     // 重新添加该信息
}
		 //为ListBox控件添加SelectedIndexChange事件处理方法
private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->listBox1->SelectedIndex == -1) return;//如果选项为空则直接跳出
	String^ contactName = listBox1->Items[listBox1->SelectedIndex]->ToString();
	Contact^ contact = nullptr;//将contact结构体对象初始化nullptr
	for (int i = 0; i <contactList->Count; i++) {  //遍历链表contactList查找该联系人
		contact = safe_cast<Contact^>(contactList[i]);//将contactList[i]类数据转换为
		if (contactName == contact->contactName) break;//查找到相同项就跳出Contact类型数据
	}
	//若contactList中没有该项就用结构体对象contact初始化相关控件
	this->textBox1->Text = contact->contactName; // 姓名
	this->textBox2->Text = contact->contactNick;  // 昵称
	if (contact->contactSex) this->radioButton1->Checked = true;   // 性别:男
	else this->radioButton2->Checked = true;
	this->dateTimePicker1->Value = contact->contactBirth;      // 出生日期
	this->maskedTextBox1->Text = contact->contactPhone;      // 联系电话
	this->maskedTextBox2->Text = contact->contactMobile;     // 移动电话
	this->textBox3->Text = contact->contactEmail;             // 电子邮件
	this->textBox4->Text = contact->contactAddress;           // 联系地址
	this->textBox5->Text = contact->companyName;              // 单位名称
	this->maskedTextBox3->Text = contact->companyPhone;    // 单位电话
	this->maskedTextBox4->Text = contact->companyPost;        // 邮编
	this->textBox6->Text = contact->companyAddress;          // 单位地址
}
};
}

