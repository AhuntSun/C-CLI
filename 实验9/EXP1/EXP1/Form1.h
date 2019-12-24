#pragma once
#include "SerialDlg.h" 
namespace EXP1 {

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
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem20;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem21;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem13;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem14;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem15;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem16;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem17;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem18;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem19;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem10;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem11;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem12;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem6;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem7;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem8;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem9;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem5;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem20 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem21 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem13 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem14 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem15 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem16 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem17 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem18 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem19 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem10 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem11 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem12 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem6 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem7 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem8 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem9 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem5 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->toolStripMenuItem1,
					this->toolStripMenuItem2, this->toolStripMenuItem3, this->toolStripMenuItem4, this->toolStripMenuItem5
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(487, 25);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->Click += gcnew System::EventHandler(this, &Form1::serialToolStripMenuItem_Click);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripMenuItem20,
					this->toolStripMenuItem21
			});
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(44, 21);
			this->toolStripMenuItem1->Text = L"系统";
			this->toolStripMenuItem1->DropDownItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Form1::On_DoSystemMenu);
			// 
			// toolStripMenuItem20
			// 
			this->toolStripMenuItem20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->toolStripMenuItem20->Name = L"toolStripMenuItem20";
			this->toolStripMenuItem20->Size = System::Drawing::Size(100, 22);
			this->toolStripMenuItem20->Text = L"打开";
			// 
			// toolStripMenuItem21
			// 
			this->toolStripMenuItem21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->toolStripMenuItem21->Name = L"toolStripMenuItem21";
			this->toolStripMenuItem21->Size = System::Drawing::Size(100, 22);
			this->toolStripMenuItem21->Text = L"退出";
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->toolStripMenuItem2->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->toolStripMenuItem13,
					this->toolStripMenuItem14, this->toolStripMenuItem15, this->toolStripMenuItem16
			});
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(68, 21);
			this->toolStripMenuItem2->Text = L"通信设置";
			// 
			// toolStripMenuItem13
			// 
			this->toolStripMenuItem13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->toolStripMenuItem13->Name = L"toolStripMenuItem13";
			this->toolStripMenuItem13->Size = System::Drawing::Size(152, 22);
			this->toolStripMenuItem13->Text = L"串口";
			this->toolStripMenuItem13->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem13_Click);
			// 
			// toolStripMenuItem14
			// 
			this->toolStripMenuItem14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->toolStripMenuItem14->Name = L"toolStripMenuItem14";
			this->toolStripMenuItem14->Size = System::Drawing::Size(152, 22);
			this->toolStripMenuItem14->Text = L"网络";
			// 
			// toolStripMenuItem15
			// 
			this->toolStripMenuItem15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->toolStripMenuItem15->Name = L"toolStripMenuItem15";
			this->toolStripMenuItem15->Size = System::Drawing::Size(152, 22);
			this->toolStripMenuItem15->Text = L"USB";
			// 
			// toolStripMenuItem16
			// 
			this->toolStripMenuItem16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->toolStripMenuItem16->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripMenuItem17,
					this->toolStripMenuItem18, this->toolStripMenuItem19
			});
			this->toolStripMenuItem16->Name = L"toolStripMenuItem16";
			this->toolStripMenuItem16->Size = System::Drawing::Size(152, 22);
			this->toolStripMenuItem16->Text = L"无线";
			// 
			// toolStripMenuItem17
			// 
			this->toolStripMenuItem17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->toolStripMenuItem17->Name = L"toolStripMenuItem17";
			this->toolStripMenuItem17->Size = System::Drawing::Size(100, 22);
			this->toolStripMenuItem17->Text = L"射频";
			// 
			// toolStripMenuItem18
			// 
			this->toolStripMenuItem18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->toolStripMenuItem18->Name = L"toolStripMenuItem18";
			this->toolStripMenuItem18->Size = System::Drawing::Size(100, 22);
			this->toolStripMenuItem18->Text = L"蓝牙";
			// 
			// toolStripMenuItem19
			// 
			this->toolStripMenuItem19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->toolStripMenuItem19->Name = L"toolStripMenuItem19";
			this->toolStripMenuItem19->Size = System::Drawing::Size(100, 22);
			this->toolStripMenuItem19->Text = L"红外";
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->toolStripMenuItem3->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripMenuItem10,
					this->toolStripMenuItem11, this->toolStripMenuItem12
			});
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(68, 21);
			this->toolStripMenuItem3->Text = L"空气参数";
			// 
			// toolStripMenuItem10
			// 
			this->toolStripMenuItem10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->toolStripMenuItem10->Name = L"toolStripMenuItem10";
			this->toolStripMenuItem10->Size = System::Drawing::Size(100, 22);
			this->toolStripMenuItem10->Text = L"温度";
			// 
			// toolStripMenuItem11
			// 
			this->toolStripMenuItem11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->toolStripMenuItem11->Name = L"toolStripMenuItem11";
			this->toolStripMenuItem11->Size = System::Drawing::Size(100, 22);
			this->toolStripMenuItem11->Text = L"湿度";
			// 
			// toolStripMenuItem12
			// 
			this->toolStripMenuItem12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->toolStripMenuItem12->Name = L"toolStripMenuItem12";
			this->toolStripMenuItem12->Size = System::Drawing::Size(100, 22);
			this->toolStripMenuItem12->Text = L"气压";
			// 
			// toolStripMenuItem4
			// 
			this->toolStripMenuItem4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->toolStripMenuItem4->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->toolStripMenuItem6,
					this->toolStripMenuItem7, this->toolStripMenuItem8, this->toolStripMenuItem9
			});
			this->toolStripMenuItem4->Name = L"toolStripMenuItem4";
			this->toolStripMenuItem4->Size = System::Drawing::Size(44, 21);
			this->toolStripMenuItem4->Text = L"查看";
			// 
			// toolStripMenuItem6
			// 
			this->toolStripMenuItem6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->toolStripMenuItem6->Name = L"toolStripMenuItem6";
			this->toolStripMenuItem6->Size = System::Drawing::Size(124, 22);
			this->toolStripMenuItem6->Text = L"工具栏";
			// 
			// toolStripMenuItem7
			// 
			this->toolStripMenuItem7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->toolStripMenuItem7->Name = L"toolStripMenuItem7";
			this->toolStripMenuItem7->Size = System::Drawing::Size(124, 22);
			this->toolStripMenuItem7->Text = L"状态栏";
			// 
			// toolStripMenuItem8
			// 
			this->toolStripMenuItem8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->toolStripMenuItem8->Name = L"toolStripMenuItem8";
			this->toolStripMenuItem8->Size = System::Drawing::Size(124, 22);
			this->toolStripMenuItem8->Text = L"字体";
			// 
			// toolStripMenuItem9
			// 
			this->toolStripMenuItem9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->toolStripMenuItem9->Name = L"toolStripMenuItem9";
			this->toolStripMenuItem9->Size = System::Drawing::Size(124, 22);
			this->toolStripMenuItem9->Text = L"自动换行";
			// 
			// toolStripMenuItem5
			// 
			this->toolStripMenuItem5->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->toolStripMenuItem5->ImageTransparentColor = System::Drawing::Color::White;
			this->toolStripMenuItem5->Name = L"toolStripMenuItem5";
			this->toolStripMenuItem5->Size = System::Drawing::Size(44, 21);
			this->toolStripMenuItem5->Text = L"帮助";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(64, 120);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(88, 32);
			this->button1->TabIndex = 1;
			this->button1->Text = L"添加";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(152, 120);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(104, 29);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::Teal;
			this->textBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox2->Location = System::Drawing::Point(0, 25);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox2->Size = System::Drawing::Size(487, 295);
			this->textBox2->TabIndex = 3;
			this->textBox2->WordWrap = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(487, 320);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"空气监控系统";
			this->Click += gcnew System::EventHandler(this, &Form1::On_DoMenuItem);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		String^strText = this->textBox1->Text->Trim();
		if (String::IsNullOrEmpty(strText))
		{
			MessageBox::Show("菜单项文本不能为空！", "提示");
			return;
		}
		for (int i = 0; i < toolStripMenuItem5->DropDownItems->Count; i++)
		{
			if (strText->Equals(toolStripMenuItem5->DropDownItems[i]->Text->Trim()))
			{
				MessageBox::Show("该菜单项已添加过，不能重复添加！", "提示");
				return;
			}
		}
		System::Windows::Forms::ToolStripMenuItem^  tempItem;
		tempItem = gcnew System::Windows::Forms::ToolStripMenuItem(strText);
		tempItem->Click += gcnew System::EventHandler(this, &Form1::On_DoMenuItem);
		this->toolStripMenuItem5->DropDownItems->Add(tempItem);
	}
