#pragma once
#include"StuScore.h"
#include"ScoreIn.h"

namespace EXP71 {

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
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::ListBox^  listBox1;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label2;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(216, 56);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 32);
			this->button1->TabIndex = 0;
			this->button1->Text = L"���";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::On_Add);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->Location = System::Drawing::Point(216, 120);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(80, 32);
			this->button2->TabIndex = 1;
			this->button2->Text = L"�޸�";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::On_Mod);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->Location = System::Drawing::Point(216, 184);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(80, 32);
			this->button3->TabIndex = 2;
			this->button3->Text = L"ɾ��";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::On_Del);
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::SystemColors::Window;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->IntegralHeight = false;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(24, 128);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(160, 148);
			this->listBox1->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(24, 96);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(110, 16);
			this->label1->TabIndex = 4;
			this->label1->Text = L"ѧ���ɼ���¼";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(24, 56);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 20);
			this->comboBox1->TabIndex = 5;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			this->comboBox1->SelectionChangeCommitted += gcnew System::EventHandler(this, &Form1::On_SelChange);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(24, 32);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(42, 16);
			this->label2->TabIndex = 6;
			this->label2->Text = L"ѧ��";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(327, 287);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"ѧ���ɼ�����";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}

private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	int nIndex = comboBox1->SelectedIndex;//��ǰѡ���������ֵ
	if (nIndex < 0) return;//���ı�ʾûѡ�񣬷���
	//StuScore�����stu���ѡ��ѧ���е�������Ϣ
	StuScore ^stu = safe_cast<StuScore ^>(theStudents[nIndex]);
	listBox1->Items->Clear();//������б��
	listBox1->Items->Add("������" + stu->strName);//�ڿ�����ʾ����
	listBox1->Items->Add("ѧ�ţ�" + stu->strID);	//�ڿ�����ʾѧ��
	for (int i = 0; i < 3; i++)//forѭ����ʾ�ɼ�
	{	//str�����θ��Ƴɼ������ɼ�
		String ^str = String::Format("�ɼ�{0}:{1}", i + 1, stu->fScore[i]);
		listBox1->Items->Add(str);	//�ڿ�����ʾ�ɼ�
	}
	//��ѡ����ʱ����ɾ������ť�����ã���ѡ����ʱ�ſ���ʹ�á�
	if (comboBox1->SelectedIndex < 0) 	// û���κ�ѡ����
		this->button2->Enabled = false;
	else
		this->button2->Enabled = true;
	this->button3->Enabled = true;
}
		 
private:ArrayList^ theStudents;
private: System::Void On_Add(System::Object^  sender, System::EventArgs^  e) {
	if (theStudents == nullptr)
		theStudents = gcnew ArrayList();
	ScoreIn ^dlg = gcnew ScoreIn;
	if (Windows::Forms::DialogResult::OK == dlg->ShowDialog())
	{
		StuScore^stu = dlg->theScore;
		theStudents->Add(stu);
		int nIndex = comboBox1->Items->Add(stu->strID);
		comboBox1->SelectedIndex = nIndex;
	}

//��顰�������͡�ѧ�š������ݲ���Ϊ�գ�ѧ�Ų������ظ��
	String^ strText = dlg->textBox1->Text;
	strText = strText->Trim();
	if (String::IsNullOrEmpty(strText))
	{
		MessageBox::Show(L"��������Ϊ�գ�", L"��ʾ");
		return;
	}
	int nIndex = -1;
	strText = dlg->textBox2->Text;
	strText = strText->Trim();
	nIndex = this->comboBox1->FindString(strText);
	if (nIndex >= 0)   // ���ظ���
		MessageBox::Show(String::Format("�б���[{0}]����ӹ��ˣ�", strText), L"��ʾ");
	else
	{
		StuScore ^stu = dlg->theScore;//StuScore��������ȡ��InputDlg�����е�������ѧ�š��ɼ�
		theStudents->Add(stu);//���������ѧ�š��ɼ�
		int nIndex = comboBox1->Items->Add(stu->strID);
		comboBox1->SelectedIndex = nIndex;//ѡ����ӵ�ѧ��
	}
}

private: System::Void On_Del(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox1->SelectedIndex < 0) // û���κ�ѡ����
		this->button2->Enabled = false;//����
	else
		this->button2->Enabled = true;
	int nIndex = this->comboBox1->SelectedIndex;//ѡ���������
	if (nIndex >= 0)//��Ͽ�ǿ�
	{
		comboBox1->Items->RemoveAt(nIndex);//ɾ��
		comboBox1->SelectedIndex = -1;
		// ȡ��ѡ��
		listBox1->Items->Clear(); //��ն�Ӧ���б�������
		theStudents->RemoveAt(nIndex);//ɾ�����������е���Ϣ
		comboBox1->Text = "";//�����Ͽ���ѡ����ʾ��ѧ��

	}
}
private: System::Void On_Mod(System::Object^  sender, System::EventArgs^  e) {
	int nIndex = comboBox1->SelectedIndex;//ѡ��Ҫ�޸����ѧ��
	ScoreIn ^dlg = gcnew ScoreIn;//����InputDlg ����
	dlg->theScore = safe_cast<StuScore ^>(theStudents[nIndex]);//���ѡ�����������Ϣ
	dlg->textBox1->Text = dlg->theScore->strName;//��InputDlg�����λ�ã�����
	dlg->textBox2->Text = dlg->theScore->strID;//ѧ��
	dlg->numericUpDown1->Value = (int)(dlg->theScore->fScore[0]);//�ɼ�1
	dlg->numericUpDown2->Value = (int)(dlg->theScore->fScore[1]);//�ɼ�2
	dlg->numericUpDown3->Value = (int)(dlg->theScore->fScore[2]);//�ɼ�3
	if (Windows::Forms::DialogResult::OK == dlg->ShowDialog())//��ʾ���õĴ���
	{
		theStudents->RemoveAt(nIndex);//
		comboBox1->Items->RemoveAt(nIndex);//ɾ����Ͽ���ѡ�е�ѧ��
		listBox1->Items->Clear();//����б��
		theStudents->Insert(nIndex, dlg->theScore);//�����޸ĺ����Ϣ
		comboBox1->Items->Add(dlg->theScore->strID);//��Ͽ�������޸ĵ�ѧ��
		comboBox1->SelectedIndex = nIndex;//ѡ���޸ĵ�ѧ��;
	}
}
private: System::Void On_SelChange(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox1->SelectedIndex < 0) 	// û���κ�ѡ����
		this->button2->Enabled = false;
	else
		this->button2->Enabled = true;
}
};
}

