#pragma once

namespace WeatherForm {

	using namespace System::IO;
	using namespace System::Net;
	using namespace System::Text;
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
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::Windows::Forms::LinkLabel^  linkLabel2;
	private: System::Windows::Forms::WebBrowser^  webBrowser1;
	private: System::Windows::Forms::MonthCalendar^  monthCalendar1;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;



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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(176, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(142, 21);
			this->label1->TabIndex = 0;
			this->label1->Text = L"天时地利人和";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->ForeColor = System::Drawing::Color::Blue;
			this->label2->Location = System::Drawing::Point(24, 40);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(112, 40);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 14);
			this->label3->TabIndex = 2;
			this->label3->Text = L"label3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(24, 80);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(55, 14);
			this->label4->TabIndex = 3;
			this->label4->Text = L"label4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(112, 80);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 14);
			this->label5->TabIndex = 4;
			this->label5->Text = L"label5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(192, 80);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(55, 14);
			this->label6->TabIndex = 5;
			this->label6->Text = L"label6";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->Location = System::Drawing::Point(24, 120);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(55, 14);
			this->label7->TabIndex = 6;
			this->label7->Text = L"label7";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->Location = System::Drawing::Point(112, 120);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(55, 14);
			this->label8->TabIndex = 7;
			this->label8->Text = L"label8";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label9->Location = System::Drawing::Point(192, 120);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(55, 14);
			this->label9->TabIndex = 8;
			this->label9->Text = L"label9";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label10->Location = System::Drawing::Point(264, 120);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(63, 14);
			this->label10->TabIndex = 9;
			this->label10->Text = L"label10";
			// 
			// groupBox1
			// 
			this->groupBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"groupBox1.BackgroundImage")));
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Location = System::Drawing::Point(24, 48);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(440, 160);
			this->groupBox1->TabIndex = 10;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"天气";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DodgerBlue;
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(24, 248);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(72, 32);
			this->button1->TabIndex = 11;
			this->button1->Text = L"天气";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->BackColor = System::Drawing::SystemColors::Highlight;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->linkLabel1->LinkArea = System::Windows::Forms::LinkArea(2, 5);
			this->linkLabel1->LinkBehavior = System::Windows::Forms::LinkBehavior::HoverUnderline;
			this->linkLabel1->Location = System::Drawing::Point(136, 256);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(77, 21);
			this->linkLabel1->TabIndex = 12;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"中国气象局";
			this->linkLabel1->UseCompatibleTextRendering = true;
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Form1::linkLabel1_LinkClicked);
			// 
			// linkLabel2
			// 
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->BackColor = System::Drawing::Color::Gold;
			this->linkLabel2->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->linkLabel2->LinkArea = System::Windows::Forms::LinkArea(2, 7);
			this->linkLabel2->LinkBehavior = System::Windows::Forms::LinkBehavior::HoverUnderline;
			this->linkLabel2->Location = System::Drawing::Point(256, 256);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(106, 21);
			this->linkLabel2->TabIndex = 13;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"中国旅游天气网";
			this->linkLabel2->UseCompatibleTextRendering = true;
			this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Form1::linkLabel2_LinkClicked);
			// 
			// webBrowser1
			// 
			this->webBrowser1->Location = System::Drawing::Point(0, 288);
			this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser1->Name = L"webBrowser1";
			this->webBrowser1->Size = System::Drawing::Size(992, 288);
			this->webBrowser1->TabIndex = 14;
			this->webBrowser1->Url = (gcnew System::Uri(L"http://www.bilibili.com/", System::UriKind::Absolute));
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->monthCalendar1->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->monthCalendar1->Location = System::Drawing::Point(752, 16);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 16;
			this->monthCalendar1->DateChanged += gcnew System::Windows::Forms::DateRangeEventHandler(this, &Form1::monthCalendar1_DateChanged);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CalendarMonthBackground = System::Drawing::SystemColors::InactiveCaption;
			this->dateTimePicker1->Location = System::Drawing::Point(752, 200);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(224, 21);
			this->dateTimePicker1->TabIndex = 17;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &Form1::dateTimePicker1_ValueChanged);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(991, 573);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->monthCalendar1);
			this->Controls->Add(this->webBrowser1);
			this->Controls->Add(this->linkLabel2);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"宋体", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(134)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"天气预报天时地利人和";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
		this->linkLabel1->LinkVisited = true;
		System::Diagnostics::Process::Start("https://www.tianqi.com/");
	}
	private: System::Void linkLabel2_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
		this->linkLabel1->LinkVisited = true;
		System::Diagnostics::Process::Start("IExplore.exe", "http://www.tourweather.com.cn/");
	}

