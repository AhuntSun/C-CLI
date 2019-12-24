#pragma once

namespace EXP2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// AboutDlg 摘要
	/// </summary>
	public ref class AboutDlg : public System::Windows::Forms::Form
	{
	public:
		AboutDlg(void)
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
		~AboutDlg()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(AboutDlg::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Red;
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->ForeColor = System::Drawing::Color::Yellow;
			this->button1->Location = System::Drawing::Point(192, 200);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 32);
			this->button1->TabIndex = 1;
			this->button1->Text = L"确定";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 15, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(144, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(160, 56);
			this->label1->TabIndex = 2;
			this->label1->Text = L"多文本编辑器";
			this->label1->Click += gcnew System::EventHandler(this, &AboutDlg::label1_Click);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"微软雅黑", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(152, 96);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(160, 56);
			this->label2->TabIndex = 3;
			this->label2->Text = L"版本号：2.0.1";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(136, 136);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(184, 56);
			this->label3->TabIndex = 4;
			this->label3->Text = L" 版权所有     王二麻子";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(8, 32);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(128, 144);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->linkLabel1->LinkColor = System::Drawing::Color::Yellow;
			this->linkLabel1->Location = System::Drawing::Point(16, 208);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(161, 16);
			this->linkLabel1->TabIndex = 6;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"19990201099qq.com";
			// 
			// AboutDlg
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ClientSize = System::Drawing::Size(306, 263);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"AboutDlg";
			this->Text = L"关于多文本编辑器";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