private: System::Void On_DoMenuItem(System::Object^  sender, System::EventArgs^  e) {
	System::Windows::Forms::ToolStripMenuItem^  tempItem;
	tempItem = static_cast<System::Windows::Forms::ToolStripMenuItem^>(sender);
	if (tempItem != nullptr)  {
		String^ strText = tempItem->Text->Trim();
		if ((strText->Length >= 2) && (strText->Substring(0, 2)->Equals("退出")))
			this->Close();//若添加的菜单项为“退出”
		else
			MessageBox::Show(String::Concat("选择的菜单项是：", strText), "提示");
	}
}
		 //单击“系统”菜单，添加DropDownItemClicked事件处理方法On_DoSystemMenu
private: System::Void On_DoSystemMenu(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
	ToolStripMenuItem^ item;
	if (e == nullptr)
		item = safe_cast<ToolStripMenuItem^>(sender);
	else
		item = safe_cast<ToolStripMenuItem^>(e->ClickedItem);
	if (item == toolStripMenuItem20)
	{
		OpenFileDialog^ pOFD = gcnew OpenFileDialog();
		pOFD->Filter = "文本文件(*.txt)|*.txt|所有文件(*.*)|*.*";
		pOFD->DefaultExt = "txt";
		if (pOFD->ShowDialog() == Windows::Forms::DialogResult::OK)
		{
			System::IO::StreamReader ^pReader =
				gcnew System::IO::StreamReader(pOFD->FileName,
				System::Text::Encoding::Default);
			textBox2->Text = pReader->ReadToEnd();
			textBox2->Select(0, 0);
			pReader->Close();
			// 在状态栏上显示信息
			//statusStrip1->Items[3]->Text= "就绪";
			//statusStrip1->Items[3]->Text =pOFD->FileName;
		}
	}
	else if (item == toolStripMenuItem21)
		this->Close();
}
		 //在菜单项的Click事件中添加代码
private: System::Void serialToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	//SerialDlg ^dlg = gcnew SerialDlg();
	//dlg->ShowDialog();
}
private: System::Void toolStripMenuItem13_Click(System::Object^  sender, System::EventArgs^  e) {
	SerialDlg ^dlg = gcnew SerialDlg();
	dlg->ShowDialog();
}
};
}

