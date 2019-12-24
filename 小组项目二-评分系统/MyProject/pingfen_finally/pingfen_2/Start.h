#include"Mark.h"
#include"Stu.h"
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
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->tabControl1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
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
			this->button1->Location = System::Drawing::Point(592, 704);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(60, 24);
			this->button1->TabIndex = 0;
			this->button1->Text = L"计时";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(173, 207);
			this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(69, 25);
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
			this->button3->Location = System::Drawing::Point(408, 704);
			this->button3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(60, 24);
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
			this->tabControl1->Location = System::Drawing::Point(200, 128);
			this->tabControl1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(448, 456);
			this->tabControl1->TabIndex = 7;
			// 
			// tabPage1
			// 
			this->tabPage1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage1.BackgroundImage")));
			this->tabPage1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabPage1->Size = System::Drawing::Size(440, 430);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"董大";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Yellow;
			this->button4->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button4->ForeColor = System::Drawing::Color::Red;
			this->button4->Location = System::Drawing::Point(320, 704);
			this->button4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(60, 24);
			this->button4->TabIndex = 0;
			this->button4->Text = L"评分";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Start::button4_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button5);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabPage2->Size = System::Drawing::Size(440, 430);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"董二";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(200, 210);
			this->button5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(44, 24);
			this->button5->TabIndex = 0;
			this->button5->Text = L"评分";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Start::button5_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->button2);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(242, 232);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"董三";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->button6);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(242, 232);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"董四";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(202, 203);
			this->button6->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(41, 23);
			this->button6->TabIndex = 0;
			this->button6->Text = L"评分";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Start::button6_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(56, 56);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(94, 64);
			this->label1->TabIndex = 8;
			this->label1->Text = L"计时";
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Yellow;
			this->button7->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button7->ForeColor = System::Drawing::Color::Red;
			this->button7->Location = System::Drawing::Point(504, 704);
			this->button7->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(60, 24);
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
			this->button8->Location = System::Drawing::Point(736, 16);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(144, 32);
			this->button8->TabIndex = 10;
			this->button8->Text = L"表演界面说明";
			this->button8->UseVisualStyleBackColor = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, 17);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(186, 152);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Red;
			this->groupBox1->Controls->Add(this->pictureBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(744, 520);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(192, 172);
			this->groupBox1->TabIndex = 12;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"groupBox1";
			// 
			// Start
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1020, 741);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"Start";
			this->Text = L"比赛开始";
			this->Load += gcnew System::EventHandler(this, &Start::Start_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		
		//打开评分窗体
		public:Stu ^thestu;
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
};
}
