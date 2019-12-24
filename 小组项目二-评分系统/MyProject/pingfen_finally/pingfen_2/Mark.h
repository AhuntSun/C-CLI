#include"Pubish.h"
#include"Stu.h"
#include"Score.h"
#pragma once

namespace pingfen_2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Mark 摘要
	/// </summary>
	public ref class Mark : public System::Windows::Forms::Form
	{
	public:
		Mark(void)
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
		~Mark()
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

	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox6;

	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown3;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown4;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown5;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown6;
    public: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::GroupBox^  groupBox6;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Mark::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Yellow;
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->ForeColor = System::Drawing::Color::Red;
			this->button1->Location = System::Drawing::Point(320, 704);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(88, 24);
			this->button1->TabIndex = 0;
			this->button1->Text = L"最高最低分";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Mark::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Yellow;
			this->button2->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->button2->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->ForeColor = System::Drawing::Color::Red;
			this->button2->Location = System::Drawing::Point(456, 704);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(80, 24);
			this->button2->TabIndex = 1;
			this->button2->Text = L"公布分数";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Mark::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Yellow;
			this->button3->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->ForeColor = System::Drawing::Color::Red;
			this->button3->Location = System::Drawing::Point(592, 704);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(60, 24);
			this->button3->TabIndex = 2;
			this->button3->Text = L"返回";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Mark::button3_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Red;
			this->pictureBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(2, 16);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(180, 206);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(2, 16);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(180, 206);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 5;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(2, 16);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(180, 206);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 6;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(2, 16);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(180, 206);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 7;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(2, 16);
			this->pictureBox6->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(180, 206);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 8;
			this->pictureBox6->TabStop = false;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->BackColor = System::Drawing::SystemColors::HotTrack;
			this->numericUpDown2->ForeColor = System::Drawing::SystemColors::Window;
			this->numericUpDown2->Location = System::Drawing::Point(408, 376);
			this->numericUpDown2->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(184, 21);
			this->numericUpDown2->TabIndex = 10;
			this->numericUpDown2->ValueChanged += gcnew System::EventHandler(this, &Mark::numericUpDown1_ValueChanged);
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->BackColor = System::Drawing::SystemColors::HotTrack;
			this->numericUpDown3->ForeColor = System::Drawing::SystemColors::Window;
			this->numericUpDown3->Location = System::Drawing::Point(680, 376);
			this->numericUpDown3->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(184, 21);
			this->numericUpDown3->TabIndex = 11;
			this->numericUpDown3->ValueChanged += gcnew System::EventHandler(this, &Mark::numericUpDown1_ValueChanged);
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->BackColor = System::Drawing::SystemColors::HotTrack;
			this->numericUpDown4->ForeColor = System::Drawing::SystemColors::Window;
			this->numericUpDown4->Location = System::Drawing::Point(136, 648);
			this->numericUpDown4->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(184, 21);
			this->numericUpDown4->TabIndex = 12;
			this->numericUpDown4->ValueChanged += gcnew System::EventHandler(this, &Mark::numericUpDown1_ValueChanged);
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->BackColor = System::Drawing::SystemColors::HotTrack;
			this->numericUpDown5->ForeColor = System::Drawing::SystemColors::Window;
			this->numericUpDown5->Location = System::Drawing::Point(408, 648);
			this->numericUpDown5->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(184, 21);
			this->numericUpDown5->TabIndex = 13;
			this->numericUpDown5->ValueChanged += gcnew System::EventHandler(this, &Mark::numericUpDown1_ValueChanged);
			// 
			// numericUpDown6
			// 
			this->numericUpDown6->BackColor = System::Drawing::SystemColors::HotTrack;
			this->numericUpDown6->ForeColor = System::Drawing::SystemColors::Window;
			this->numericUpDown6->Location = System::Drawing::Point(680, 648);
			this->numericUpDown6->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown6->Name = L"numericUpDown6";
			this->numericUpDown6->Size = System::Drawing::Size(184, 21);
			this->numericUpDown6->TabIndex = 14;
			this->numericUpDown6->ValueChanged += gcnew System::EventHandler(this, &Mark::numericUpDown1_ValueChanged);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Red;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::Color::Yellow;
			this->label1->Location = System::Drawing::Point(752, 16);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(152, 32);
			this->label1->TabIndex = 15;
			this->label1->Text = L"评委打分界面说明";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(2, 16);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(180, 206);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 16;
			this->pictureBox1->TabStop = false;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->BackColor = System::Drawing::SystemColors::HotTrack;
			this->numericUpDown1->ForeColor = System::Drawing::SystemColors::Window;
			this->numericUpDown1->Location = System::Drawing::Point(136, 376);
			this->numericUpDown1->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(186, 21);
			this->numericUpDown1->TabIndex = 17;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &Mark::numericUpDown1_ValueChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Red;
			this->groupBox1->Controls->Add(this->pictureBox1);
			this->groupBox1->Location = System::Drawing::Point(136, 152);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2);
			this->groupBox1->Size = System::Drawing::Size(184, 224);
			this->groupBox1->TabIndex = 18;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"groupBox1";
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::Red;
			this->groupBox2->Controls->Add(this->pictureBox2);
			this->groupBox2->Location = System::Drawing::Point(408, 152);
			this->groupBox2->Margin = System::Windows::Forms::Padding(2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(2);
			this->groupBox2->Size = System::Drawing::Size(184, 224);
			this->groupBox2->TabIndex = 19;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"groupBox2";
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::Red;
			this->groupBox3->Controls->Add(this->pictureBox4);
			this->groupBox3->Location = System::Drawing::Point(680, 152);
			this->groupBox3->Margin = System::Windows::Forms::Padding(2);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(2);
			this->groupBox3->Size = System::Drawing::Size(184, 224);
			this->groupBox3->TabIndex = 20;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"groupBox3";
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::Color::Red;
			this->groupBox4->Controls->Add(this->pictureBox3);
			this->groupBox4->Location = System::Drawing::Point(136, 424);
			this->groupBox4->Margin = System::Windows::Forms::Padding(2);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Padding = System::Windows::Forms::Padding(2);
			this->groupBox4->Size = System::Drawing::Size(184, 224);
			this->groupBox4->TabIndex = 21;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"groupBox4";
			// 
			// groupBox5
			// 
			this->groupBox5->BackColor = System::Drawing::Color::Red;
			this->groupBox5->Controls->Add(this->pictureBox5);
			this->groupBox5->Location = System::Drawing::Point(408, 424);
			this->groupBox5->Margin = System::Windows::Forms::Padding(2);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Padding = System::Windows::Forms::Padding(2);
			this->groupBox5->Size = System::Drawing::Size(184, 224);
			this->groupBox5->TabIndex = 22;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"groupBox5";
			// 
			// groupBox6
			// 
			this->groupBox6->BackColor = System::Drawing::Color::Red;
			this->groupBox6->Controls->Add(this->pictureBox6);
			this->groupBox6->Location = System::Drawing::Point(680, 424);
			this->groupBox6->Margin = System::Windows::Forms::Padding(2);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Padding = System::Windows::Forms::Padding(2);
			this->groupBox6->Size = System::Drawing::Size(184, 224);
			this->groupBox6->TabIndex = 23;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"groupBox6";
			this->groupBox6->Enter += gcnew System::EventHandler(this, &Mark::groupBox6_Enter);
			// 
			// Mark
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1020, 741);
			this->Controls->Add(this->numericUpDown4);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->numericUpDown5);
			this->Controls->Add(this->numericUpDown3);
			this->Controls->Add(this->numericUpDown6);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Mark";
			this->Text = L"评分";
			this->Load += gcnew System::EventHandler(this, &Mark::Mark_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox5->ResumeLayout(false);
			this->groupBox6->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		int i, j, k;
		public:int xuanshou;
		public:Stu ^thestu;

	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}

			 //打开publish，实现名字，成绩同步显示
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		Pubish^ publish = gcnew Pubish;
		Score^ score = gcnew Score;
		for (int i = 0; i < 6; i++)
		{
			thestu->fScore[6] = thestu->fScore[6] + thestu->fScore[i];
		}
		thestu->fScore[6] = (thestu->fScore[6] - thestu->fScore[j] - thestu->fScore[k])/4;
		publish->label2->Text = thestu->fScore[6].ToString();
		publish->label1->Text = this->label1->Text;

		thestu->gScore[xuanshou] = thestu->fScore[6];
	
		
		publish->ShowDialog();
		
		
	}
			
