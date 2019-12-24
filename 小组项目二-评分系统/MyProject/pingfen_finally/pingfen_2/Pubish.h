#pragma once
#include "Stu.h"
#include"Score.h"
namespace pingfen_2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Pubish 摘要
	/// </summary>
	public ref class Pubish : public System::Windows::Forms::Form
	{
	public:
		Pubish(void)
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
		~Pubish()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Label^  label1;
	protected:
	public: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Pubish::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Red;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::Color::Yellow;
			this->label1->Location = System::Drawing::Point(376, 352);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(272, 192);
			this->label1->TabIndex = 0;
			this->label1->Text = L"1321";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(165, 108);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 12);
			this->label2->TabIndex = 1;
			this->label2->Text = L"分数";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Red;
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->ForeColor = System::Drawing::Color::Yellow;
			this->button1->Location = System::Drawing::Point(424, 696);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(136, 38);
			this->button1->TabIndex = 2;
			this->button1->Text = L"返回开始比赛窗体";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Pubish::button1_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Red;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button4->ForeColor = System::Drawing::Color::Yellow;
			this->button4->Location = System::Drawing::Point(704, 16);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(144, 32);
			this->button4->TabIndex = 5;
			this->button4->Text = L"最后得分说明";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// Pubish
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1020, 741);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->DoubleBuffered = true;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"Pubish";
			this->Text = L"公布分数";
			this->Load += gcnew System::EventHandler(this, &Pubish::Pubish_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Score ^score = gcnew Score;
		score->Show();
		this->Close();

	}
	private: System::Void Pubish_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
