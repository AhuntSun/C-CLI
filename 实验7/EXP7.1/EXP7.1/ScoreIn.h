#pragma once
#include"StuScore.h"
namespace EXP71 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ScoreIn 摘要
	/// </summary>
	public ref class ScoreIn : public System::Windows::Forms::Form
	{
	public:
		ScoreIn(void)
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
		~ScoreIn()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Button^  button1;
	public: System::Windows::Forms::Label^  label1;
	public: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	public: System::Windows::Forms::Label^  label2;
	public: System::Windows::Forms::Label^  label3;
	public: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	public: System::Windows::Forms::NumericUpDown^  numericUpDown3;
	public: System::Windows::Forms::Label^  label4;
	public: System::Windows::Forms::Label^  label5;
	public:System::Windows::Forms::TextBox^  textBox1;
	public: System::Windows::Forms::TextBox^  textBox2;
	public: System::Windows::Forms::Button^  button2;
	public: System::Windows::Forms::Label^  label6;

	protected:


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ScoreIn::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(48, 240);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(56, 24);
			this->button1->TabIndex = 0;
			this->button1->Text = L"确定";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ScoreIn::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(24, 176);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(51, 16);
			this->label1->TabIndex = 3;
			this->label1->Text = L"成绩3";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(88, 176);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(80, 21);
			this->numericUpDown1->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(24, 136);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 16);
			this->label2->TabIndex = 5;
			this->label2->Text = L"成绩2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(24, 96);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(51, 16);
			this->label3->TabIndex = 6;
			this->label3->Text = L"成绩1";
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(88, 136);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(80, 21);
			this->numericUpDown2->TabIndex = 7;
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(88, 96);
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(80, 21);
			this->numericUpDown3->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(24, 56);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(42, 16);
			this->label4->TabIndex = 9;
			this->label4->Text = L"学号";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(24, 16);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(42, 16);
			this->label5->TabIndex = 10;
			this->label5->Text = L"姓名";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(72, 16);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(152, 21);
			this->textBox1->TabIndex = 11;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(72, 56);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(152, 21);
			this->textBox2->TabIndex = 12;
			// 
			// button2
			// 
			this->button2->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->Location = System::Drawing::Point(144, 240);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(56, 24);
			this->button2->TabIndex = 13;
			this->button2->Text = L"取消";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label6->Location = System::Drawing::Point(24, 216);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(216, 2);
			this->label6->TabIndex = 15;
			this->label6->Text = L"label6";
			// 
			// ScoreIn
			// 
			this->AcceptButton = this->button1;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->button2;
			this->ClientSize = System::Drawing::Size(270, 302);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->numericUpDown3);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"ScoreIn";
			this->Text = L"学生成绩输入";
			this->Load += gcnew System::EventHandler(this, &ScoreIn::ScoreIn_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public: StuScore ^theScore;
	private: System::Void ScoreIn_Load(System::Object^  sender, System::EventArgs^  e) {
		theScore = gcnew StuScore;
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	theScore->strName = this->textBox1->Text->Trim();
	theScore->strID = this->textBox2->Text->Trim();
	theScore->fScore[0] = Single::Parse(this->numericUpDown1->Text);
	theScore->fScore[1] = Single::Parse(this->numericUpDown2->Text);
	theScore->fScore[2] = Single::Parse(this->numericUpDown3->Text);
}
};
}
