#include"Mark.h"
#include"Stu.h"
#include"Start_sm.h"
#pragma once

namespace pingfen_2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Start 摘要
	/// </summary>
	public ref class Start : public System::Windows::Forms::Form
	{
	public:
		Start(void)
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
		~Start()
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
	private: System::Windows::Forms::TabControl^  tabControl1;
	public: System::Windows::Forms::TabPage^  tabPage1;//公有，记录选手名字
	public: System::Windows::Forms::TabPage^  tabPage2;
	public: System::Windows::Forms::TabPage^  tabPage3;
	public: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Start::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Yellow;
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->ForeColor = System::Drawing::Color::Red;
			this->button1->Location = System::Drawing::Point(789, 880);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 30);
			this->button1->TabIndex = 0;
			this->button1->Text = L"计时";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Start::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(494, 510);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(92, 31);
			this->button2->TabIndex = 1;
			this->button2->Text = L"评分";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Start::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Yellow;
			this->button3->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->ForeColor = System::Drawing::Color::Red;
			this->button3->Location = System::Drawing::Point(544, 880);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(80, 30);
			this->button3->TabIndex = 2;
			this->button3->Text = L"返回";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Start::button3_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Location = System::Drawing::Point(267, 160);
			this->tabControl1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(597, 570);
			this->tabControl1->TabIndex = 7;
			// 
			// tabPage1
			// 
			this->tabPage1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage1.BackgroundImage")));
			this->tabPage1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage1->Controls->Add(this->pictureBox2);
			this->tabPage1->Controls->Add(this->button4);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage1->Size = System::Drawing::Size(589, 541);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"选手1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(128, 74);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(388, 398);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Yellow;
			this->button4->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button4->ForeColor = System::Drawing::Color::Red;
			this->button4->Location = System::Drawing::Point(491, 507);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(80, 30);
			this->button4->TabIndex = 0;
			this->button4->Text = L"评分";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Start::button4_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::Coral;
			this->tabPage2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage2.BackgroundImage")));
			this->tabPage2->Controls->Add(this->pictureBox3);
			this->tabPage2->Controls->Add(this->button5);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage2->Size = System::Drawing::Size(589, 541);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"选手2";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(64, 41);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(454, 453);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 1;
			this->pictureBox3->TabStop = false;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(524, 507);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(59, 30);
			this->button5->TabIndex = 0;
			this->button5->Text = L"评分";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Start::button5_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->tabPage3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage3.BackgroundImage")));
			this->tabPage3->Controls->Add(this->pictureBox4);
			this->tabPage3->Controls->Add(this->button2);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(589, 541);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"选手3";
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(65, 59);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(461, 352);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 2;
			this->pictureBox4->TabStop = false;
			// 
			// tabPage4
			// 
			this->tabPage4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->tabPage4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage4.BackgroundImage")));
			this->tabPage4->Controls->Add(this->pictureBox5);
			this->tabPage4->Controls->Add(this->button6);
			this->tabPage4->Location = System::Drawing::Point(4, 25);
			this->tabPage4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(589, 541);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"选手4";
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(63, 47);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(469, 436);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 1;
			this->pictureBox5->TabStop = false;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(531, 510);
			this->button6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(55, 29);
			this->button6->TabIndex = 0;
			this->button6->Text = L"评分";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Start::button6_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Start::timer1_Tick);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(75, 70);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(125, 80);
			this->label1->TabIndex = 8;
			this->label1->Text = L"计时";
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Yellow;
			this->button7->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button7->ForeColor = System::Drawing::Color::Red;
			this->button7->Location = System::Drawing::Point(672, 880);
			this->button7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(80, 30);
			this->button7->TabIndex = 9;
			this->button7->Text = L"button7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Start::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Red;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button8->ForeColor = System::Drawing::Color::Yellow;
			this->button8->Location = System::Drawing::Point(981, 20);
			this->button8->Margin = System::Windows::Forms::Padding(4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(192, 40);
			this->button8->TabIndex = 10;
			this->button8->Text = L"表演界面说明";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Start::button8_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(4, 22);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(248, 189);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Red;
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->pictureBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(992, 650);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(256, 215);
			this->groupBox1->TabIndex = 12;
			this->groupBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(63, 97);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(137, 38);
			this->label2->TabIndex = 12;
			this->label2->Text = L"label2";
			this->label2->Click += gcnew System::EventHandler(this, &Start::label2_Click);
			// 
			// Start
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1360, 926);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Start";
			this->Text = L"比赛开始";
			this->Load += gcnew System::EventHandler(this, &Start::Start_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->tabPage4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		
		//打开评分窗体
		public:Stu ^thestu;
			   int sec, min=0;
		public: array <Stu^>^ stu = gcnew array<Stu^>(4);//记录选手
		
			  //选手1评分按钮
		private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			Mark^ mark = gcnew Mark;
			mark->thestu = thestu;
			mark->label1->Text =thestu->strName[0];//在Mark窗体显示被评分的选手名
			mark->xuanshou = 0;//选定选手1
			mark->ShowDialog();
			

		}

				 //选手3
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		Mark^ mark = gcnew Mark;
		mark->label1->Text = this->tabPage3->Text;//在Mark窗体显示被评分的选手名
		mark->xuanshou = 2;//选定选手3
		mark->ShowDialog();
		
	}
			 //关闭窗口
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
//选手2
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	Mark^ mark = gcnew Mark;
	mark->label1->Text = this->tabPage2->Text;//在Mark窗体显示被评分的选手名
	mark->xuanshou = 1;//选定选手2
	mark->ShowDialog();
	
}
//选手4
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	Mark^ mark = gcnew Mark;
	mark->label1->Text = this->tabPage4->Text;//在Mark窗体显示被评分的选手名
	mark->xuanshou = 3;//选定选手4
	mark->ShowDialog(); 
	
}
		

private: System::Void Start_Load(System::Object^  sender, System::EventArgs^  e) {
	
		//this->tabPage1->Text = stu_start[0]->strName;

}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	
}

private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	sec++;

	if (sec >= 59)
	{
		min++;
		sec = 0;
		if (min >= 10)
		{
			min = 0;
			timer1->Stop();
		}
	}
	this->label2->Text = String::Concat(min.ToString(L"00"),L":", sec.ToString(L"00"));

	//ToString中的L"00"是一个自定义格式字符串，用来将整数按两位显示

}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	timer1->Start();
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	sec = min = 0;
	this->label2->Text = String::Concat(min.ToString(L"00"), L":", sec.ToString(L"00"));
	timer1->Stop();
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	Start_sm^ start_sm = gcnew Start_sm;
	start_sm->ShowDialog();
}
};
}
