#pragma once

namespace ץ����Ϸ {

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
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	protected:
	private: System::Windows::Forms::MonthCalendar^  monthCalendar1;
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::Timer^  timer3;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// ����������������
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����֧������ķ��� - ��Ҫ
		/// ʹ�ô���༭���޸Ĵ˷��������ݡ�
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CalendarForeColor = System::Drawing::Color::YellowGreen;
			this->dateTimePicker1->Location = System::Drawing::Point(16, 24);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->ShowUpDown = true;
			this->dateTimePicker1->Size = System::Drawing::Size(136, 21);
			this->dateTimePicker1->TabIndex = 0;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &Form1::On_DtpValChanged);
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->BackColor = System::Drawing::Color::YellowGreen;
			this->monthCalendar1->Location = System::Drawing::Point(16, 56);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 1;
			this->monthCalendar1->DateChanged += gcnew System::Windows::Forms::DateRangeEventHandler(this, &Form1::On_DateChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::YellowGreen;
			this->button1->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(416, 136);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 40);
			this->button1->TabIndex = 2;
			this->button1->Text = L"��ʼ";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::On_Start);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(248, 48);
			this->progressBar1->Maximum = 60;
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(224, 24);
			this->progressBar1->Step = 1;
			this->progressBar1->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::DarkKhaki;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(200, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(128, 21);
			this->label1->TabIndex = 4;
			this->label1->Text = L"label1";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::DarkKhaki;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Font = (gcnew System::Drawing::Font(L"����", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->label2->Location = System::Drawing::Point(336, 24);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(160, 21);
			this->label2->TabIndex = 7;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::DarkKhaki;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(320, 72);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 21);
			this->label3->TabIndex = 8;
			this->label3->Text = L"label3";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(264, 144);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(48, 40);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Form1::On_Hit);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 500;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1Tick);
			// 
			// timer2
			// 
			this->timer2->Tick += gcnew System::EventHandler(this, &Form1::On_Tick2);
			// 
			// timer3
			// 
			this->timer3->Tick += gcnew System::EventHandler(this, &Form1::On_Tick3);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(548, 305);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->monthCalendar1);
			this->Controls->Add(this->dateTimePicker1);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"ץ����Ϸ";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		private: int nTime;//������ڵ���ʱ�����ͳ�Ա����nTime
private: System::Random ^ranX, ^ranY;//�������������������
		 //ΪForm1����Load�¼�����¼�������
			private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				label1->Text = monthCalendar1->SelectionEnd.ToString();//��������Ϣ��ʾ��lable1��
				nTime = 60;
				label3->Text = L"01:00";//�趨lable3��ʼֵΪ1����
				timer2->Interval = 1000;		// �趨��ʱtimer2�������¼���ʱ���������ڵ���ʱ
				timer3->Interval = 1000;		//�趨��ʱtimer3�������¼���ʱ������ ��������ƶ�СͼƬ		 	
				ranX = gcnew System::Random();	// �����������ʵ��
				ranY = gcnew System::Random();	// �����������ʵ��
			}
			 //ΪDateTimePicker�ؼ����ValueChanged�¼�������
private: System::Void On_DtpValChanged(System::Object^  sender, System::EventArgs^  e) {

	monthCalendar1->SelectionStart = dateTimePicker1->Value;//��dateTimePicker1��ֵ�趨����ѡ�����ڵ���ʼʱ��
	monthCalendar1->SelectionEnd = dateTimePicker1->Value;//��dateTimePicker1��ֵ�趨����ѡ�����ڵĽ���ʱ��
}
		 //ΪMonthCalendar�ؼ����DateChanged�¼�������
private: System::Void On_DateChanged(System::Object^  sender, System::Windows::Forms::DateRangeEventArgs^  e) {

	dateTimePicker1->Value = e->Start;//������ѡ�����ڵ���ʼʱ�丳ֵ��dateTimePicker1
	label1->Text = e->End.ToString();//���������ؼ��ı仯����lable1��ֵ
}
		 //ΪTimer1�ؼ���Tick�¼�����¼�������
