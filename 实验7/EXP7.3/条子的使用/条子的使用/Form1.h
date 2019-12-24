#pragma once

namespace 条子的使用 {

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
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->Location = System::Drawing::Point(24, 32);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(136, 104);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"选择";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->radioButton2->Location = System::Drawing::Point(16, 64);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(100, 18);
			this->radioButton2->TabIndex = 3;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"裙子的底色";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton1_CheckedChanged2);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->radioButton1->Location = System::Drawing::Point(16, 24);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(100, 18);
			this->radioButton1->TabIndex = 2;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"上衣的底色";
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
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox2->Location = System::Drawing::Point(24, 152);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(384, 128);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"进度条";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
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
			this->button2->Text = L"放大";
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
			this->button1->Text = L"缩小";
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
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox3->Location = System::Drawing::Point(24, 288);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(384, 168);
			this->groupBox3->TabIndex = 1;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"滚动条和滑动条";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
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
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
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
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
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
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox4->Location = System::Drawing::Point(440, 24);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->groupBox4->Size = System::Drawing::Size(200, 192);
			this->groupBox4->TabIndex = 2;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"上衣的底色";
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
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox5->Location = System::Drawing::Point(440, 232);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->groupBox5->Size = System::Drawing::Size(200, 200);
			this->groupBox5->TabIndex = 3;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"裙子的底色";
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
			this->Text = L"进度条的使用";
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
		//添加相应的私有变量
		 private:int nRValue, nGValue,nBValue;
		 private:int nRValue1, nGValue1, nBValue1;
		private:int nRValue2, nGValue2, nBValue2;
		private:Color color1, color2;
		private:System::Drawing:: Size size1, size2;
		private:int v1, v2;
				//该方法设置了图片框随进度条的变化而变化
		void UpdatePercentText(void)
		{
		//求出progressBar1的取值范围并将值赋给nRange
			int nRange = progressBar1->Maximum - progressBar1->Minimum;
			float fPercent = (float)(progressBar1->Value) / (float)nRange;//求出进度条当前值的比例
			label4->Text = fPercent.ToString("0.00%");//把比例转化为百分数并赋值给label4的文本
			if (this->radioButton2->Checked==true)//判断是否选择了“裙子的底色”这个选项
			{
				int w = (int)(size2.Width*fPercent);//宽的大小乘上进度条的半分比
				int h = (int)(size2.Height*fPercent);//高的大小乘上进度条的半分比
				this->pictureBox2->Size = System::Drawing::Size(w, h);//相应的赋值给“裙子的底色”图片框，达到放大目的
				v2 = progressBar1->Value;//把当前进度条的值赋给v2
			}
			else//如果选择的是“上衣的底色”选项
			{ 
				int w = (int)(size1.Width*fPercent);//宽的大小乘上进度条的半分比
				int h = (int)(size1.Width*fPercent);//高的大小乘上进度条的半分比
				this->pictureBox1->Size = System::Drawing::Size(w, h);//相应的赋值给“上衣的底色”图片框，达到放大目的
				v1 = progressBar1->Value;//把当前进度条的值赋给v1
			}
				}
		//为窗口Load事件添加事件处理函数
	private: System::Void On_Load(System::Object^  sender, System::EventArgs^  e) {
		progressBar1->Maximum = 100;//设定进度条最大值为100
		progressBar1->Minimum = 0;//设定进度条最小值为0
		progressBar1->Value = 70;//设定进度条当前量
		progressBar1->Step = 5;//设置进度条的步长
		v1 = v2 = progressBar1->Value;//把进度条当前量赋值给v1,v2
		size1 = this->pictureBox1->Size;//用size1储存“上衣的底色”图片框
		size2 = this->pictureBox2->Size;//用size2储存“裙子的底色”图片框
		nRValue = nGValue = nBValue = 192;//指定组框背景三原色的颜色分量
		hScrollBar1->Minimum = 0;//设定hScrollBar1的最小值为0
		hScrollBar1->Maximum = 255;//设定hScrollBar1的最大值为255
		hScrollBar1->Value = nRValue;//设定hScrollBar1的初值 
		trackBar1->Minimum = 0;//设定trackBar1的最小值为0
		trackBar1->Maximum = 255;//设定trackBar1的最大值为255
		trackBar1->Value = nGValue;//设定trackBar1的初值
		trackBar1->TickFrequency = 20;//设定trackBar1每刻度的增量
		trackBar2->Minimum = 0; //设定trackBar2的最小值为0
		trackBar2->Maximum = 255;//设定trackBar2的最大值为255
		trackBar2->Value = nBValue;//设定trackBar2的初值
		trackBar2->TickFrequency = 20;//设定trackBar2每刻度的增量
		color1 = color2 = Color::FromArgb(nRValue, nGValue, nBValue);//运用三原色调色
		nRValue1 = nRValue2 = nRValue;
		nGValue1 = nGValue2 = nGValue;
		nBValue1 = nBValue2 = nBValue;	
		this->radioButton2->Checked = false;//默认选择“上衣颜色”选项
		this->radioButton1->Checked = true;
		UpdatePercentText();//调用UpdatePercentText函数，更新进度条，使相应的图片框随进度条变化并显示百分比

	}
			 //为“放大”按钮添加Click事件处理方法On_Step
