#pragma once

namespace �ҵ�����ȥ���� {

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
	private: System::Windows::Forms::CheckedListBox^  checkedListBox1;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox2;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox3;
	protected:


	protected:

	protected:




	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;

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
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->checkedListBox2 = (gcnew System::Windows::Forms::CheckedListBox());
			this->checkedListBox3 = (gcnew System::Windows::Forms::CheckedListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->BackColor = System::Drawing::Color::PeachPuff;
			this->checkedListBox1->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Location = System::Drawing::Point(8, 16);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(152, 172);
			this->checkedListBox1->TabIndex = 0;
			// 
			// checkedListBox2
			// 
			this->checkedListBox2->BackColor = System::Drawing::Color::PeachPuff;
			this->checkedListBox2->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->checkedListBox2->FormattingEnabled = true;
			this->checkedListBox2->Location = System::Drawing::Point(264, 16);
			this->checkedListBox2->Name = L"checkedListBox2";
			this->checkedListBox2->Size = System::Drawing::Size(152, 172);
			this->checkedListBox2->TabIndex = 1;
			// 
			// checkedListBox3
			// 
			this->checkedListBox3->BackColor = System::Drawing::Color::PeachPuff;
			this->checkedListBox3->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->checkedListBox3->FormattingEnabled = true;
			this->checkedListBox3->Location = System::Drawing::Point(8, 208);
			this->checkedListBox3->Name = L"checkedListBox3";
			this->checkedListBox3->Size = System::Drawing::Size(408, 130);
			this->checkedListBox3->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Gold;
			this->button1->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(176, 16);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(72, 32);
			this->button1->TabIndex = 3;
			this->button1->Text = L"->";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Gold;
			this->button2->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->Location = System::Drawing::Point(176, 64);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(72, 32);
			this->button2->TabIndex = 4;
			this->button2->Text = L">>";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Gold;
			this->button3->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->Location = System::Drawing::Point(176, 112);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(72, 32);
			this->button3->TabIndex = 5;
			this->button3->Text = L"<-";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Gold;
			this->button4->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button4->Location = System::Drawing::Point(176, 160);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(72, 32);
			this->button4->TabIndex = 6;
			this->button4->Text = L"<<";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(430, 348);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->checkedListBox3);
			this->Controls->Add(this->checkedListBox2);
			this->Controls->Add(this->checkedListBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"�ҵ����ڶ�ȥ����";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
		//��Ӵ���Load�¼����¼�������
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		// ��ʼ���¼�������checkedListBox����������Ϣ������һ��������
		checkedListBox1->Items->Add("����һ");
		checkedListBox1->Items->Add("���ڶ�");
		checkedListBox1->Items->Add("������");
		checkedListBox1->Items->Add("������");
		checkedListBox1->Items->Add("������");
		checkedListBox1->Items->Add("������");
		checkedListBox1->Items->Add("������");
		checkedListBox1->CheckOnClick = true;
		checkedListBox2->CheckOnClick = true;
		checkedListBox3->CheckOnClick = true;
	}
			 //Ϊ��->����ť����¼�������
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	// �����������Ҳ�->
	for each (String^ o in checkedListBox1->CheckedItems)//����foreachѭ������checkedListBox1��ѡ�����������Ϣ
	{
		checkedListBox2->Items->Add(o);//��ѡ�����������Ϣ��ӵ�checkedListBox2��Items������
	}
	for (int i = checkedListBox1->Items->Count-1; i >=0; i--)//���� checkedListBox1��Items���Ե�����
	{
		if (checkedListBox1->CheckedItems->Contains(checkedListBox1->Items[i]))//�ж�checkedListBox1ѡ�е�Items�����Ƿ���checkedListBox1��
		{
			checkedListBox3->Items->Add(checkedListBox1->Items[i]->ToString() + "�������Ҳ�");//��checkedListBox3��Items�����������Ӧ��Ϣ
			checkedListBox1->Items->Remove(checkedListBox1->Items[i]);//ɾ��checkedListBox1��Items���Ե�ѡ����
		}
	}
}
		 //Ϊ��<<����ť����¼�������
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	// �Ҳ�ȫ���������<<
	for each (String^  o in checkedListBox2->Items)//����checkedListBox2��Items����
	{
		checkedListBox1->Items->Add(o);//��checkedListBox1�����checkedListBox2��Items����
	}
	checkedListBox2->Items->Clear();//���checkedListBox2��Items����
	checkedListBox3->Items->Add("�Ҳ�ȫ���Ƶ����");//��checkedListBox3��Items�������Ӧ��Ϣ
}
		 //Ϊ"<-"��ť����¼�������
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	// �Ҳ��Ƶ���ಿ����<-
	for each (String^  o in checkedListBox2->CheckedItems)//����checkedListBox2�е�ѡ����
	{
		checkedListBox1->Items->Add(o);//��checkedListBox1�����checkedListBox2�е�ѡ����
	}
	for (int i = checkedListBox2->Items->Count-1; i >=0; i--)//���� checkedListBox2��Items���Ե�����
	{
		if (checkedListBox2->CheckedItems->Contains(checkedListBox2->Items[i]))//�ж�checkedListBox2ѡ�е�Items�����Ƿ���checkedListBox2��
		{
			checkedListBox3->Items->Add(checkedListBox2->Items[i]->ToString() + "���������"); //��checkedListBox3��Items�����������Ӧ��Ϣ
			checkedListBox2->Items->Remove(checkedListBox2->Items[i]);//ɾ��checkedListBox2��Items���Ե�ѡ����
		}
	}
}
		 //Ϊ��>>����ť����¼�������
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	// ���ȫ���Ƶ��Ҳ�>>
	for each (String^ o in checkedListBox1->Items)//����checkedListBox1��Items����
	{
		checkedListBox2->Items->Add(o);//��checkedListBox2�����checkedListBox1��Items����
	}
	checkedListBox1->Items->Clear();//���checkedListBox1��Items����
	checkedListBox3->Items->Add("���ȫ���Ƶ��Ҳ�");//��checkedListBox3��Items�������Ӧ��Ϣ
}
};
}

