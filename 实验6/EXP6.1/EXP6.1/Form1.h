#pragma once

namespace EXP61 {

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
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::Windows::Forms::LinkLabel^  linkLabel2;
	private: System::Windows::Forms::WebBrowser^  webBrowser1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	protected:

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
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->linkLabel1->LinkBehavior = System::Windows::Forms::LinkBehavior::HoverUnderline;
			this->linkLabel1->Location = System::Drawing::Point(0, 0);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(89, 20);
			this->linkLabel1->TabIndex = 0;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"暨南大学";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Form1::linkLabel1_LinkClicked);
			// 
			// linkLabel2
			// 
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->linkLabel2->LinkArea = System::Windows::Forms::LinkArea(0, 4);
			this->linkLabel2->LinkBehavior = System::Windows::Forms::LinkBehavior::HoverUnderline;
			this->linkLabel2->Location = System::Drawing::Point(117, 0);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(251, 28);
			this->linkLabel2->TabIndex = 1;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"面向对象程序设计—C++/CLI";
			this->linkLabel2->UseCompatibleTextRendering = true;
			this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Form1::linkLabel2_LinkClicked);
			// 
			// webBrowser1
			// 
			this->webBrowser1->Location = System::Drawing::Point(2, 22);
			this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser1->Name = L"webBrowser1";
			this->webBrowser1->Size = System::Drawing::Size(814, 530);
			this->webBrowser1->TabIndex = 2;
			this->webBrowser1->Url = (gcnew System::Uri(L"http://www.bilibili.com", System::UriKind::Absolute));
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(632, 32);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"刷新";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(544, 32);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"后退";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(456, 32);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 5;
			this->button3->Text = L"前进";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(720, 32);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 6;
			this->button4->Text = L"主页";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(823, 548);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->webBrowser1);
			this->Controls->Add(this->linkLabel2);
			this->Controls->Add(this->linkLabel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"连接与导航";
			this->Load += gcnew System::EventHandler(this, &Form1::On_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//第一个标签的事件处理函数
	private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
		this->linkLabel1->LinkVisited = true;
		//System::Diagnostics::Process::Start("IExplore.exe");
		System::Diagnostics::Process::Start("IExplore.exe", "www.jnu.edu.cn");
	
	}

//单击刷新按钮事件处理函数
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	webBrowser1->Refresh();
}

//单击后退按钮事件处理函数
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	webBrowser1->GoBack();
}
		 
//单击前进按钮事件处理函数
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	webBrowser1->GoForward();
}

//单击主页按钮事件处理函数
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	webBrowser1->GoHome();
}

//Form1的Load事件处理函数
private: System::Void On_Load(System::Object^  sender, System::EventArgs^  e) {
	this->linkLabel2->Links[0]->LinkData = "http://baike.so.com/doc/5634751-5847376.html";
	this->linkLabel2->Links->Add(4, 4, "http://baike.so.com/doc/3417785-3597266.html");
	this->linkLabel2->Links->Add(11, 7, "C++/CLI代表托管和本地编程的结合。\n它是进行.NET编程模式的最佳切入点。");
}

//标签二事件处理函数
private: System::Void linkLabel2_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
	int i = this->linkLabel2->Links->IndexOf(e->Link);
	this->linkLabel2->Links[i]->Visited = true;
	//获取当前用户点击的超级链接内容
	String^target = dynamic_cast<String^>(e->Link->LinkData);
	if (!String::IsNullOrEmpty(target))
	{
		target = target->Trim();
		//如果是一个URL，则打开IE并访问它，否则弹出一个消息对话框
		if (target->StartsWith(L"http"))
		{
			System::Diagnostics::Process::Start("IExplore.exe", target);
		}
		else
		{
			MessageBox::Show(target, linkLabel2->Text);
		}
	}
}
};
}

