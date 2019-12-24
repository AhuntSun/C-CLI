#pragma once

namespace EXP2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// WinMess 摘要
	/// </summary>
	public ref class WinMess : public System::Windows::Forms::Form
	{
	public:
		WinMess(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~WinMess()
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
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::TextBox^  textBox5;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(WinMess::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(32, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(83, 14);
			this->label1->TabIndex = 0;
			this->label1->Text = L"用 户 名：";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(32, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(82, 14);
			this->label2->TabIndex = 1;
			this->label2->Text = L"系统目录：";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(32, 104);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(82, 14);
			this->label3->TabIndex = 2;
			this->label3->Text = L"计算机名：";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(32, 144);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(82, 14);
			this->label4->TabIndex = 3;
			this->label4->Text = L"启动模式：";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(32, 184);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(82, 14);
			this->label5->TabIndex = 4;
			this->label5->Text = L"系统版本：";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(32, 248);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(83, 14);
			this->label6->TabIndex = 5;
			this->label6->Text = L"输 入 法：";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(120, 24);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(136, 21);
			this->textBox1->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(120, 64);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(136, 21);
			this->textBox2->TabIndex = 7;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(120, 104);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(136, 21);
			this->textBox3->TabIndex = 8;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(120, 144);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(136, 21);
			this->textBox4->TabIndex = 9;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(120, 248);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(136, 20);
			this->comboBox1->TabIndex = 10;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(120, 184);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(136, 48);
			this->textBox5->TabIndex = 11;
			// 
			// WinMess
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(299, 282);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"WinMess";
			this->Text = L"计算机系统基本信息";
			this->Load += gcnew System::EventHandler(this, &WinMess::WinMess_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void WinMess_Load(System::Object^  sender, System::EventArgs^  e) {
		this->textBox1->Text = Environment::GetEnvironmentVariable("UserName");        //获取用户名
		this->textBox2->Text = Environment::SystemDirectory;                           //获取系统目录
		textBox3->Text = Environment::MachineName->ToString();                                          //获取计算机名
		String^mode = SystemInformation::BootMode.ToString();
		if (mode->Equals("FailSafe"))
			textBox4->Text = "不带网络支持的安全模式";
		else if (mode->Equals("FailSafeWithNetwork"))
			textBox4->Text = "具有网络支持的安全模式";
		else if (mode->Equals("Normal"))
			textBox4->Text = "标准模式";
		textBox5->Text = Environment::OSVersion->ToString();             
		for each (InputLanguage^ lang  in InputLanguage::InstalledInputLanguages)
		{
			comboBox1->Items->Add(lang->LayoutName);
		}
	}
	};
}
