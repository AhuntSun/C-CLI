#pragma once
#include "ImageForm.h"

namespace 五运六气 {
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
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::LightGray;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(104, 8);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(318, 21);
			this->label1->TabIndex = 0;
			this->label1->Text = L"不通五运六气，遍读方书何济？";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->ForeColor = System::Drawing::Color::Fuchsia;
			this->button1->Location = System::Drawing::Point(72, 104);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(56, 32);
			this->button1->TabIndex = 1;
			this->button1->Text = L"五运";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->ForeColor = System::Drawing::Color::Blue;
			this->label2->Location = System::Drawing::Point(72, 56);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(102, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"请选择日期:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(312, 64);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 16);
			this->label3->TabIndex = 3;
			this->label3->Text = L"当前值";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(176, 56);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(128, 21);
			this->dateTimePicker1->TabIndex = 4;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &Form1::dateTimePicker1_ValueChanged);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button5->ForeColor = System::Drawing::Color::Orange;
			this->button5->Location = System::Drawing::Point(72, 160);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(160, 32);
			this->button5->TabIndex = 8;
			this->button5->Text = L"天干配五行、化五运";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->ForeColor = System::Drawing::Color::Fuchsia;
			this->button2->Location = System::Drawing::Point(136, 104);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(56, 32);
			this->button2->TabIndex = 9;
			this->button2->Text = L"六气";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->ForeColor = System::Drawing::Color::Fuchsia;
			this->button3->Location = System::Drawing::Point(200, 104);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(56, 32);
			this->button3->TabIndex = 10;
			this->button3->Text = L"天干";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button4->ForeColor = System::Drawing::Color::Fuchsia;
			this->button4->Location = System::Drawing::Point(264, 104);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(56, 32);
			this->button4->TabIndex = 11;
			this->button4->Text = L"地支";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button6->ForeColor = System::Drawing::Color::Orange;
			this->button6->Location = System::Drawing::Point(280, 160);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(160, 32);
			this->button6->TabIndex = 12;
			this->button6->Text = L"时辰配五行五运六气";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button7->ForeColor = System::Drawing::Color::Orange;
			this->button7->Location = System::Drawing::Point(72, 208);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(160, 32);
			this->button7->TabIndex = 13;
			this->button7->Text = L"地支化五行、化六气";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button8->ForeColor = System::Drawing::Color::Orange;
			this->button8->Location = System::Drawing::Point(280, 208);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(160, 32);
			this->button8->TabIndex = 14;
			this->button8->Text = L"运气变化周期";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button9->ForeColor = System::Drawing::Color::Magenta;
			this->button9->Location = System::Drawing::Point(144, 256);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(88, 32);
			this->button9->TabIndex = 15;
			this->button9->Text = L"打开文件";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button10->ForeColor = System::Drawing::SystemColors::InfoText;
			this->button10->Location = System::Drawing::Point(264, 256);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(88, 32);
			this->button10->TabIndex = 16;
			this->button10->Text = L"退出";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"宋体", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox1->Location = System::Drawing::Point(328, 104);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(104, 32);
			this->textBox1->TabIndex = 17;
			this->textBox1->Text = L"当前值";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->InitialDirectory = L"F:\\壁纸\\【P站美图】鬼灭之刃壁纸特辑";
			this->openFileDialog1->Title = L"图片选择";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(545, 327);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"五运六气";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		label3->Text = this->dateTimePicker1->Value.ToString();
	}

			 System::Windows::Forms::DialogResult rebnt;
		
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show(L"五运，简称“运气”。指木、火、土、金、水\r\n五行之气的五个阶段的在天地间相互推移、运行变化。\r\n五运有岁运、主运、客运的不同。", "五运");
	textBox1->Text = "你选择的是“确定”";
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	rebnt = MessageBox::Show(L"六气，指风、热（暑）、火、湿、燥、寒等六种气候的转变。\r\n六气分为主气、客气、客主加临三种，主气测常，客气测变。 \r\n客主加临则是一种常变结合的综合分析方法。", "六气",

		MessageBoxButtons::AbortRetryIgnore, MessageBoxIcon::Information);

	if (System::Windows::Forms::DialogResult::Abort == rebnt)

		textBox1->Text = "你选择的是“中止”";
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	ImageForm^dlg = gcnew ImageForm();
	dlg->num = 1;
	dlg->ShowDialog();
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	ImageForm^dlg = gcnew ImageForm();

	dlg->num = 2;

	dlg->ShowDialog();
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	ImageForm^dlg = gcnew ImageForm();

	dlg->num = 3;

	dlg->ShowDialog();
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	ImageForm^dlg = gcnew ImageForm();

	dlg->num = 4;

	dlg->ShowDialog();
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	OpenFileDialog^dlg = gcnew OpenFileDialog();
	if (dlg->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
	this->openFileDialog1->ShowDialog();
		System::Diagnostics::Process::Start(openFileDialog1->FileName);
	}
	/*else
	{
		this->Close();
	}*/
	}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBoxButtons buttons = MessageBoxButtons::YesNo;

	if (System::Windows::Forms::DialogResult::Yes ==

		MessageBox::Show(L"你是否真的要退出？",

		L"确认", 				/*标题*/

		buttons,				/*按钮*/

		MessageBoxIcon::Question, 		/*图标*/

		MessageBoxDefaultButton::Button1	/*默认按钮*/))

		this->Close();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	rebnt = MessageBox::Show(L"甲、 乙、丙、丁、戊、己、庚、辛、壬、癸，\r\n以十天干定“运”", "十天干");
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	rebnt = MessageBox::Show(L"子、丑、寅、卯、辰、已、午、未、申、酉、戌、亥, \r\n以这十二地支定“气 ”", "十二地支");
}
private: System::Void Form1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
//	MessageBoxButtons buttons = MessageBoxButtons::YesNo;
//
//	if (System::Windows::Forms::DialogResult::No ==
//
//		MessageBox::Show(L"你是否真的要退出？",
//
//		L"确认", 				/*标题*/
//
//		buttons,				/*按钮*/
//
//		MessageBoxIcon::Question, 		/*图标*/
//
//		MessageBoxDefaultButton::Button1	/*默认按钮*/))
//
//		Application::Exit();
}
};
}

