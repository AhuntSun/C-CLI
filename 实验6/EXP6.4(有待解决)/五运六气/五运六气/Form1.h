#pragma once
#include "ImageForm.h"

namespace �������� {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Form1 ժҪ
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
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
		/// ����������������
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����֧������ķ��� - ��Ҫ
		/// ʹ�ô���༭���޸Ĵ˷��������ݡ�
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
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(104, 8);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(318, 21);
			this->label1->TabIndex = 0;
			this->label1->Text = L"��ͨ�����������������μã�";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"����", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->ForeColor = System::Drawing::Color::Fuchsia;
			this->button1->Location = System::Drawing::Point(72, 104);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(56, 32);
			this->button1->TabIndex = 1;
			this->button1->Text = L"����";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label2->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->ForeColor = System::Drawing::Color::Blue;
			this->label2->Location = System::Drawing::Point(72, 56);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(102, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"��ѡ������:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label3->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(312, 64);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 16);
			this->label3->TabIndex = 3;
			this->label3->Text = L"��ǰֵ";
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
			this->button5->Font = (gcnew System::Drawing::Font(L"����", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button5->ForeColor = System::Drawing::Color::Orange;
			this->button5->Location = System::Drawing::Point(72, 160);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(160, 32);
			this->button5->TabIndex = 8;
			this->button5->Text = L"��������С�������";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"����", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->ForeColor = System::Drawing::Color::Fuchsia;
			this->button2->Location = System::Drawing::Point(136, 104);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(56, 32);
			this->button2->TabIndex = 9;
			this->button2->Text = L"����";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"����", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->ForeColor = System::Drawing::Color::Fuchsia;
			this->button3->Location = System::Drawing::Point(200, 104);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(56, 32);
			this->button3->TabIndex = 10;
			this->button3->Text = L"���";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"����", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button4->ForeColor = System::Drawing::Color::Fuchsia;
			this->button4->Location = System::Drawing::Point(264, 104);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(56, 32);
			this->button4->TabIndex = 11;
			this->button4->Text = L"��֧";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"����", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button6->ForeColor = System::Drawing::Color::Orange;
			this->button6->Location = System::Drawing::Point(280, 160);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(160, 32);
			this->button6->TabIndex = 12;
			this->button6->Text = L"ʱ����������������";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"����", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button7->ForeColor = System::Drawing::Color::Orange;
			this->button7->Location = System::Drawing::Point(72, 208);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(160, 32);
			this->button7->TabIndex = 13;
			this->button7->Text = L"��֧�����С�������";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"����", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button8->ForeColor = System::Drawing::Color::Orange;
			this->button8->Location = System::Drawing::Point(280, 208);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(160, 32);
			this->button8->TabIndex = 14;
			this->button8->Text = L"�����仯����";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"����", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button9->ForeColor = System::Drawing::Color::Magenta;
			this->button9->Location = System::Drawing::Point(144, 256);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(88, 32);
			this->button9->TabIndex = 15;
			this->button9->Text = L"���ļ�";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"����", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button10->ForeColor = System::Drawing::SystemColors::InfoText;
			this->button10->Location = System::Drawing::Point(264, 256);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(88, 32);
			this->button10->TabIndex = 16;
			this->button10->Text = L"�˳�";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"����", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox1->Location = System::Drawing::Point(328, 104);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(104, 32);
			this->textBox1->TabIndex = 17;
			this->textBox1->Text = L"��ǰֵ";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->InitialDirectory = L"F:\\��ֽ\\��Pվ��ͼ������֮�б�ֽ�ؼ�";
			this->openFileDialog1->Title = L"ͼƬѡ��";
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
			this->Text = L"��������";
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
	MessageBox::Show(L"���ˣ���ơ���������ָľ����������ˮ\r\n����֮��������׶ε�����ؼ��໥���ơ����б仯��\r\n���������ˡ����ˡ����˵Ĳ�ͬ��", "����");
	textBox1->Text = "��ѡ����ǡ�ȷ����";
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	rebnt = MessageBox::Show(L"������ָ�硢�ȣ������ʪ����������������ת�䡣\r\n������Ϊ�����������������������֣������ⳣ��������䡣 \r\n������������һ�ֳ����ϵ��ۺϷ���������", "����",

		MessageBoxButtons::AbortRetryIgnore, MessageBoxIcon::Information);

	if (System::Windows::Forms::DialogResult::Abort == rebnt)

		textBox1->Text = "��ѡ����ǡ���ֹ��";
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

		MessageBox::Show(L"���Ƿ����Ҫ�˳���",

		L"ȷ��", 				/*����*/

		buttons,				/*��ť*/

		MessageBoxIcon::Question, 		/*ͼ��*/

		MessageBoxDefaultButton::Button1	/*Ĭ�ϰ�ť*/))

		this->Close();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	rebnt = MessageBox::Show(L"�ס� �ҡ����������졢�������������ɡ��\r\n��ʮ��ɶ����ˡ�", "ʮ���");
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	rebnt = MessageBox::Show(L"�ӡ�������î�������ѡ��硢δ���ꡢ�ϡ��硢��, \r\n����ʮ����֧������ ��", "ʮ����֧");
}
private: System::Void Form1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
//	MessageBoxButtons buttons = MessageBoxButtons::YesNo;
//
//	if (System::Windows::Forms::DialogResult::No ==
//
//		MessageBox::Show(L"���Ƿ����Ҫ�˳���",
//
//		L"ȷ��", 				/*����*/
//
//		buttons,				/*��ť*/
//
//		MessageBoxIcon::Question, 		/*ͼ��*/
//
//		MessageBoxDefaultButton::Button1	/*Ĭ�ϰ�ť*/))
//
//		Application::Exit();
}
};
}

