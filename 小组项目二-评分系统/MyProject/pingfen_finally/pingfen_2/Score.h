#include"Rank.h"
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
	/// Score 摘要
	/// </summary>
	public ref class Score : public System::Windows::Forms::Form
	{
	public:
		Score(void)
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
		~Score()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	public: System::Windows::Forms::Label^  label3;
	public: System::Windows::Forms::Label^  label4;
	public: System::Windows::Forms::Label^  label5;
	public: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button4;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Score::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Yellow;
			this->label1->Enabled = false;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(408, 184);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(224, 100);
			this->label1->TabIndex = 0;
			this->label1->Text = L"选手X";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Yellow;
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->ForeColor = System::Drawing::Color::Red;
			this->label2->Location = System::Drawing::Point(424, 360);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(184, 208);
			this->label2->TabIndex = 1;
			this->label2->Text = L"分数";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Yellow;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Location = System::Drawing::Point(348, 624);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 24);
			this->label3->TabIndex = 2;
			this->label3->Text = L"选手1";
			this->label3->Click += gcnew System::EventHandler(this, &Score::label3_Click);
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Yellow;
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->ForeColor = System::Drawing::Color::Red;
			this->label4->Location = System::Drawing::Point(415, 624);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 24);
			this->label4->TabIndex = 3;
			this->label4->Text = L"选手2";
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::Yellow;
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->ForeColor = System::Drawing::Color::Red;
			this->label5->Location = System::Drawing::Point(484, 624);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(60, 24);
			this->label5->TabIndex = 4;
			this->label5->Text = L"选手1";
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::Yellow;
			this->label6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->ForeColor = System::Drawing::Color::Red;
			this->label6->Location = System::Drawing::Point(568, 624);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(60, 24);
			this->label6->TabIndex = 5;
			this->label6->Text = L"选手1";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Yellow;
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->ForeColor = System::Drawing::Color::Red;
			this->button1->Location = System::Drawing::Point(400, 712);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(60, 24);
			this->button1->TabIndex = 6;
			this->button1->Text = L"排行榜";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Score::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Yellow;
			this->button2->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->ForeColor = System::Drawing::Color::Red;
			this->button2->Location = System::Drawing::Point(496, 712);
			this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(60, 24);
			this->button2->TabIndex = 7;
			this->button2->Text = L"返回";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Score::button2_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Red;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button4->ForeColor = System::Drawing::Color::Yellow;
			this->button4->Location = System::Drawing::Point(712, 16);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(144, 32);
			this->button4->TabIndex = 8;
			this->button4->Text = L"分数查阅说明";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// Score
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1020, 741);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"Score";
			this->Text = L"成绩";
			this->Load += gcnew System::EventHandler(this, &Score::Score_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
		public:Stu ^thestu;
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Rank^ rank = gcnew Rank;
		rank->ShowDialog();
	}
private: System::Void Score_Load(System::Object^  sender, System::EventArgs^  e) {
	this->label3->Text = thestu->strName[0];
	this->label4->Text = thestu->strName[1];
	this->label5->Text = thestu->strName[2];
	this->label6->Text = thestu->strName[3];
}

		 //单击选手名字，显示选手名字和成绩
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	this->label1->Text = label3->Text;
	this->label2->Text = thestu->gScore[0].ToString();
}

		 //关闭窗口
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
};
}
