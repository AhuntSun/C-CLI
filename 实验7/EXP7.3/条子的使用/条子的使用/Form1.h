#pragma once

namespace ���ӵ�ʹ�� {

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
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected:
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TrackBar^  trackBar2;
	private: System::Windows::Forms::TrackBar^  trackBar1;
	private: System::Windows::Forms::HScrollBar^  hScrollBar1;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Label^  label4;

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->trackBar2 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->hScrollBar1 = (gcnew System::Windows::Forms::HScrollBar());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Pink;
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->Location = System::Drawing::Point(24, 32);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(136, 104);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"ѡ��";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"����", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->radioButton2->Location = System::Drawing::Point(16, 64);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(100, 18);
			this->radioButton2->TabIndex = 3;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"ȹ�ӵĵ�ɫ";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton1_CheckedChanged2);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"����", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->radioButton1->Location = System::Drawing::Point(16, 24);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(100, 18);
			this->radioButton1->TabIndex = 2;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"���µĵ�ɫ";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton1_CheckedChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::Pink;
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->progressBar1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox2->Location = System::Drawing::Point(24, 152);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(384, 128);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"������";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"����", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(16, 24);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(352, 23);
			this->label4->TabIndex = 12;
			this->label4->Text = L"R";
			this->label4->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LightSalmon;
			this->button2->Location = System::Drawing::Point(232, 88);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(72, 32);
			this->button2->TabIndex = 10;
			this->button2->Text = L"�Ŵ�";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::On_Step);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightSalmon;
			this->button1->Location = System::Drawing::Point(72, 88);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(72, 32);
			this->button1->TabIndex = 9;
			this->button1->Text = L"��С";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::On_Back);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(16, 56);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(352, 26);
			this->progressBar1->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->progressBar1->TabIndex = 5;
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::LightPink;
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Controls->Add(this->label1);
			this->groupBox3->Controls->Add(this->trackBar2);
			this->groupBox3->Controls->Add(this->trackBar1);
			this->groupBox3->Controls->Add(this->hScrollBar1);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"����", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox3->Location = System::Drawing::Point(24, 288);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(384, 168);
			this->groupBox3->TabIndex = 1;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"�������ͻ�����";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"����", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(0, 120);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(29, 29);
			this->label3->TabIndex = 13;
			this->label3->Text = L"B";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"����", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(0, 80);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 29);
			this->label2->TabIndex = 12;
			this->label2->Text = L"G";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(0, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 29);
			this->label1->TabIndex = 11;
			this->label1->Text = L"R";
			// 
			// trackBar2
			// 
			this->trackBar2->AutoSize = false;
			this->trackBar2->Location = System::Drawing::Point(32, 112);
			this->trackBar2->Name = L"trackBar2";
			this->trackBar2->Size = System::Drawing::Size(344, 32);
			this->trackBar2->TabIndex = 8;
			this->trackBar2->TickStyle = System::Windows::Forms::TickStyle::Both;
			this->trackBar2->ValueChanged += gcnew System::EventHandler(this, &Form1::On_BValue);
			// 
			// trackBar1
			// 
			this->trackBar1->AutoSize = false;
			this->trackBar1->Location = System::Drawing::Point(32, 72);
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(344, 32);
			this->trackBar1->TabIndex = 7;
			this->trackBar1->TickStyle = System::Windows::Forms::TickStyle::Both;
			this->trackBar1->ValueChanged += gcnew System::EventHandler(this, &Form1::On_GValue);
			// 
			// hScrollBar1
			// 
			this->hScrollBar1->Location = System::Drawing::Point(32, 32);
			this->hScrollBar1->Name = L"hScrollBar1";
			this->hScrollBar1->Size = System::Drawing::Size(344, 32);
			this->hScrollBar1->TabIndex = 6;
			this->hScrollBar1->ValueChanged += gcnew System::EventHandler(this, &Form1::On_RValue);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->pictureBox1);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"����", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox4->Location = System::Drawing::Point(440, 24);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->groupBox4->Size = System::Drawing::Size(200, 192);
			this->groupBox4->TabIndex = 2;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"���µĵ�ɫ";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 16);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(200, 176);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->pictureBox2);
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"����", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox5->Location = System::Drawing::Point(440, 232);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->groupBox5->Size = System::Drawing::Size(200, 200);
			this->groupBox5->TabIndex = 3;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"ȹ�ӵĵ�ɫ";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(0, 24);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(200, 176);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(168, 24);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(240, 112);
			this->pictureBox3->TabIndex = 4;
			this->pictureBox3->TabStop = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(674, 465);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"��������ʹ��";
			this->Load += gcnew System::EventHandler(this, &Form1::On_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->groupBox4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		//�����Ӧ��˽�б���
		 private:int nRValue, nGValue,nBValue;
		 private:int nRValue1, nGValue1, nBValue1;
		private:int nRValue2, nGValue2, nBValue2;
		private:Color color1, color2;
		private:System::Drawing:: Size size1, size2;
		private:int v1, v2;
				//�÷���������ͼƬ����������ı仯���仯
		void UpdatePercentText(void)
		{
		//���progressBar1��ȡֵ��Χ����ֵ����nRange
			int nRange = progressBar1->Maximum - progressBar1->Minimum;
			float fPercent = (float)(progressBar1->Value) / (float)nRange;//�����������ǰֵ�ı���
			label4->Text = fPercent.ToString("0.00%");//�ѱ���ת��Ϊ�ٷ�������ֵ��label4���ı�
			if (this->radioButton2->Checked==true)//�ж��Ƿ�ѡ���ˡ�ȹ�ӵĵ�ɫ�����ѡ��
			{
				int w = (int)(size2.Width*fPercent);//��Ĵ�С���Ͻ������İ�ֱ�
				int h = (int)(size2.Height*fPercent);//�ߵĴ�С���Ͻ������İ�ֱ�
				this->pictureBox2->Size = System::Drawing::Size(w, h);//��Ӧ�ĸ�ֵ����ȹ�ӵĵ�ɫ��ͼƬ�򣬴ﵽ�Ŵ�Ŀ��
				v2 = progressBar1->Value;//�ѵ�ǰ��������ֵ����v2
			}
			else//���ѡ����ǡ����µĵ�ɫ��ѡ��
			{ 
				int w = (int)(size1.Width*fPercent);//��Ĵ�С���Ͻ������İ�ֱ�
				int h = (int)(size1.Width*fPercent);//�ߵĴ�С���Ͻ������İ�ֱ�
				this->pictureBox1->Size = System::Drawing::Size(w, h);//��Ӧ�ĸ�ֵ�������µĵ�ɫ��ͼƬ�򣬴ﵽ�Ŵ�Ŀ��
				v1 = progressBar1->Value;//�ѵ�ǰ��������ֵ����v1
			}
				}
		//Ϊ����Load�¼�����¼�������
	private: System::Void On_Load(System::Object^  sender, System::EventArgs^  e) {
		progressBar1->Maximum = 100;//�趨���������ֵΪ100
		progressBar1->Minimum = 0;//�趨��������СֵΪ0
		progressBar1->Value = 70;//�趨��������ǰ��
		progressBar1->Step = 5;//���ý������Ĳ���
		v1 = v2 = progressBar1->Value;//�ѽ�������ǰ����ֵ��v1,v2
		size1 = this->pictureBox1->Size;//��size1���桰���µĵ�ɫ��ͼƬ��
		size2 = this->pictureBox2->Size;//��size2���桰ȹ�ӵĵ�ɫ��ͼƬ��
		nRValue = nGValue = nBValue = 192;//ָ����򱳾���ԭɫ����ɫ����
		hScrollBar1->Minimum = 0;//�趨hScrollBar1����СֵΪ0
		hScrollBar1->Maximum = 255;//�趨hScrollBar1�����ֵΪ255
		hScrollBar1->Value = nRValue;//�趨hScrollBar1�ĳ�ֵ 
		trackBar1->Minimum = 0;//�趨trackBar1����СֵΪ0
		trackBar1->Maximum = 255;//�趨trackBar1�����ֵΪ255
		trackBar1->Value = nGValue;//�趨trackBar1�ĳ�ֵ
		trackBar1->TickFrequency = 20;//�趨trackBar1ÿ�̶ȵ�����
		trackBar2->Minimum = 0; //�趨trackBar2����СֵΪ0
		trackBar2->Maximum = 255;//�趨trackBar2�����ֵΪ255
		trackBar2->Value = nBValue;//�趨trackBar2�ĳ�ֵ
		trackBar2->TickFrequency = 20;//�趨trackBar2ÿ�̶ȵ�����
		color1 = color2 = Color::FromArgb(nRValue, nGValue, nBValue);//������ԭɫ��ɫ
		nRValue1 = nRValue2 = nRValue;
		nGValue1 = nGValue2 = nGValue;
		nBValue1 = nBValue2 = nBValue;	
		this->radioButton2->Checked = false;//Ĭ��ѡ��������ɫ��ѡ��
		this->radioButton1->Checked = true;
		UpdatePercentText();//����UpdatePercentText���������½�������ʹ��Ӧ��ͼƬ����������仯����ʾ�ٷֱ�

	}
			 //Ϊ���Ŵ󡱰�ť���Click�¼�������On_Step
private: System::Void On_Step(System::Object^  sender, System::EventArgs^  e) {
	progressBar1->PerformStep();//���ӽ�������λ��
	UpdatePercentText();//���½�������ʹ��Ӧ��ͼƬ����������仯����ʾ�ٷֱ�
}
		 //Ϊ����С����ť���Click�¼�������On_Back
private: System::Void On_Back(System::Object^  sender, System::EventArgs^  e) {
	int nStep = progressBar1->Step;//�ѽ������Ĳ�����ֵ��nStep
	progressBar1->Increment(-nStep);//�������ӽ�����
	UpdatePercentText();//���½�������ʹ��Ӧ��ͼƬ����������仯����ʾ�ٷֱ�
}

		 //��������Զ��庯��UpdateColor(void)�����ڶ���ɫ�ĸ��£�
		 void UpdateColor(void)
		 {
		 if (this->radioButton2->Checked==true)//�ж��Ƿ�ѡ�С�ȹ�ӵĵ�ɫ��ѡ��
		 {
			 nRValue2 = nRValue;
			 nGValue2 = nGValue;
			 nBValue2 = nBValue;
			 color2 = Color::FromArgb(nRValue, nGValue, nBValue);//������ԭɫ���е�ɫ
			 this->groupBox5->BackColor = color2;//����ȹ��ͼƬ�򱳺����Ͽ�ĵ�ɫ
		 }
		 else//ͬ���������µĵ�ɫ
		 {
			 nRValue1 = nRValue;
			 nGValue1 = nGValue;
			 nBValue1 = nBValue;
			 color1 = Color::FromArgb(nRValue, nGValue, nBValue);//������ԭɫ���е�ɫ
			 this->groupBox4->BackColor = color1;//����ȹ��ͼƬ�򱳺����Ͽ�ĵ�ɫ
		 }
		 }

		 //�ֱ�Ϊ���������м们���������Ļ������ؼ����ValueChanged�¼�������On_RValue��On_GValue��On_BValue
private: System::Void On_RValue(System::Object^  sender, System::EventArgs^  e) {
	nRValue = this->hScrollBar1->Value;//ȡ����ǰ��������ֵ����Ϊ��ɫ�ֶȱ�����ֵ
	UpdateColor();//����UpdateColor������������ɫ
}
private: System::Void On_GValue(System::Object^  sender, System::EventArgs^  e) {
	nGValue = this->trackBar1->Value; //ȡ����ǰ��������ֵ����Ϊ��ɫ�ֶȱ�����ֵ
	UpdateColor();//����UpdateColor������������ɫ
}
private: System::Void On_BValue(System::Object^  sender, System::EventArgs^  e) {
	nBValue = this->trackBar2->Value;//ȡ����ǰ��������ֵ����Ϊ��ɫ�ֶȱ�����ֵ
	UpdateColor();//����UpdateColor������������ɫ
}
		// ΪradioButton1��ѡ��ť�ؼ����CheckedChanged�¼�������
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->radioButton1->Checked == true)//�ж��Ƿ�ѡ��radioButton1
	{
		nRValue = nRValue1;
		nGValue = nGValue1;
		nBValue = nBValue1;
		this->hScrollBar1->Value = nRValue;//��hScrollBar1��ֵת��Ϊ������ɫ�ı���
		this->trackBar1->Value = nGValue;//��trackBar1��ֵת��Ϊ������ɫ�ı���
		this->trackBar2->Value = nBValue;//��trackBar2��ֵת��Ϊ������ɫ�ı���
		progressBar1->Value = v1;//�����������ֵ
		UpdateColor();//����UpdateColor������������ɫ
	}
}
		 // ΪradioButton2��ѡ��ť�ؼ����CheckedChanged�¼�������
		 private: System::Void radioButton1_CheckedChanged2(System::Object^  sender, System::EventArgs^  e) {
			 if (this->radioButton2->Checked == true)//�ж��Ƿ�ѡ��radioButton2
			 {
				 nRValue = nRValue2;
				 nGValue = nGValue2;
				 nBValue = nBValue2;
				 this->hScrollBar1->Value = nRValue;//��hScrollBar1��ֵת��Ϊ������ɫ�ı���
				 this->trackBar1->Value = nGValue;//��trackBar1��ֵת��Ϊ������ɫ�ı���
				 this->trackBar2->Value = nBValue;//��trackBar2��ֵת��Ϊ������ɫ�ı���
				 progressBar1->Value = v2;
				 UpdateColor();//����UpdateColor������������ɫ
			 }
		 }

};
}

