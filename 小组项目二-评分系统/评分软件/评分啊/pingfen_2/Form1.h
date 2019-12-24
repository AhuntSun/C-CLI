#include"Start.h"
#include"Score.h"
#include"Award.h"
#include"Stu.h"
#include"Form_sm1.h"
#include"Form_sm2.h"

#pragma once

namespace pingfen_2 {

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
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Yellow;
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->ForeColor = System::Drawing::Color::Red;
			this->button1->Location = System::Drawing::Point(267, 880);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(107, 30);
			this->button1->TabIndex = 0;
			this->button1->Text = L"比赛开始";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Yellow;
			this->button2->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->ForeColor = System::Drawing::Color::Red;
			this->button2->Location = System::Drawing::Point(416, 880);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(80, 30);
			this->button2->TabIndex = 1;
			this->button2->Text = L"成绩";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
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
			this->button3->Text = L"排行榜";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Yellow;
			this->button4->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button4->ForeColor = System::Drawing::Color::Red;
			this->button4->Location = System::Drawing::Point(672, 880);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(80, 30);
			this->button4->TabIndex = 3;
			this->button4->Text = L"颁奖";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Yellow;
			this->button5->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button5->ForeColor = System::Drawing::Color::Red;
			this->button5->Location = System::Drawing::Point(800, 880);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(80, 30);
			this->button5->TabIndex = 4;
			this->button5->Text = L"音频";
			this->button5->UseVisualStyleBackColor = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Yellow;
			this->button6->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button6->ForeColor = System::Drawing::Color::Red;
			this->button6->Location = System::Drawing::Point(928, 880);
			this->button6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(80, 30);
			this->button6->TabIndex = 5;
			this->button6->Text = L"结束";
			this->button6->UseVisualStyleBackColor = false;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Red;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button7->ForeColor = System::Drawing::Color::Yellow;
			this->button7->Location = System::Drawing::Point(939, 20);
			this->button7->Margin = System::Windows::Forms::Padding(4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(224, 40);
			this->button7->TabIndex = 6;
			this->button7->Text = L"开始界面说明";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Red;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button8->ForeColor = System::Drawing::Color::Yellow;
			this->button8->Location = System::Drawing::Point(640, 20);
			this->button8->Margin = System::Windows::Forms::Padding(4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(235, 40);
			this->button8->TabIndex = 7;
			this->button8->Text = L"评分软件设置步骤";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1360, 926);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
				public:Stu ^thestu;

		//打开 开始窗口
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Start^ start = gcnew Start;
		
		start->thestu = thestu;
		start->tabPage1->Text = thestu->strName[0];
		start->tabPage2->Text = thestu->strName[1];
		start->tabPage3->Text = thestu->strName[2];
		start->tabPage4->Text = thestu->strName[3];
		start->ShowDialog();
		//记录选手姓名,成绩

	}

			 //各个参赛者成绩 窗口
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	Score^ score = gcnew Score;
	
	score->thestu = thestu;
	score->ShowDialog();
}

		 //排行
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		Rank^ rank = gcnew Rank;
		rank->ShowDialog();
	}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	Award^ award = gcnew Award;
	award->ShowDialog();
}
		 
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
	thestu = gcnew Stu;
	thestu->strName[0] = L"万一";
	thestu->strName[1] = L"万二";
	thestu->strName[2] = L"万三";
	thestu->strName[3] = L"万四";
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	Form_sm1^ form_sm1 = gcnew Form_sm1;
	form_sm1->ShowDialog();
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	Form_sm1^ form_sm1 = gcnew Form_sm1;
	form_sm1->ShowDialog();
}
};
}