private: System::Void Mark_Load(System::Object^  sender, System::EventArgs^  e) {
	
}
		 //评分数值改变
private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	thestu->fScore[0] = Single::Parse(this->numericUpDown1->Text);
	thestu->fScore[1] = Single::Parse(this->numericUpDown2->Text);
	thestu->fScore[2] = Single::Parse(this->numericUpDown3->Text);
	thestu->fScore[3] = Single::Parse(this->numericUpDown4->Text);
	thestu->fScore[4] = Single::Parse(this->numericUpDown5->Text);
	thestu->fScore[5] = Single::Parse(this->numericUpDown6->Text);
}

		 //显示最大最小值
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	Color color1,color2;
	color1 = Color::FromArgb(200, 0, 0);
		color2 = Color::FromArgb(0, 200, 0);
		
		float n = thestu->fScore[0];
		
		n = thestu->fScore[0];
		//找最大值，显示红色
		for ( i = 0; i < 6; i++)
		{
			if (n < thestu->fScore[i])
			{
				n = thestu->fScore[i];
				j = i;
			}
		}
		switch (j)
		{
		case 0:this->groupBox1->BackColor = color1; break;
		case 1:this->groupBox2->BackColor = color1; break; 
		case 2:this->groupBox3->BackColor = color1; break;
		case 3:this->groupBox4->BackColor = color1; break;
		case 4:this->groupBox5->BackColor = color1; break;
		case 5:this->groupBox6->BackColor = color1; break;
		default:
			break;
		}
		//找最小值，显示绿色
		for (i = 0; i < 6; i++)
		{
			if (n > thestu->fScore[i])
			{
				n = thestu->fScore[i];
				k= i;
			}
		}
		switch (k)
		{
		case 0:this->groupBox1->BackColor = color2; break;
		case 1:this->groupBox2->BackColor = color2; break;
		case 2:this->groupBox3->BackColor = color2; break;
		case 3:this->groupBox4->BackColor = color2; break;
		case 4:this->groupBox5->BackColor = color2; break;
		case 5:this->groupBox6->BackColor = color2; break;
		default:
			break;
		}
}
private: System::Void groupBox6_Enter(System::Object^  sender, System::EventArgs^  e) {
}
};
}
