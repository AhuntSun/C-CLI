#pragma once

namespace EXP1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// SerialDlg 摘要
	/// </summary>
	public ref class SerialDlg : public System::Windows::Forms::Form
	{
	public:
		SerialDlg(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~SerialDlg()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  comboBox1;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  串口ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  波特率ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  数据位ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  停止位ToolStripMenuItem;
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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->串口ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->波特率ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->数据位ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->停止位ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->comboBox1->ContextMenuStrip = this->contextMenuStrip1;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(112, 48);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 20);
			this->comboBox1->TabIndex = 0;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->串口ToolStripMenuItem,
					this->波特率ToolStripMenuItem, this->数据位ToolStripMenuItem, this->停止位ToolStripMenuItem
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(113, 92);
			this->contextMenuStrip1->Opening += gcnew System::ComponentModel::CancelEventHandler(this, &SerialDlg::contextMenuStrip1_Opening);
			// 
			// 串口ToolStripMenuItem
			// 
			this->串口ToolStripMenuItem->Name = L"串口ToolStripMenuItem";
			this->串口ToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->串口ToolStripMenuItem->Text = L"串口";
			this->串口ToolStripMenuItem->Click += gcnew System::EventHandler(this, &SerialDlg::串口ToolStripMenuItem_Click);
			// 
			// 波特率ToolStripMenuItem
			// 
			this->波特率ToolStripMenuItem->Name = L"波特率ToolStripMenuItem";
			this->波特率ToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->波特率ToolStripMenuItem->Text = L"波特率";
			this->波特率ToolStripMenuItem->Click += gcnew System::EventHandler(this, &SerialDlg::波特率ToolStripMenuItem_Click);
			// 
			// 数据位ToolStripMenuItem
			// 
			this->数据位ToolStripMenuItem->Name = L"数据位ToolStripMenuItem";
			this->数据位ToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->数据位ToolStripMenuItem->Text = L"数据位";
			this->数据位ToolStripMenuItem->Click += gcnew System::EventHandler(this, &SerialDlg::数据位ToolStripMenuItem_Click);
			// 
			// 停止位ToolStripMenuItem
			// 
			this->停止位ToolStripMenuItem->Name = L"停止位ToolStripMenuItem";
			this->停止位ToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->停止位ToolStripMenuItem->Text = L"停止位";
			this->停止位ToolStripMenuItem->Click += gcnew System::EventHandler(this, &SerialDlg::停止位ToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->ContextMenuStrip = this->contextMenuStrip1;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(40, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"串口";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label2->ContextMenuStrip = this->contextMenuStrip1;
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(40, 96);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"波特率";
			// 
			// comboBox2
			// 
			this->comboBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->comboBox2->ContextMenuStrip = this->contextMenuStrip1;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(112, 96);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 20);
			this->comboBox2->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label3->ContextMenuStrip = this->contextMenuStrip1;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(40, 144);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 16);
			this->label3->TabIndex = 5;
			this->label3->Text = L"数据位";
			// 
			// comboBox3
			// 
			this->comboBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->comboBox3->ContextMenuStrip = this->contextMenuStrip1;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(112, 144);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(121, 20);
			this->comboBox3->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label4->ContextMenuStrip = this->contextMenuStrip1;
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(40, 192);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(59, 16);
			this->label4->TabIndex = 7;
			this->label4->Text = L"停止位";
			// 
			// comboBox4
			// 
			this->comboBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->comboBox4->ContextMenuStrip = this->contextMenuStrip1;
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(112, 192);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(121, 20);
			this->comboBox4->TabIndex = 6;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(48, 256);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(72, 32);
			this->button1->TabIndex = 8;
			this->button1->Text = L"确认";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &SerialDlg::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->Location = System::Drawing::Point(152, 256);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(72, 32);
			this->button2->TabIndex = 9;
			this->button2->Text = L"取消";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// SerialDlg
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Teal;
			this->ClientSize = System::Drawing::Size(276, 310);
			this->ContextMenuStrip = this->contextMenuStrip1;
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Name = L"SerialDlg";
			this->Text = L"串口设置";
			this->Load += gcnew System::EventHandler(this, &SerialDlg::SerialDlg_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &SerialDlg::SerialDlg_MouseDown);
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//   为“确定”按钮添加代码，显示串口设置的参数：
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		String ^str = "串口参数设置为：";
		str = str + "\n串口：" + this->comboBox1->Text;
		str = str + "\n波特率：" + this->comboBox2->Text;
		str = str + "\n数据位：" + this->comboBox3->Text;
		str = str + "\n停止位：" + this->comboBox4->Text;
		MessageBox::Show(str, "串口参数设置");
	}
private: System::Void SerialDlg_Load(System::Object^  sender, System::EventArgs^  e) {
}
		 //为窗体添加MouseDown事件处理方法On_MouseDown
private: System::Void SerialDlg_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	// 判断是否右击鼠标
	if (e->Button == System::Windows::Forms::MouseButtons::Right)
	{
		this->contextMenuStrip1->Show(this, e->Location);
	}
}
		 //在其属性窗口中，添加Opening事件处理方法
private: System::Void contextMenuStrip1_Opening(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
	for (int i = 0; i < contextMenuStrip1->Items->Count; i++)
		contextMenuStrip1->Items[i]->Enabled = true;
	if (contextMenuStrip1->SourceControl == this->comboBox1)
		contextMenuStrip1->Items[0]->Enabled = false;
	if (contextMenuStrip1->SourceControl == this->comboBox2)
		contextMenuStrip1->Items[1]->Enabled = false;
	if (contextMenuStrip1->SourceControl == this->comboBox3)
		contextMenuStrip1->Items[2]->Enabled = false;
	if (contextMenuStrip1->SourceControl == this->comboBox4)
		contextMenuStrip1->Items[3]->Enabled = false;
}

private: System::Void 串口ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show(L"显示串口参数");
}
private: System::Void 波特率ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show(L"显示波特率参数");
}
private: System::Void 数据位ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show(L"显示数据位参数");
}
private: System::Void 停止位ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show(L"显示停止位参数");
}
};
}
