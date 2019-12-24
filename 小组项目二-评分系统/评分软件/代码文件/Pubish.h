#pragma once
#include "Stu.h"
#include"Score.h"
#include"Publish_sm.h"
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
			this->label1->Location = System::Drawing::Point(501, 440);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(363, 240);
			this->label1->TabIndex = 0;
			this->label1->Text = L"分数";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(129, 502);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(122, 55);
			this->label2->TabIndex = 1;
			this->label2->Text = L"选手";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Red;
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->ForeColor = System::Drawing::Color::Yellow;
			this->button1->Location = System::Drawing::Point(565, 870);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(181, 48);
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
			this->button4->Location = System::Drawing::Point(939, 20);
			this->button4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(192, 40);
			this->button4->TabIndex = 5;
			this->button4->Text = L"最后得分说明";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Pubish::button4_Click);
			// 
			// Pubish
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1360, 926);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->DoubleBuffered = true;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Pubish";
			this->Text = L"公布分数";
			this->Load += gcnew System::EventHandler(this, &Pubish::Pubish_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Score ^score = gcnew Score;
		score->Show();
		this->Close();

	}
	private: System::Void Pubish_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		Publish_sm^ publish_sm = gcnew Publish_sm;
		publish_sm->ShowDialog();
	}
};
}
