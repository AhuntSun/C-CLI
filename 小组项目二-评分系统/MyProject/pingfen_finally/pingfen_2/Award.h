#pragma once

namespace pingfen_2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Award 摘要
	/// </summary>
	public ref class Award : public System::Windows::Forms::Form
	{
	public:
		Award(void)
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
		~Award()
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Award::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Yellow;
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->ForeColor = System::Drawing::Color::Red;
			this->button1->Location = System::Drawing::Point(312, 712);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(60, 24);
			this->button1->TabIndex = 0;
			this->button1->Text = L"一等奖";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Yellow;
			this->button2->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->ForeColor = System::Drawing::Color::Red;
			this->button2->Location = System::Drawing::Point(400, 712);
			this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(60, 24);
			this->button2->TabIndex = 1;
			this->button2->Text = L"一等奖";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Yellow;
			this->button3->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->ForeColor = System::Drawing::Color::Red;
			this->button3->Location = System::Drawing::Point(496, 712);
			this->button3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(60, 24);
			this->button3->TabIndex = 2;
			this->button3->Text = L"一等奖";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Yellow;
			this->button4->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button4->ForeColor = System::Drawing::Color::Red;
			this->button4->Location = System::Drawing::Point(584, 712);
			this->button4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(60, 24);
			this->button4->TabIndex = 3;
			this->button4->Text = L"返回";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Award::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Red;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button5->ForeColor = System::Drawing::Color::Yellow;
			this->button5->Location = System::Drawing::Point(728, 24);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(144, 32);
			this->button5->TabIndex = 4;
			this->button5->Text = L"颁奖界面说明";
			this->button5->UseVisualStyleBackColor = false;
			// 
			// Award
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1020, 741);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"Award";
			this->Text = L"Award";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	};
}