private: System::Void On_Step(System::Object^  sender, System::EventArgs^  e) {
	progressBar1->PerformStep();//增加进度条的位置
	UpdatePercentText();//更新进度条，使相应的图片框随进度条变化并显示百分比
}
		 //为“缩小”按钮添加Click事件处理方法On_Back
private: System::Void On_Back(System::Object^  sender, System::EventArgs^  e) {
	int nStep = progressBar1->Step;//把进度条的步长赋值给nStep
	progressBar1->Increment(-nStep);//负责增加进度条
	UpdatePercentText();//更新进度条，使相应的图片框随进度条变化并显示百分比
}

		 //添加下列自定义函数UpdateColor(void)，用于对颜色的更新：
		 void UpdateColor(void)
		 {
		 if (this->radioButton2->Checked==true)//判断是否选中“裙子的底色”选项
		 {
			 nRValue2 = nRValue;
			 nGValue2 = nGValue;
			 nBValue2 = nBValue;
			 color2 = Color::FromArgb(nRValue, nGValue, nBValue);//运用三原色进行调色
			 this->groupBox5->BackColor = color2;//更换裙子图片框背后的组合框的底色
		 }
		 else//同理，更换上衣的底色
		 {
			 nRValue1 = nRValue;
			 nGValue1 = nGValue;
			 nBValue1 = nBValue;
			 color1 = Color::FromArgb(nRValue, nGValue, nBValue);//运用三原色进行调色
			 this->groupBox4->BackColor = color1;//更换裙子图片框背后的组合框的底色
		 }
		 }

		 //分别为滚动条、中间滑动条、最后的滑动条控件添加ValueChanged事件处理方法On_RValue、On_GValue和On_BValue
private: System::Void On_RValue(System::Object^  sender, System::EventArgs^  e) {
	nRValue = this->hScrollBar1->Value;//取出当前进度条的值，作为颜色分度变量的值
	UpdateColor();//调用UpdateColor函数，更新颜色
}
private: System::Void On_GValue(System::Object^  sender, System::EventArgs^  e) {
	nGValue = this->trackBar1->Value; //取出当前进度条的值，作为颜色分度变量的值
	UpdateColor();//调用UpdateColor函数，更新颜色
}
private: System::Void On_BValue(System::Object^  sender, System::EventArgs^  e) {
	nBValue = this->trackBar2->Value;//取出当前进度条的值，作为颜色分度变量的值
	UpdateColor();//调用UpdateColor函数，更新颜色
}
		// 为radioButton1单选按钮控件添加CheckedChanged事件处理函数
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->radioButton1->Checked == true)//判断是否选中radioButton1
	{
		nRValue = nRValue1;
		nGValue = nGValue1;
		nBValue = nBValue1;
		this->hScrollBar1->Value = nRValue;//把hScrollBar1的值转化为代表颜色的变量
		this->trackBar1->Value = nGValue;//把trackBar1的值转化为代表颜色的变量
		this->trackBar2->Value = nBValue;//把trackBar2的值转化为代表颜色的变量
		progressBar1->Value = v1;//储存进度条的值
		UpdateColor();//调用UpdateColor函数，更新颜色
	}
}
		 // 为radioButton2单选按钮控件添加CheckedChanged事件处理函数
		 private: System::Void radioButton1_CheckedChanged2(System::Object^  sender, System::EventArgs^  e) {
			 if (this->radioButton2->Checked == true)//判断是否选中radioButton2
			 {
				 nRValue = nRValue2;
				 nGValue = nGValue2;
				 nBValue = nBValue2;
				 this->hScrollBar1->Value = nRValue;//把hScrollBar1的值转化为代表颜色的变量
				 this->trackBar1->Value = nGValue;//把trackBar1的值转化为代表颜色的变量
				 this->trackBar2->Value = nBValue;//把trackBar2的值转化为代表颜色的变量
				 progressBar1->Value = v2;
				 UpdateColor();//调用UpdateColor函数，更新颜色
			 }
		 }

};
}