//点击“天气”按钮的事件处理函数
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		//try
		//{
		   //日期一相关天气
			/*WebRequest^request = WebRequest::Create("https://www.tianqi.com/guangzhou/");
			WebResponse^response = request->GetResponse();
			StreamReader^reader = gcnew StreamReader(response->GetResponseStream(),Encoding::GetEncoding("UTF-8"));
			String^webHtmlStr = reader->ReadToEnd();
			reader->Close();
			response->Close();

			//substring（int startIndex，int length）截取的字符串包括startIndex
			String^buff1 = webHtmlStr->Substring(webHtmlStr->IndexOf
				("<img src=\"http://content.pic.tianqistatic.com/content/20170919/307c11c79e3d08e0abdf9cb57b731ea5.jpg\" alt=\"广州天气预报\"></dt>"));
			String^buff2 = webHtmlStr->Substring(webHtmlStr->IndexOf("</i></p>"));
			String^buff3 = webHtmlStr->Substring(webHtmlStr->IndexOf("<dd class=\"shidu\">"));
			String^buff4 = webHtmlStr->Substring(webHtmlStr->IndexOf("<dd class=\"kongqi\">"));
			label2->Text = buff1->Substring(buff1->IndexOf("<h2>"), buff1->IndexOf("</h2>") - buff1->IndexOf("<h2>"))->Split('>')[1];
			
			String^s = 
				buff1->Substring(buff1->IndexOf("<dd class=\"week\">"), buff1->IndexOf("<dd class=\"weather\">") - 
				buff1->IndexOf("<dd class=\"week\">"))->Split('>')[1];
			label3->Text = s = s->Substring(0, s->Length - 4);
			label4->Text = "当前温度：" + buff1->Substring(buff1->IndexOf("<b>"), buff1->IndexOf("</b>") - buff1->IndexOf("<b>"))->Split('>')[1] + "℃";
			label5->Text = "天气状况：" + buff2->Substring(buff2->IndexOf("<b>"), buff2->IndexOf("</b>") - buff2->IndexOf("<b>"))->Split('>')[1];
			label6->Text = "当天温度范围：" + buff2->Substring(buff2->IndexOf("</b>"), buff2->IndexOf("</span>") - buff2->IndexOf("</b>"))->Split('>')[1];
			label7->Text = "当前" + buff3->Substring(buff3->IndexOf("<b>"), buff3->IndexOf("</b>") - buff3->IndexOf("<b>"))->Split('>')[1];
			label8->Text = buff4->Substring(buff4->IndexOf("<h6>"), buff4->IndexOf("</h6>") - buff4->IndexOf("<h6>"))->Split('>')[1];
			label9->Text = buff4->Substring(buff4->IndexOf("<span>"), buff4->IndexOf("<br />") - buff4->IndexOf("<span>"))->Split('>')[1];
			label10->Text = buff4->Substring(buff4->IndexOf("<br />"), buff4->IndexOf("</span>") - buff4->IndexOf("<br />"))->Split('>')[1];*/
		//}

		//日期二天气相关
		WebRequest^request = WebRequest::Create("https://www.tianqi.com/guangzhou/");
		WebResponse^response = request->GetResponse();
		StreamReader^reader = gcnew StreamReader(response->GetResponseStream(), Encoding::GetEncoding("UTF-8"));
		String^webHtmlStr = reader->ReadToEnd();
		reader->Close();
		response->Close();

		//substring（int startIndex，int length）截取的字符串包括startIndex
		String^buff1 = webHtmlStr->Substring(webHtmlStr->IndexOf
			("<dt><img src=\"http://content.pic.tianqistatic.com/content/20170919/307c11c79e3d08e0abdf9cb57b731ea5.jpg\" alt=\"广州天气预报\"></dt>"));
		String^buff2 = webHtmlStr->Substring(webHtmlStr->IndexOf("</i></p>"));
		String^buff3 = webHtmlStr->Substring(webHtmlStr->IndexOf("<dd class=\"shidu\">"));
		String^buff4 = webHtmlStr->Substring(webHtmlStr->IndexOf("<dd class=\"kongqi\">"));
		label2->Text = buff1->Substring(buff1->IndexOf("<h2>"), buff1->IndexOf("</h2>") - buff1->IndexOf("<h2>"))->Split('>')[1];

		String^s =
			buff1->Substring(buff1->IndexOf("<dd class=\"week\">"), buff1->IndexOf("<dd class=\"weather\">") -
			buff1->IndexOf("<dd class=\"week\">"))->Split('>')[1];
		label3->Text = s = s->Substring(0, s->Length - 4);
		label4->Text = "当前温度：" + buff1->Substring(buff1->IndexOf("<b>"), buff1->IndexOf("</b>") - buff1->IndexOf("<b>"))->Split('>')[1] + "℃";
		label5->Text = "天气状况：" + buff2->Substring(buff2->IndexOf("<b>"), buff2->IndexOf("</b>") - buff2->IndexOf("<b>"))->Split('>')[1];
		label6->Text = "当天温度范围：" + buff2->Substring(buff2->IndexOf("</b>"), buff2->IndexOf("</span>") - buff2->IndexOf("</b>"))->Split('>')[1];
		label7->Text = "当前" + buff3->Substring(buff3->IndexOf("<b>"), buff3->IndexOf("</b>") - buff3->IndexOf("<b>"))->Split('>')[1];
		label8->Text = buff4->Substring(buff4->IndexOf("<h6>"), buff4->IndexOf("</h6>") - buff4->IndexOf("<h6>"))->Split('>')[1];
		label9->Text = buff4->Substring(buff4->IndexOf("<span>"), buff4->IndexOf("<br />") - buff4->IndexOf("<span>"))->Split('>')[1];
		label10->Text = buff4->Substring(buff4->IndexOf("<br />"), buff4->IndexOf("</span>") - buff4->IndexOf("<br />"))->Split('>')[1];

		//catch (Exception ^e){
			//MessageBox::Show(e->Message);
	//}
	}

private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
	this->linkLabel2->LinkColor = Color::Blue;
	this->linkLabel2->ActiveLinkColor = Color::Green;
	button1_Click(sender, e);
}
private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	monthCalendar1->SelectionStart = dateTimePicker1->Value;
	monthCalendar1->SelectionEnd = dateTimePicker1->Value;
}
private: System::Void monthCalendar1_DateChanged(System::Object^  sender, System::Windows::Forms::DateRangeEventArgs^  e) {
	this->dateTimePicker1->Value = e->Start;
}
};
}

