#pragma once
#include "InputDlg.h"
namespace   {

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
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Turquoise;
			this->button1->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(216, 64);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(72, 32);
			this->button1->TabIndex = 0;
			this->button1->Text = L"���";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Tan;
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(24, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"ѧ��";
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::Azure;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(24, 144);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(160, 164);
			this->listBox1->TabIndex = 2;
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::Azure;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->IntegralHeight = false;
			this->comboBox1->Location = System::Drawing::Point(24, 64);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 20);
			this->comboBox1->TabIndex = 3;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			this->comboBox1->SelectionChangeCommitted += gcnew System::EventHandler(this, &Form1::On_SelChange);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Tan;
			this->label2->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(24, 104);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(110, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"ѧ���ɼ���¼";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Turquoise;
			this->button2->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->Location = System::Drawing::Point(216, 152);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(72, 32);
			this->button2->TabIndex = 5;
			this->button2->Text = L"ɾ��";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Turquoise;
			this->button3->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->Location = System::Drawing::Point(216, 232);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(72, 32);
			this->button3->TabIndex = 6;
			this->button3->Text = L"�޸�";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(320, 366);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"ѧ���ɼ�����";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Ϊ��Ͽ�ؼ����SelectedIndexChanged�¼�������
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		int nIndex = comboBox1->SelectedIndex;//��ȡ��Ͽ�ѡ��������
		if (nIndex < 0)return;
		StuScore ^stu = safe_cast<StuScore^>(theStudents[nIndex]);//��ѡ��������С��0���ȡ�����ж�Ӧ����������
		listBox1->Items->Clear();//���items���Ե�����
		listBox1->Items->Add("������" + stu->strName);//������items�������������
		listBox1->Items->Add("ѧ�ţ�" + stu->strID);//���ѧ��
		for (int i = 0; i < 3; i++)//������ųɼ�
		{
			String ^str = String::Format("�ɼ�{0}:{1}", i + 1, stu->fScore[i]);
			listBox1->Items->Add(str);
		}
	}
			 private:ArrayList^ theStudents;//����һ�����������
//Ϊ����ӡ���ť����¼�������	
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (theStudents == nullptr)//�ж������Ƿ�Ϊ��
			theStudents = gcnew ArrayList();//��ʼ���������
		InputDlg ^dlg = gcnew InputDlg;//����InputDlg�������Ե���InputDlg����
		if (Windows::Forms::DialogResult::OK == dlg->ShowDialog())//�ж��Ƿ�����InputDlg�����ȷ�ϰ�ť
		{
			StuScore^stu = dlg->theScore;//��InputDlg���ڵ�StuScore�����ʼ���ô��ڵ�StuScore����
			theStudents->Add(stu);//����������Ӹô��ڵ�StuScore����
			int nIndex = comboBox1->Items->Add(stu->strID);//��comboBox1��items���������stu��strID����
			comboBox1->SelectedIndex = nIndex;//��comboBox1��ѡ������Ϊstu�����strID����
		}
		//��顰�������͡�ѧ�š������ݲ���Ϊ�գ�ѧ�Ų������ظ��
		String^ strText = dlg->textBox1->Text;
		strText = strText->Trim();//Trim()����������ȥ���ַ������ߵĿո�
		if (String::IsNullOrEmpty(strText))//�ж�textBox1���ı��Ƿ�Ϊ��
		{
			MessageBox::Show(L"��������Ϊ�գ�", L"��ʾ");//��ʾ��ʾ���
			return;
		}

		int nIndex = -1;
		strText = dlg->textBox2->Text;
		strText = strText->Trim();
		nIndex = this->comboBox1->FindString(strText);//����strText�Ƿ����ظ���
		if (nIndex >= 0)   // ���ظ���
			MessageBox::Show(String::Format("�б���[{0}]����ӹ��ˣ�", strText), L"��ʾ");//��ʾ��ʾ��Ϣ
		else
		{
			StuScore ^stu = dlg->theScore;//StuScore��������ȡ��InputDlg�����е�������ѧ�š��ɼ�
			theStudents->Add(stu);//�����������������ѧ�š��ɼ�
			int nIndex = comboBox1->Items->Add(stu->strID);//��nIndex��ֵ��Ϊ��ӵ�stu�����е�strID����
			comboBox1->SelectedIndex = nIndex;//ѡ����ӵ�ѧ��
		}
	}
		 //��ӡ�ɾ������ť���¼�������
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox1->SelectedIndex < 0) // �ж�comboBox1�Ƿ���ѡ����
		this->button2->Enabled = false;//���á�ɾ������ť
	else
		this->button2->Enabled = true;
	int nIndex = this->comboBox1->SelectedIndex;//ѡ�����������ֵ��nIndex
	if (nIndex >= 0)//��Ͽ�ѡ�������ǿ�
	{
		comboBox1->Items->RemoveAt(nIndex);//ɾ����Ӧ������Itemsֵ
		comboBox1->SelectedIndex = -1;
		// ȡ��ѡ��
		listBox1->Items->Clear(); //��ն�Ӧ���б�������
		theStudents->RemoveAt(nIndex);//ɾ�����������еĸ���������Ϣ
		comboBox1->Text = "";//�����Ͽ���ѡ����ʾ��ѧ��strID
	}
}
		 //Ϊ���޸ġ���ť����¼�������
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	int nIndex = comboBox1->SelectedIndex;//��ѡ�е�ѧ��strID��ֵ��nIndex����ѡ��Ҫ�޸ĵ�strID
	InputDlg ^dlg = gcnew InputDlg;//����InputDlg���������������InputDlg ����
	dlg->theScore = safe_cast<StuScore^>(theStudents[nIndex]);//��InputDlg�����л��ѡ�����������Ϣ
	dlg->textBox1->Text = dlg->theScore->strName;//��InputDlg�����λ�ã�����
	dlg->textBox2->Text = dlg->theScore->strID;//ѧ��
	dlg->numericUpDown1->Value = (int)(dlg->theScore->fScore[0]);//�ɼ�1
	dlg->numericUpDown2->Value = (int)(dlg->theScore->fScore[1]);//�ɼ�2
	dlg->numericUpDown3->Value = (int)(dlg->theScore->fScore[2]);//�ɼ�3
	if (Windows::Forms::DialogResult::OK == dlg->ShowDialog())//���õĴ���InputDlg�Ƿ�����ȷ�ϡ���ť
	{
		theStudents->RemoveAt(nIndex);//������ɾ����Ӧ�����������
		comboBox1->Items->RemoveAt(nIndex);//ɾ����Ͽ���ѡ��������ѧ��
		listBox1->Items->Clear();//����б��
		theStudents->Insert(nIndex, dlg->theScore);//�������в����޸ĺ����Ϣ
		comboBox1->Items->Add(dlg->theScore->strID);//��Ͽ��items����������޸ĵ�ѧ��
		comboBox1->SelectedIndex = nIndex;//ѡ���޸ĵ�ѧ��;
	}}
		 //Ϊ��Ͽ�ؼ�SelectionChangeCommitted�¼�����¼�������
private: System::Void On_SelChange(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox1->SelectedIndex < 0)   // �ж���Ͽ����Ƿ����κ�ѡ����
		this->button2->Enabled = false;//û��ѡ��������á��޸ġ���ť
	else
		this->button2->Enabled = true;
}
};
}

