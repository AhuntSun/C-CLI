#pragma once

namespace Picture {

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
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::RadioButton^  radioButton7;
	private: System::Windows::Forms::RadioButton^  radioButton6;
	private: System::Windows::Forms::RadioButton^  radioButton5;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::PictureBox^  pictureBox3;

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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(334, 261);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage1.BackgroundImage")));
			this->tabPage1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage1->Controls->Add(this->pictureBox1);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"����", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(326, 235);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"ͼ�����";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(24, 56);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(160, 136);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightSalmon;
			this->button1->Location = System::Drawing::Point(216, 104);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 31);
			this->button1->TabIndex = 1;
			this->button1->Text = L"����";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage2.BackgroundImage")));
			this->tabPage2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage2->Controls->Add(this->radioButton4);
			this->tabPage2->Controls->Add(this->radioButton3);
			this->tabPage2->Controls->Add(this->radioButton2);
			this->tabPage2->Controls->Add(this->radioButton1);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->pictureBox2);
			this->tabPage2->Font = (gcnew System::Drawing::Font(L"����", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(326, 235);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"��ʾģʽ";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->BackColor = System::Drawing::Color::HotPink;
			this->radioButton4->Location = System::Drawing::Point(208, 120);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(85, 18);
			this->radioButton4->TabIndex = 8;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"������ʾ";
			this->radioButton4->UseVisualStyleBackColor = false;
			this->radioButton4->Click += gcnew System::EventHandler(this, &Form1::On_SizeMode);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->BackColor = System::Drawing::Color::HotPink;
			this->radioButton3->Location = System::Drawing::Point(208, 96);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(85, 18);
			this->radioButton3->TabIndex = 7;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"������ʾ";
			this->radioButton3->UseVisualStyleBackColor = false;
			this->radioButton3->Click += gcnew System::EventHandler(this, &Form1::On_SizeMode);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->BackColor = System::Drawing::Color::HotPink;
			this->radioButton2->Location = System::Drawing::Point(208, 72);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(85, 18);
			this->radioButton2->TabIndex = 6;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"�Զ���С";
			this->radioButton2->UseVisualStyleBackColor = false;
			this->radioButton2->Click += gcnew System::EventHandler(this, &Form1::On_SizeMode);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->BackColor = System::Drawing::Color::HotPink;
			this->radioButton1->Location = System::Drawing::Point(208, 48);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(85, 18);
			this->radioButton1->TabIndex = 5;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"������ʾ";
			this->radioButton1->UseVisualStyleBackColor = false;
			this->radioButton1->Click += gcnew System::EventHandler(this, &Form1::On_SizeMode);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::HotPink;
			this->button2->Location = System::Drawing::Point(216, 144);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 31);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Ӧ��";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::On_);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox2->Location = System::Drawing::Point(24, 40);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(160, 136);
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// tabPage3
			// 
			this->tabPage3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage3.BackgroundImage")));
			this->tabPage3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage3->Controls->Add(this->radioButton7);
			this->tabPage3->Controls->Add(this->radioButton6);
			this->tabPage3->Controls->Add(this->radioButton5);
			this->tabPage3->Controls->Add(this->button3);
			this->tabPage3->Controls->Add(this->pictureBox3);
			this->tabPage3->Font = (gcnew System::Drawing::Font(L"����", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(326, 235);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"�߿���ʽ";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->radioButton7->Font = (gcnew System::Drawing::Font(L"����", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->radioButton7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->radioButton7->Location = System::Drawing::Point(216, 112);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(71, 18);
			this->radioButton7->TabIndex = 11;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"3D�߿�";
			this->radioButton7->UseVisualStyleBackColor = false;
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->radioButton6->Font = (gcnew System::Drawing::Font(L"����", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->radioButton6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->radioButton6->Location = System::Drawing::Point(216, 88);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(85, 18);
			this->radioButton6->TabIndex = 10;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"���߱߿�";
			this->radioButton6->UseVisualStyleBackColor = false;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->radioButton5->Font = (gcnew System::Drawing::Font(L"����", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->radioButton5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->radioButton5->Location = System::Drawing::Point(216, 64);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(70, 18);
			this->radioButton5->TabIndex = 9;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"�ޱ߿�";
			this->radioButton5->UseVisualStyleBackColor = false;
			this->radioButton5->Click += gcnew System::EventHandler(this, &Form1::On_Border);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->button3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->Location = System::Drawing::Point(216, 152);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 31);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Ӧ��";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::On_);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox3->Location = System::Drawing::Point(24, 48);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(160, 136);
			this->pictureBox3->TabIndex = 4;
			this->pictureBox3->TabStop = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(334, 261);
			this->Controls->Add(this->tabControl1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"ͼ����ʾ����";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		//ΪForm1���Load�¼�������
	private:System::Drawing::Size sizePicBox, sizeThumb;
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		// ���ó�ʼѡ���ĵ�ѡ��ť
		this->radioButton1->Checked = true;  // Ĭ��ѡ��������ʾ
		this->radioButton6->Checked = true;  // Ĭ��ѡ�����߱߿�
		// һ��ʼ���ú�2��ѡ�ҳ�棬��ΪͼƬû�е���
		this->tabPage2->Enabled = false;
		this->tabPage3->Enabled = false;
		// ����ͼƬ�ؼ�ԭ���Ĵ�С���Ա㵱�����Զ���Сģʽ��ָ�
		this->sizePicBox = this->pictureBox1->Size;
		this->sizeThumb = this->pictureBox2->Size;
	
	}

// Ϊ�á����롱��ť�ؼ����Click�¼�������
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	OpenFileDialog^ ofDlg = gcnew OpenFileDialog();//�������ļ���(OpenFileDialog)�����þ��
	//ѡ�����Ķ��������
	ofDlg->Filter = "ͼ���ļ�(*.BMP;*.JPG;*.GIF;*.PNG;*.ICO;*.WMF)\| *.BMP; *.JPG; *.GIF; *.PNG; *.ICO; *.WMF | �����ļ�(*.*) | *.*";
		ofDlg->RestoreDirectory = true;//�ر�ǰ��ԭ��ǰĿ¼
	if (ofDlg->ShowDialog() == System::Windows::Forms::DialogResult::OK) {//�����"����"��ť
		this->pictureBox1->Image = Image::FromFile(ofDlg->FileName);//����ѡ����ļ�
		this->pictureBox2->Image = this->pictureBox1->Image;//��pictureBox2����pictureBox1��ͼƬ
		this->pictureBox3->Image = this->pictureBox1->Image;//��pictureBox3����pictureBox1��ͼƬ
		this->tabPage2->Enabled = true;//��tabPage2����Ϊ��ѡ
		this->tabPage3->Enabled = true;//��tabPage3����Ϊ��ѡ
	}
}

 //Ϊ��������ʾ�������Զ���С������������ʾ���͡�������ʾ����ѡ��ť���Click�¼��Ĺ�ͬ������On_SizeMode��
private: System::Void On_SizeMode(System::Object^  sender, System::EventArgs^  e) {
	this->pictureBox2->Size = this->sizeThumb;//��pictureBox2��3��С����ΪpictureBox2��С
	this->pictureBox3->Size = this->sizeThumb;
	if (this->radioButton1->Checked)       // ѡ��������ʾ
		this->pictureBox2->SizeMode = PictureBoxSizeMode::Normal;//������ʾͼƬ
	if (this->radioButton2->Checked)       // ѡ���Զ���С
		this->pictureBox2->SizeMode = PictureBoxSizeMode::AutoSize;//ͼƬ�Զ���С
	if (this->radioButton3->Checked)       // ѡ�о�����ʾ
		this->pictureBox2->SizeMode = PictureBoxSizeMode::CenterImage;//����ͼƬ
	if (this->radioButton4->Checked)       // ѡ��������ʾ
		this->pictureBox2->SizeMode = PictureBoxSizeMode::StretchImage;//����ͼƬ
	this->pictureBox3->SizeMode = this->pictureBox2->SizeMode;//��pictureBox3��С����ΪpictureBox2��С
}

// Ϊ��Ӧ�á���ť���Click�¼�������On_
	private: System::Void On_(System::Object^  sender, System::EventArgs^  e) {
		if (this->tabControl1->SelectedTab == this->tabPage2)//���ѡ����tabPage2
		{
			this->pictureBox1->Size = this->sizePicBox;
			this->pictureBox1->SizeMode = this->pictureBox2->SizeMode;//��pictureBox1��pictureBox2��SizeMode(�����ʾͼƬ)ͬ��
		}
		else//�������ѡ����tabPage2
			this->pictureBox1->BorderStyle = this->pictureBox3->BorderStyle;//��pictureBox1��pictureBox3��BorderStyle(�߿�����)ͬ��
	}

//Ϊ���ޱ߿򡱡������߱߿򡱺͡�3D�߿򡱵�ѡ��ť���Click�¼��Ĺ�ͬ������
private: System::Void On_Border(System::Object^  sender, System::EventArgs^  e) {
	if (this->radioButton5->Checked)       // ѡ���ޱ߿�
		this->pictureBox3->BorderStyle = BorderStyle::None;//�߿����Ա�ΪNone
	if (this->radioButton6->Checked)       // ѡ�е��߱߿�
		this->pictureBox3->BorderStyle = BorderStyle::FixedSingle;//�߿����Ա�ΪFixedSingle
	if (this->radioButton7->Checked)       // ѡ��3D�߿�
		this->pictureBox3->BorderStyle = BorderStyle::Fixed3D;//�߿����Ա�ΪFixed3D
	this->pictureBox2->BorderStyle = this->pictureBox3->BorderStyle;//��pictureBox2��pictureBox3��BorderStyle(�߿�����)ͬ��

}
};
}

