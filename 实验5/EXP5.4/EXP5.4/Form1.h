#pragma once

namespace EXP54 {

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
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button7;
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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"groupBox1.BackgroundImage")));
			this->groupBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->groupBox1->Location = System::Drawing::Point(1, 0);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(494, 256);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"通用对话框";
			// 
			// button6
			// 
			this->button6->ForeColor = System::Drawing::SystemColors::Desktop;
			this->button6->Location = System::Drawing::Point(347, 153);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(123, 32);
			this->button6->TabIndex = 5;
			this->button6->Text = L"打印设置对话框";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button5
			// 
			this->button5->ForeColor = System::Drawing::SystemColors::Desktop;
			this->button5->Location = System::Drawing::Point(176, 153);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(118, 34);
			this->button5->TabIndex = 4;
			this->button5->Text = L"保存文件对话框";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button4
			// 
			this->button4->ForeColor = System::Drawing::SystemColors::Desktop;
			this->button4->Location = System::Drawing::Point(347, 49);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(118, 32);
			this->button4->TabIndex = 3;
			this->button4->Text = L"浏览文件对话框";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button3
			// 
			this->button3->ForeColor = System::Drawing::SystemColors::Desktop;
			this->button3->Location = System::Drawing::Point(176, 47);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(118, 34);
			this->button3->TabIndex = 2;
			this->button3->Text = L"打开文件对话框";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button2
			// 
			this->button2->ForeColor = System::Drawing::SystemColors::Desktop;
			this->button2->Location = System::Drawing::Point(30, 153);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(108, 34);
			this->button2->TabIndex = 1;
			this->button2->Text = L"字体对话框";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button1
			// 
			this->button1->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button1->ForeColor = System::Drawing::SystemColors::Desktop;
			this->button1->Location = System::Drawing::Point(30, 47);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(108, 34);
			this->button1->TabIndex = 0;
			this->button1->Text = L"颜色对话框";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button7
			// 
			this->button7->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button7->Font = (gcnew System::Drawing::Font(L"微软雅黑", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button7->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button7->Location = System::Drawing::Point(501, 107);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 33);
			this->button7->TabIndex = 6;
			this->button7->Text = L"退出";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Desktop;
			this->ClientSize = System::Drawing::Size(584, 257);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->groupBox1);
			this->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(134)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Form1";
			this->Text = L"                                                通用对话框示例";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::On_Closing);
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		//颜色对话框事件对应的处理函数
		Color color;
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		ColorDialog^ dlg = gcnew ColorDialog();
		dlg->AllowFullOpen = true;
		dlg->FullOpen = true;    //使颜色对话框设为扩展模式，全部打开
		dlg->Color = color;
		if (dlg->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			MessageBox::Show(L"选定的颜色为" + dlg->Color);
			color = dlg->Color;
		}
	}
			 //字体对话框事件对应的处理函数
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	FontDialog^ dlg = gcnew FontDialog();
	if (dlg->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		MessageBox::Show(L"选定的字体为" + dlg->Font->Name);
	}
}
		 //打开文件对话框事件对应的处理函数
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	OpenFileDialog^ dlg = gcnew OpenFileDialog();
	dlg->Title="我的文件打开对话框";
	dlg->Filter = "影像文件(*.avi)|*.avi|所有文件(*.*)|*.*";
	dlg->DefaultExt ="txt";
	if (dlg->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		MessageBox::Show(L"选定打开的文件为" + dlg->FileName);
	}
}
		 //文件浏览对话框事件对应的处理函数
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	FolderBrowserDialog^ dlg = gcnew FolderBrowserDialog();
	if (dlg->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		MessageBox::Show(L"选定浏览的路径为" + dlg->SelectedPath);
	}
}
		 //保存文件对话框事件对应的处理函数
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	SaveFileDialog^ dlg = gcnew SaveFileDialog();
	if (dlg->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		MessageBox::Show(L"选定保存的文件为" + dlg->FileName);
	}
}
		 //打印设置对话框事件对应的处理函数
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	PrintDialog^ dlg = gcnew PrintDialog();
	if (dlg->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		MessageBox::Show(L"选定打印机设备名为" + dlg->PrinterSettings->PrinterName);
		//MessageBox::Show( L"选定保存的文件为" + dlg-> DeviceName);
	}
}
		 //退出事件对应的处理函数
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();//关闭所有应用程序窗口
	//this->Close();//关闭当前应用窗口
}

		 //退出事件对应的处理函数
private: System::Void On_Closing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
	if (System::Windows::Forms::DialogResult::Yes !=
		MessageBox::Show(L"你是否真的要退出？", "确认", MessageBoxButtons::YesNo))
		e->Cancel = true;
}
private: System::Void Form1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
}
};
}
