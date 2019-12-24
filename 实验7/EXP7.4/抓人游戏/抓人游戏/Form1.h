#pragma once

namespace 抓人游戏 {

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
		/// 必需的设计器变量。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
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
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(416, 136);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 40);
			this->button1->TabIndex = 2;
			this->button1->Text = L"开始";
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
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
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
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
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
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
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
			this->Text = L"抓人游戏";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		private: int nTime;//添加用于倒计时的整型成员变量nTime
private: System::Random ^ranX, ^ranY;//创建两个随机数对象句柄
		 //为Form1窗口Load事件添加事件处理函数
			private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				label1->Text = monthCalendar1->SelectionEnd.ToString();//将日历信息显示在lable1上
				nTime = 60;
				label3->Text = L"01:00";//设定lable3初始值为1分钟
				timer2->Interval = 1000;		// 设定计时timer2器触发事件的时间间隔，用于倒计时
				timer3->Interval = 1000;		//设定计时timer3器触发事件的时间间隔， 用于随机移动小图片		 	
				ranX = gcnew System::Random();	// 创建随机数类实例
				ranY = gcnew System::Random();	// 创建随机数类实例
			}
			 //为DateTimePicker控件添加ValueChanged事件处理函数
private: System::Void On_DtpValChanged(System::Object^  sender, System::EventArgs^  e) {

	monthCalendar1->SelectionStart = dateTimePicker1->Value;//用dateTimePicker1的值设定日历选择日期的起始时间
	monthCalendar1->SelectionEnd = dateTimePicker1->Value;//用dateTimePicker1的值设定日历选择日期的结束时间
}
		 //为MonthCalendar控件添加DateChanged事件处理函数
private: System::Void On_DateChanged(System::Object^  sender, System::Windows::Forms::DateRangeEventArgs^  e) {

	dateTimePicker1->Value = e->Start;//把日历选择日期的起始时间赋值给dateTimePicker1
	label1->Text = e->End.ToString();//随着日历控件的变化更新lable1的值
}
		 //为Timer1控件的Tick事件添加事件处理函数
private: System::Void timer1Tick(System::Object^  sender, System::EventArgs^  e) {

	static int i = 0; i = (i < 3 ? i + 1 : 0);         // 图像的索引,共有4个图标
	//通过ToBitmap()函数把icon文件转化为位图，并赋值给图片框1
	pictureBox1->Image = (gcnew System::Drawing::Icon(L"Dinosaurs" + i + L".ico", 64, 64))->ToBitmap();
	label2->Text = DateTime::Now.ToString(L"yyyy年MM月dd日\r\n HH点mm分ss秒");//把当前时间赋值给label2
}
		 //为Timer2控件的Tick事件添加事件处理函数
private: System::Void On_Tick2(System::Object^  sender, System::EventArgs^  e) {
	nTime--;//Timer2每次调用该函数时该值减一
	this->label3->Text = String::Concat(L"00:", nTime.ToString(L"00"));//label3显示nTime的值
	//ToString中的L"00"是一个自定义格式字符串，用来将整数按两位显示
	progressBar1->Value = nTime;  // 用进度条显示剩余时间nTime的值
	if (nTime <= 0) {
		On_Start(nullptr, nullptr);//当nTime的值减小到0时调用函数重新开始游戏
		MessageBox::Show(L"你要好好努力啊！", L"加油");//用窗口显示提示信息

	}
}
		 //为Timer3控件的Tick事件添加事件处理函数
private: System::Void On_Tick3(System::Object^  sender, System::EventArgs^  e) {
	System::Drawing::Size size = this->ClientSize;//获取窗体工作区的大小
	int nPosX = this->ranX->Next(size.Width);
	// 随机产生不超过窗体工作区宽度的整数
	int nPosY = this->ranX->Next(size.Height - 50);
	// 随机产生不超过窗体工作区高度的整数，减去50是因为窗体下方还有控件
	this->pictureBox1 -> Location = Drawing::Point(nPosX, nPosY);//把图片框的位置设为随机
}
		 //为button1控件添加Click事件处理函数
private: System::Void On_Start(System::Object^  sender, System::EventArgs^  e) {
	if (this->timer3->Enabled)  {//判断timer3是否在运行（若在运行说明此事游戏已开始）
		this->button1->Text = L"开始";//把button1的文本属性设置为“开始”
		this->timer2->Stop();//停止计时器timer2
		this->timer3->Stop();//停止计时器timer3
		Form1_Load(nullptr, nullptr);//结束游戏，重新调用Form1窗体的Load事件处理函数
	}
	else//此时游戏未开始
	{
		this->button1->Text = L"结束";//把button1的文本属性设置为“结束”
		this->timer2->Start();//启动计时器timer2
		this->timer3->Start();//启动计时器timer3
	}
}
		 //为pictureBox1控件添加Click事件处理函数
private: System::Void On_Hit(System::Object^  sender, System::EventArgs^  e) {
	if (this->timer3->Enabled) {//如果游戏已开始
		this->button1->Text = L"开始";
		this->timer2->Stop();
		this->timer3->Stop();
		int nScore = 100 * nTime / 60;//计算得分
		String^ str = String::Concat(L"你得了", nScore.ToString());//得分的赋值
		MessageBox::Show(str, L"Congratulations!");//用窗口输出得分
		Form1_Load(nullptr, nullptr);//重新开始游戏
	}
}
};
}

