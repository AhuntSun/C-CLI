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
	/// Score ժҪ
	/// </summary>
	public ref class Score : public System::Windows::Forms::Form
	{
	public:
		Score(void)
		{
			InitializeComponent();
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Score::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Yellow;
			this->label1->Enabled = false;
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(544, 230);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(299, 125);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ѡ��X";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Yellow;
			this->label2->Font = (gcnew System::Drawing::Font(L"����", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->ForeColor = System::Drawing::Color::Red;
			this->label2->Location = System::Drawing::Point(565, 450);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(245, 260);
			this->label2->TabIndex = 1;
			this->label2->Text = L"����";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Yellow;
			this->label3->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Location = System::Drawing::Point(464, 780);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 30);
			this->label3->TabIndex = 2;
			this->label3->Text = L"ѡ��1";
			this->label3->Click += gcnew System::EventHandler(this, &Score::label3_Click);
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Yellow;
			this->label4->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->ForeColor = System::Drawing::Color::Red;
			this->label4->Location = System::Drawing::Point(553, 780);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(80, 30);
			this->label4->TabIndex = 3;
			this->label4->Text = L"ѡ��2";
			this->label4->Click += gcnew System::EventHandler(this, &Score::label4_Click);
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::Yellow;
			this->label5->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->ForeColor = System::Drawing::Color::Red;
			this->label5->Location = System::Drawing::Point(645, 780);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(80, 30);
			this->label5->TabIndex = 4;
			this->label5->Text = L"ѡ��1";
			this->label5->Click += gcnew System::EventHandler(this, &Score::label5_Click);
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::Yellow;
			this->label6->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->ForeColor = System::Drawing::Color::Red;
			this->label6->Location = System::Drawing::Point(757, 780);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(80, 30);
			this->label6->TabIndex = 5;
			this->label6->Text = L"ѡ��1";
			this->label6->Click += gcnew System::EventHandler(this, &Score::label6_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Yellow;
			this->button1->Font = (gcnew System::Drawing::Font(L"����", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->ForeColor = System::Drawing::Color::Red;
			this->button1->Location = System::Drawing::Point(533, 890);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 30);
			this->button1->TabIndex = 6;
			this->button1->Text = L"���а�";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Score::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Yellow;
			this->button2->Font = (gcnew System::Drawing::Font(L"����", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->ForeColor = System::Drawing::Color::Red;
			this->button2->Location = System::Drawing::Point(661, 890);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(80, 30);
			this->button2->TabIndex = 7;
			this->button2->Text = L"����";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Score::button2_Click);
			// 
			// Score
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1360, 926);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Score";
			this->Text = L"�ɼ�";
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

		 //����ѡ�����֣���ʾѡ�����ֺͳɼ�
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	this->label1->Text = label3->Text;
	this->label2->Text = thestu->gScore[0].ToString();
}

		 //�رմ���
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
	this->label1->Text = label4->Text;
	this->label2->Text = thestu->gScore[1].ToString();
}
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
	this->label1->Text = label5->Text;
	this->label2->Text = thestu->gScore[2].ToString();
}
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
	this->label1->Text = label6->Text;
	this->label2->Text = thestu->gScore[3].ToString();
}
};
}