private: System::Void timer1Tick(System::Object^  sender, System::EventArgs^  e) {

	static int i = 0; i = (i < 3 ? i + 1 : 0);         // ͼ�������,����4��ͼ��
	//ͨ��ToBitmap()������icon�ļ�ת��Ϊλͼ������ֵ��ͼƬ��1
	pictureBox1->Image = (gcnew System::Drawing::Icon(L"Dinosaurs" + i + L".ico", 64, 64))->ToBitmap();
	label2->Text = DateTime::Now.ToString(L"yyyy��MM��dd��\r\n HH��mm��ss��");//�ѵ�ǰʱ�丳ֵ��label2
}
		 //ΪTimer2�ؼ���Tick�¼�����¼�������
private: System::Void On_Tick2(System::Object^  sender, System::EventArgs^  e) {
	nTime--;//Timer2ÿ�ε��øú���ʱ��ֵ��һ
	this->label3->Text = String::Concat(L"00:", nTime.ToString(L"00"));//label3��ʾnTime��ֵ
	//ToString�е�L"00"��һ���Զ����ʽ�ַ�������������������λ��ʾ
	progressBar1->Value = nTime;  // �ý�������ʾʣ��ʱ��nTime��ֵ
	if (nTime <= 0) {
		On_Start(nullptr, nullptr);//��nTime��ֵ��С��0ʱ���ú������¿�ʼ��Ϸ
		MessageBox::Show(L"��Ҫ�ú�Ŭ������", L"����");//�ô�����ʾ��ʾ��Ϣ

	}
}
		 //ΪTimer3�ؼ���Tick�¼�����¼�������
private: System::Void On_Tick3(System::Object^  sender, System::EventArgs^  e) {
	System::Drawing::Size size = this->ClientSize;//��ȡ���幤�����Ĵ�С
	int nPosX = this->ranX->Next(size.Width);
	// ����������������幤������ȵ�����
	int nPosY = this->ranX->Next(size.Height - 50);
	// ����������������幤�����߶ȵ���������ȥ50����Ϊ�����·����пؼ�
	this->pictureBox1 -> Location = Drawing::Point(nPosX, nPosY);//��ͼƬ���λ����Ϊ���
}
		 //Ϊbutton1�ؼ����Click�¼�������
private: System::Void On_Start(System::Object^  sender, System::EventArgs^  e) {
	if (this->timer3->Enabled)  {//�ж�timer3�Ƿ������У���������˵��������Ϸ�ѿ�ʼ��
		this->button1->Text = L"��ʼ";//��button1���ı���������Ϊ����ʼ��
		this->timer2->Stop();//ֹͣ��ʱ��timer2
		this->timer3->Stop();//ֹͣ��ʱ��timer3
		Form1_Load(nullptr, nullptr);//������Ϸ�����µ���Form1�����Load�¼�������
	}
	else//��ʱ��Ϸδ��ʼ
	{
		this->button1->Text = L"����";//��button1���ı���������Ϊ��������
		this->timer2->Start();//������ʱ��timer2
		this->timer3->Start();//������ʱ��timer3
	}
}
		 //ΪpictureBox1�ؼ����Click�¼�������
private: System::Void On_Hit(System::Object^  sender, System::EventArgs^  e) {
	if (this->timer3->Enabled) {//�����Ϸ�ѿ�ʼ
		this->button1->Text = L"��ʼ";
		this->timer2->Stop();
		this->timer3->Stop();
		int nScore = 100 * nTime / 60;//����÷�
		String^ str = String::Concat(L"�����", nScore.ToString());//�÷ֵĸ�ֵ
		MessageBox::Show(str, L"Congratulations!");//�ô�������÷�
		Form1_Load(nullptr, nullptr);//���¿�ʼ��Ϸ
	}
}
};
}

