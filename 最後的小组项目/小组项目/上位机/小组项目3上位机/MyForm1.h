#pragma once

namespace 小组项目3上位机 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm1 摘要
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::ComboBox^  comboBox4;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(25, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 15);
			this->label1->TabIndex = 0;
			this->label1->Text = L"串口";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(25, 117);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 15);
			this->label2->TabIndex = 1;
			this->label2->Text = L"波特率";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(25, 179);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 15);
			this->label3->TabIndex = 2;
			this->label3->Text = L"数据位";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(25, 249);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(52, 15);
			this->label4->TabIndex = 3;
			this->label4->Text = L"停止位";
			// 
			// comboBox1
			// 
			this->comboBox1->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(2) { L"Com1", L"Com2" });
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(106, 47);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(135, 23);
			this->comboBox1->TabIndex = 4;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"9600", L"12000" });
			this->comboBox2->Location = System::Drawing::Point(106, 114);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(135, 23);
			this->comboBox2->TabIndex = 5;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"8", L"16" });
			this->comboBox3->Location = System::Drawing::Point(106, 179);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(135, 23);
			this->comboBox3->TabIndex = 6;
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"0", L"1", L"2" });
			this->comboBox4->Location = System::Drawing::Point(106, 249);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(135, 23);
			this->comboBox4->TabIndex = 7;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(289, 353);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm1_Load(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
