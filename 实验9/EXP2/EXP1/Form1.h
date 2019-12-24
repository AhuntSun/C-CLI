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
	private: System::Windows::Forms::ToolStrip^  toolStrip1;

	private: System::Windows::Forms::ToolStripButton^  新建NToolStripButton;
	private: System::Windows::Forms::ToolStripButton^  打开OToolStripButton;
	private: System::Windows::Forms::ToolStripButton^  保存SToolStripButton;
	private: System::Windows::Forms::ToolStripButton^  打印PToolStripButton;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator;
	private: System::Windows::Forms::ToolStripButton^  剪切UToolStripButton;
	private: System::Windows::Forms::ToolStripButton^  复制CToolStripButton;
	private: System::Windows::Forms::ToolStripButton^  粘贴PToolStripButton;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripButton^  帮助LToolStripButton;
	private: System::Windows::Forms::ToolStrip^  toolStrip2;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton2;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton3;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton4;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton5;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton6;
	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel2;
	private: System::Windows::Forms::ToolStripProgressBar^  toolStripProgressBar1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel3;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel4;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel5;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel6;
	private: System::Windows::Forms::NotifyIcon^  notifyIcon1;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem22;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem23;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem24;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem25;
	private: System::Windows::Forms::Timer^  timer2;


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
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->新建NToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->打开OToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->保存SToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->打印PToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->剪切UToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->复制CToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->粘贴PToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->帮助LToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStrip2 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton4 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton5 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton6 = (gcnew System::Windows::Forms::ToolStripButton());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel2 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripProgressBar1 = (gcnew System::Windows::Forms::ToolStripProgressBar());
			this->toolStripStatusLabel3 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel4 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel5 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel6 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->notifyIcon1 = (gcnew System::Windows::Forms::NotifyIcon(this->components));
			this->contextMenuStrip2 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->toolStripMenuItem22 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem23 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem24 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem25 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->menuStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->toolStrip2->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->contextMenuStrip2->SuspendLayout();
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
			this->menuStrip1->Size = System::Drawing::Size(907, 25);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->Click += gcnew System::EventHandler(this, &Form1::serialToolStripMenuItem_Click);
			this->menuStrip1->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MenuItemDefault);
			this->menuStrip1->MouseLeave += gcnew System::EventHandler(this, &Form1::On_MenuItemDefault);
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
			this->toolStripMenuItem1->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MenuItem);
			// 
			// toolStripMenuItem20
			// 
			this->toolStripMenuItem20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->toolStripMenuItem20->Name = L"toolStripMenuItem20";
			this->toolStripMenuItem20->Size = System::Drawing::Size(100, 22);
			this->toolStripMenuItem20->Text = L"打开";
			this->toolStripMenuItem20->Click += gcnew System::EventHandler(this, &Form1::OpenToolStripButton_Click);
			this->toolStripMenuItem20->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MenuItem);
			// 
			// toolStripMenuItem21
			// 
			this->toolStripMenuItem21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->toolStripMenuItem21->Name = L"toolStripMenuItem21";
			this->toolStripMenuItem21->Size = System::Drawing::Size(100, 22);
			this->toolStripMenuItem21->Text = L"退出";
			this->toolStripMenuItem21->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MenuItem);
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
			this->toolStripMenuItem2->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MenuItem);
			// 
			// toolStripMenuItem13
			// 
			this->toolStripMenuItem13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->toolStripMenuItem13->Name = L"toolStripMenuItem13";
			this->toolStripMenuItem13->Size = System::Drawing::Size(100, 22);
			this->toolStripMenuItem13->Text = L"串口";
			this->toolStripMenuItem13->Click += gcnew System::EventHandler(this, &Form1::toolStripButton6_Click);
			this->toolStripMenuItem13->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MenuItem);
			// 
			// toolStripMenuItem14
			// 
			this->toolStripMenuItem14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->toolStripMenuItem14->Name = L"toolStripMenuItem14";
			this->toolStripMenuItem14->Size = System::Drawing::Size(100, 22);
			this->toolStripMenuItem14->Text = L"网络";
			this->toolStripMenuItem14->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MenuItem);
			// 
			// toolStripMenuItem15
			// 
			this->toolStripMenuItem15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->toolStripMenuItem15->Name = L"toolStripMenuItem15";
			this->toolStripMenuItem15->Size = System::Drawing::Size(100, 22);
			this->toolStripMenuItem15->Text = L"USB";
			this->toolStripMenuItem15->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MenuItem);
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
			this->toolStripMenuItem16->Size = System::Drawing::Size(100, 22);
			this->toolStripMenuItem16->Text = L"无线";
			this->toolStripMenuItem16->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MenuItem);
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
			this->toolStripMenuItem3->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MenuItem);
			// 
			// toolStripMenuItem10
			// 
			this->toolStripMenuItem10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->toolStripMenuItem10->Name = L"toolStripMenuItem10";
			this->toolStripMenuItem10->Size = System::Drawing::Size(100, 22);
			this->toolStripMenuItem10->Text = L"温度";
			this->toolStripMenuItem10->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MenuItem);
			// 
			// toolStripMenuItem11
			// 
			this->toolStripMenuItem11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->toolStripMenuItem11->Name = L"toolStripMenuItem11";
			this->toolStripMenuItem11->Size = System::Drawing::Size(100, 22);
			this->toolStripMenuItem11->Text = L"湿度";
			this->toolStripMenuItem11->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MenuItem);
			// 
			// toolStripMenuItem12
			// 
			this->toolStripMenuItem12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->toolStripMenuItem12->Name = L"toolStripMenuItem12";
			this->toolStripMenuItem12->Size = System::Drawing::Size(100, 22);
			this->toolStripMenuItem12->Text = L"气压";
			this->toolStripMenuItem12->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MenuItem);
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
			this->toolStripMenuItem4->DropDownItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Form1::On_DoViewMenu);
			this->toolStripMenuItem4->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MenuItem);
			// 
			// toolStripMenuItem6
			// 
			this->toolStripMenuItem6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->toolStripMenuItem6->Name = L"toolStripMenuItem6";
			this->toolStripMenuItem6->Size = System::Drawing::Size(124, 22);
			this->toolStripMenuItem6->Text = L"工具栏";
			this->toolStripMenuItem6->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MenuItem);
			// 
			// toolStripMenuItem7
			// 
			this->toolStripMenuItem7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->toolStripMenuItem7->Name = L"toolStripMenuItem7";
			this->toolStripMenuItem7->Size = System::Drawing::Size(124, 22);
			this->toolStripMenuItem7->Text = L"状态栏";
			this->toolStripMenuItem7->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MenuItem);
			// 
			// toolStripMenuItem8
			// 
			this->toolStripMenuItem8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->toolStripMenuItem8->Name = L"toolStripMenuItem8";
			this->toolStripMenuItem8->Size = System::Drawing::Size(124, 22);
			this->toolStripMenuItem8->Text = L"字体";
			this->toolStripMenuItem8->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MenuItem);
			// 
			// toolStripMenuItem9
			// 
			this->toolStripMenuItem9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->toolStripMenuItem9->Name = L"toolStripMenuItem9";
			this->toolStripMenuItem9->Size = System::Drawing::Size(124, 22);
			this->toolStripMenuItem9->Text = L"自动换行";
			this->toolStripMenuItem9->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MenuItem);
			// 
			// toolStripMenuItem5
			// 
			this->toolStripMenuItem5->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->toolStripMenuItem5->ImageTransparentColor = System::Drawing::Color::White;
			this->toolStripMenuItem5->Name = L"toolStripMenuItem5";
			this->toolStripMenuItem5->Size = System::Drawing::Size(44, 21);
			this->toolStripMenuItem5->Text = L"帮助";
			this->toolStripMenuItem5->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MenuItem);
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
			this->textBox2->Size = System::Drawing::Size(907, 372);
			this->textBox2->TabIndex = 3;
			this->textBox2->WordWrap = false;
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(10) {
				this->新建NToolStripButton,
					this->打开OToolStripButton, this->保存SToolStripButton, this->打印PToolStripButton, this->toolStripSeparator, this->剪切UToolStripButton,
					this->复制CToolStripButton, this->粘贴PToolStripButton, this->toolStripSeparator1, this->帮助LToolStripButton
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 25);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(907, 25);
			this->toolStrip1->TabIndex = 4;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// 新建NToolStripButton
			// 
			this->新建NToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->新建NToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"新建NToolStripButton.Image")));
			this->新建NToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->新建NToolStripButton->Name = L"新建NToolStripButton";
			this->新建NToolStripButton->Size = System::Drawing::Size(23, 22);
			this->新建NToolStripButton->Text = L"新建(&N)";
			// 
			// 打开OToolStripButton
			// 
			this->打开OToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->打开OToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"打开OToolStripButton.Image")));
			this->打开OToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->打开OToolStripButton->Name = L"打开OToolStripButton";
			this->打开OToolStripButton->Size = System::Drawing::Size(23, 22);
			this->打开OToolStripButton->Text = L"打开(&O)";
			this->打开OToolStripButton->Click += gcnew System::EventHandler(this, &Form1::OpenToolStripButton_Click);
			// 
			// 保存SToolStripButton
			// 
			this->保存SToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->保存SToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"保存SToolStripButton.Image")));
			this->保存SToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->保存SToolStripButton->Name = L"保存SToolStripButton";
			this->保存SToolStripButton->Size = System::Drawing::Size(23, 22);
			this->保存SToolStripButton->Text = L"保存(&S)";
			// 
			// 打印PToolStripButton
			// 
			this->打印PToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->打印PToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"打印PToolStripButton.Image")));
			this->打印PToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->打印PToolStripButton->Name = L"打印PToolStripButton";
			this->打印PToolStripButton->Size = System::Drawing::Size(23, 22);
			this->打印PToolStripButton->Text = L"打印(&P)";
			// 
			// toolStripSeparator
			// 
			this->toolStripSeparator->Name = L"toolStripSeparator";
			this->toolStripSeparator->Size = System::Drawing::Size(6, 25);
			// 
			// 剪切UToolStripButton
			// 
			this->剪切UToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->剪切UToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"剪切UToolStripButton.Image")));
			this->剪切UToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->剪切UToolStripButton->Name = L"剪切UToolStripButton";
			this->剪切UToolStripButton->Size = System::Drawing::Size(23, 22);
			this->剪切UToolStripButton->Text = L"剪切(&U)";
			// 
			// 复制CToolStripButton
			// 
			this->复制CToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->复制CToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"复制CToolStripButton.Image")));
			this->复制CToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->复制CToolStripButton->Name = L"复制CToolStripButton";
			this->复制CToolStripButton->Size = System::Drawing::Size(23, 22);
			this->复制CToolStripButton->Text = L"复制(&C)";
			// 
			// 粘贴PToolStripButton
			// 
			this->粘贴PToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->粘贴PToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"粘贴PToolStripButton.Image")));
			this->粘贴PToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->粘贴PToolStripButton->Name = L"粘贴PToolStripButton";
			this->粘贴PToolStripButton->Size = System::Drawing::Size(23, 22);
			this->粘贴PToolStripButton->Text = L"粘贴(&P)";
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 25);
			// 
			// 帮助LToolStripButton
			// 
			this->帮助LToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->帮助LToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"帮助LToolStripButton.Image")));
			this->帮助LToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->帮助LToolStripButton->Name = L"帮助LToolStripButton";
			this->帮助LToolStripButton->Size = System::Drawing::Size(23, 22);
			this->帮助LToolStripButton->Text = L"帮助(&L)";
			// 
			// toolStrip2
			// 
			this->toolStrip2->BackColor = System::Drawing::Color::White;
			this->toolStrip2->Dock = System::Windows::Forms::DockStyle::None;
			this->toolStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->toolStripButton2,
					this->toolStripButton3, this->toolStripButton4, this->toolStripButton5, this->toolStripButton6
			});
			this->toolStrip2->Location = System::Drawing::Point(232, 24);
			this->toolStrip2->Name = L"toolStrip2";
			this->toolStrip2->Size = System::Drawing::Size(127, 25);
			this->toolStrip2->TabIndex = 5;
			this->toolStrip2->Text = L"toolStrip2";
			this->toolStrip2->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Form1::On_ToolItemClick);
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(23, 22);
			this->toolStripButton2->Text = L"toolStripButton2";
			// 
			// toolStripButton3
			// 
			this->toolStripButton3->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton3.Image")));
			this->toolStripButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton3->Name = L"toolStripButton3";
			this->toolStripButton3->Size = System::Drawing::Size(23, 22);
			this->toolStripButton3->Text = L"toolStripButton3";
			// 
			// toolStripButton4
			// 
			this->toolStripButton4->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton4.Image")));
			this->toolStripButton4->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton4->Name = L"toolStripButton4";
			this->toolStripButton4->Size = System::Drawing::Size(23, 22);
			this->toolStripButton4->Text = L"toolStripButton4";
			// 
			// toolStripButton5
			// 
			this->toolStripButton5->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton5.Image")));
			this->toolStripButton5->ImageTransparentColor = System::Drawing::Color::White;
			this->toolStripButton5->Name = L"toolStripButton5";
			this->toolStripButton5->Size = System::Drawing::Size(23, 22);
			this->toolStripButton5->Text = L"toolStripButton5";
			// 
			// toolStripButton6
			// 
			this->toolStripButton6->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton6.Image")));
			this->toolStripButton6->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton6->Name = L"toolStripButton6";
			this->toolStripButton6->Size = System::Drawing::Size(23, 22);
			this->toolStripButton6->Text = L"串口";
			this->toolStripButton6->Click += gcnew System::EventHandler(this, &Form1::toolStripButton6_Click);
			// 
			// imageList1
			// 
			this->imageList1->ColorDepth = System::Windows::Forms::ColorDepth::Depth4Bit;
			this->imageList1->ImageSize = System::Drawing::Size(16, 16);
			this->imageList1->TransparentColor = System::Drawing::Color::White;
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->toolStripStatusLabel1,
					this->toolStripStatusLabel2, this->toolStripProgressBar1, this->toolStripStatusLabel3, this->toolStripStatusLabel4, this->toolStripStatusLabel5,
					this->toolStripStatusLabel6
			});
			this->statusStrip1->Location = System::Drawing::Point(0, 375);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(907, 22);
			this->statusStrip1->TabIndex = 6;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(131, 17);
			this->toolStripStatusLabel1->Text = L"toolStripStatusLabel1";
			// 
			// toolStripStatusLabel2
			// 
			this->toolStripStatusLabel2->Name = L"toolStripStatusLabel2";
			this->toolStripStatusLabel2->Size = System::Drawing::Size(131, 17);
			this->toolStripStatusLabel2->Text = L"toolStripStatusLabel2";
			// 
			// toolStripProgressBar1
			// 
			this->toolStripProgressBar1->Maximum = 60;
			this->toolStripProgressBar1->Name = L"toolStripProgressBar1";
			this->toolStripProgressBar1->Size = System::Drawing::Size(100, 16);
			this->toolStripProgressBar1->Step = 1;
			// 
			// toolStripStatusLabel3
			// 
			this->toolStripStatusLabel3->Name = L"toolStripStatusLabel3";
			this->toolStripStatusLabel3->Size = System::Drawing::Size(377, 17);
			this->toolStripStatusLabel3->Spring = true;
			this->toolStripStatusLabel3->Text = L"X=231,Y=245";
			// 
			// toolStripStatusLabel4
			// 
			this->toolStripStatusLabel4->AutoSize = false;
			this->toolStripStatusLabel4->BorderSides = static_cast<System::Windows::Forms::ToolStripStatusLabelBorderSides>((((System::Windows::Forms::ToolStripStatusLabelBorderSides::Left | System::Windows::Forms::ToolStripStatusLabelBorderSides::Top)
				| System::Windows::Forms::ToolStripStatusLabelBorderSides::Right)
				| System::Windows::Forms::ToolStripStatusLabelBorderSides::Bottom));
			this->toolStripStatusLabel4->BorderStyle = System::Windows::Forms::Border3DStyle::SunkenOuter;
			this->toolStripStatusLabel4->Name = L"toolStripStatusLabel4";
			this->toolStripStatusLabel4->Size = System::Drawing::Size(40, 17);
			// 
			// toolStripStatusLabel5
			// 
			this->toolStripStatusLabel5->AutoSize = false;
			this->toolStripStatusLabel5->BorderSides = static_cast<System::Windows::Forms::ToolStripStatusLabelBorderSides>((((System::Windows::Forms::ToolStripStatusLabelBorderSides::Left | System::Windows::Forms::ToolStripStatusLabelBorderSides::Top)
				| System::Windows::Forms::ToolStripStatusLabelBorderSides::Right)
				| System::Windows::Forms::ToolStripStatusLabelBorderSides::Bottom));
			this->toolStripStatusLabel5->BorderStyle = System::Windows::Forms::Border3DStyle::SunkenOuter;
			this->toolStripStatusLabel5->Name = L"toolStripStatusLabel5";
			this->toolStripStatusLabel5->Size = System::Drawing::Size(40, 17);
			// 
			// toolStripStatusLabel6
			// 
			this->toolStripStatusLabel6->AutoSize = false;
			this->toolStripStatusLabel6->BorderSides = static_cast<System::Windows::Forms::ToolStripStatusLabelBorderSides>((((System::Windows::Forms::ToolStripStatusLabelBorderSides::Left | System::Windows::Forms::ToolStripStatusLabelBorderSides::Top)
				| System::Windows::Forms::ToolStripStatusLabelBorderSides::Right)
				| System::Windows::Forms::ToolStripStatusLabelBorderSides::Bottom));
			this->toolStripStatusLabel6->BorderStyle = System::Windows::Forms::Border3DStyle::SunkenOuter;
			this->toolStripStatusLabel6->Name = L"toolStripStatusLabel6";
			this->toolStripStatusLabel6->Size = System::Drawing::Size(40, 17);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::Timer1Tick);
			// 
			// notifyIcon1
			// 
			this->notifyIcon1->ContextMenuStrip = this->contextMenuStrip2;
			this->notifyIcon1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"notifyIcon1.Icon")));
			this->notifyIcon1->Text = L"空气监控系统";
			this->notifyIcon1->Visible = true;
			this->notifyIcon1->DoubleClick += gcnew System::EventHandler(this, &Form1::notifyIcon1_DoubleClick);
			// 
			// contextMenuStrip2
			// 
			this->contextMenuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->toolStripMenuItem22,
					this->toolStripMenuItem23, this->toolStripMenuItem24, this->toolStripMenuItem25
			});
			this->contextMenuStrip2->Name = L"contextMenuStrip2";
			this->contextMenuStrip2->Size = System::Drawing::Size(101, 92);
			// 
			// toolStripMenuItem22
			// 
			this->toolStripMenuItem22->Name = L"toolStripMenuItem22";
			this->toolStripMenuItem22->Size = System::Drawing::Size(100, 22);
			this->toolStripMenuItem22->Text = L"还原";
			this->toolStripMenuItem22->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem22_Click);
			// 
			// toolStripMenuItem23
			// 
			this->toolStripMenuItem23->Name = L"toolStripMenuItem23";
			this->toolStripMenuItem23->Size = System::Drawing::Size(100, 22);
			this->toolStripMenuItem23->Text = L"动画";
			this->toolStripMenuItem23->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem23_Click);
			// 
			// toolStripMenuItem24
			// 
			this->toolStripMenuItem24->Name = L"toolStripMenuItem24";
			this->toolStripMenuItem24->Size = System::Drawing::Size(100, 22);
			this->toolStripMenuItem24->Text = L"静态";
			this->toolStripMenuItem24->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem24_Click);
			// 
			// toolStripMenuItem25
			// 
			this->toolStripMenuItem25->Name = L"toolStripMenuItem25";
			this->toolStripMenuItem25->Size = System::Drawing::Size(100, 22);
			this->toolStripMenuItem25->Text = L"退出";
			this->toolStripMenuItem25->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem25_Click);
			// 
			// timer2
			// 
			this->timer2->Tick += gcnew System::EventHandler(this, &Form1::timer2_Tick);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(907, 397);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->toolStrip2);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->ShowInTaskbar = false;
			this->Text = L"空气监控系统";
			this->Load += gcnew System::EventHandler(this, &Form1::On_Load);
			this->SizeChanged += gcnew System::EventHandler(this, &Form1::Form1_SizeChanged);
			this->Click += gcnew System::EventHandler(this, &Form1::On_DoMenuItem);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::Form1_MouseMove);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->toolStrip2->ResumeLayout(false);
			this->toolStrip2->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->contextMenuStrip2->ResumeLayout(false);
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
			statusStrip1->Items[3]->Text= "就绪";
			statusStrip1->Items[3]->Text =pOFD->FileName;
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
		 //为窗体Form1添加Load事件的处理方法On_Load
private: System::Void On_Load(System::Object^  sender, System::EventArgs^  e) {
	/*Bitmap^ bmp = gcnew Bitmap("toolbar1.bmp");
	// 从Bitmap对象复制指定的内容添加到图像列表中
	Imaging::PixelFormat ft = bmp->PixelFormat;
	int nWidth = bmp->Width / 4;
	Rectangle rc = Rectangle(0, 0, nWidth, bmp->Height);
	for (int i = 0; i < 4; i++) {
		imageList1->Images->Add(bmp->Clone(rc, ft));
		rc.Offset(nWidth, 0);
	}
	// 设置工具按钮图像
	this->toolStrip2->ImageList = imageList1;
	for (int i = 0; i < 4; i++)
		this->toolStrip2->Items[i]->ImageIndex = i;*/
	// 设置菜单项的初始状态
	this->toolStripMenuItem1->Checked = true;
	this->toolStripMenuItem2->Checked = true;
	// 设置工具按钮的初始状态
	this->toolStripButton2->Checked = true;
	this->toolStripButton3->Checked = true;
}
		 //添加DropDownItemClicked事件处理方法On_DoViewMenu
private: System::Void On_DoViewMenu(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
	ToolStripMenuItem^ item;
	if (e == nullptr)
		item = safe_cast<ToolStripMenuItem^>(sender);
	else
		item = safe_cast<ToolStripMenuItem^>(e->ClickedItem);
	if (item == toolStripMenuItem6)      //“工具栏”菜单项
	{
		toolStripMenuItem6->Checked = !toolStripMenuItem6->Checked;
		toolStripButton2->Checked = toolStripMenuItem6->Checked;
		//显示/隐藏工具栏
		toolStrip1->Visible = toolStripMenuItem6->Checked;
	}
	else if (item == toolStripMenuItem7)    // “状态栏”菜单项
	{
		toolStripMenuItem7->Checked = !toolStripMenuItem7->Checked;
		toolStripButton3->Checked = toolStripMenuItem7->Checked;
	// 显示/隐藏状态栏
		statusStrip1->Visible = toolStripMenuItem7->Checked;
	}
	else if (item == toolStripMenuItem8)    // “字体”菜单项
	{
		FontDialog ^fDlg = gcnew FontDialog();
		fDlg->ShowColor = true;
		fDlg->ShowEffects = true;
		if (fDlg->ShowDialog() == Windows::Forms::DialogResult::OK)
		{
			textBox2->Font = fDlg->Font;
			textBox2->ForeColor = fDlg->Color;
		}
	}
	else if (item == toolStripMenuItem9)  // “自动换行”菜单项
	{
		toolStripMenuItem9->Checked = !toolStripMenuItem9->Checked;
		toolStripButton5->Checked = toolStripMenuItem9->Checked;
		// 设置换行属性
		this->textBox2->WordWrap = toolStripMenuItem9->Checked;
	}
}
		 //添加ItemClicked事件处理方法On_ToolItemClick
private: System::Void On_ToolItemClick(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
	ToolStripButton^ btn;
	btn = safe_cast<ToolStripButton^>(e->ClickedItem);
	if (btn == this->toolStripButton2)
		On_DoViewMenu(toolStripMenuItem6, nullptr);
	else if (btn == this->toolStripButton3)
		On_DoViewMenu(toolStripMenuItem7, nullptr);
	else if (btn == this->toolStripButton4)
		On_DoViewMenu(toolStripMenuItem8, nullptr);
	else if (btn == this->toolStripButton5)
		On_DoViewMenu(toolStripMenuItem9, nullptr);
	else if(btn == this->toolStripButton6)
		serialToolStripMenuItem_Click(toolStripMenuItem9, nullptr);
}
		 //为工具栏的“打开”按钮添加Clicked事件处理方法OpenToolStripButton_Click
private: System::Void OpenToolStripButton_Click(System::Object^  sender, System::EventArgs^  e) {
	On_DoSystemMenu(toolStripMenuItem22, nullptr);
}
		 //添加Tick事件的处理方法Timer1Tick
private: System::Void Timer1Tick(System::Object^  sender, System::EventArgs^  e) {
	DateTime dateTime = DateTime::Now;             //获取系统当前时间
	toolStripStatusLabel1->Text = dateTime.ToLongDateString();       // 显示日期
	toolStripStatusLabel2->Text = dateTime.ToLongTimeString();     // 显示时间
	toolStripProgressBar1->Value = dateTime.Second;           //进度条

	if (Control::IsKeyLocked(Keys::CapsLock))
		this->toolStripStatusLabel4->Text = "大写";
	else
		this->toolStripStatusLabel4->Text = "";
	if (Control::IsKeyLocked(Keys::NumLock))
		this->toolStripStatusLabel5->Text = "数字";
	else
		this->toolStripStatusLabel5->Text = "";
	if (Control::IsKeyLocked(Keys::Scroll))
		this->toolStripStatusLabel6->Text = "滚动";
	else
		this->toolStripStatusLabel6->Text = "";
}
		 //添加剂NotifyIcon控件的doubleclick事件
private: System::Void notifyIcon1_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
	this->Show();
	//为窗体还原的实现。
	this->WindowState = System::Windows::Forms::FormWindowState::Normal;
}
		 //添加事件处理方法Form1_SizeChanged事件
private: System::Void Form1_SizeChanged(System::Object^  sender, System::EventArgs^  e) {
	//窗体最小化的判断条件
	if (this->WindowState == System::Windows::Forms::FormWindowState::Minimized)
	{
		this->Hide();
		this->notifyIcon1->Visible = true;//显示程序图标
		//为实现气球提示
		this->notifyIcon1->ShowBalloonTip(30, "注意", "大家好，这是我设计的一个系统", ToolTipIcon::Info);
	}
}
		 //添加四个menuitem的click事件代码
private: System::Void toolStripMenuItem22_Click(System::Object^  sender, System::EventArgs^  e) {
	this->notifyIcon1->Visible = false;
	this->Show();
	//为窗体还原的实现。
	this->WindowState = System::Windows::Forms::FormWindowState::Normal;
}
private: System::Void toolStripMenuItem23_Click(System::Object^  sender, System::EventArgs^  e) {
	this->timer2->Enabled = true;
}
private: System::Void toolStripMenuItem24_Click(System::Object^  sender, System::EventArgs^  e) {
	this->timer2->Enabled = false;
	this->notifyIcon1->Icon = gcnew System::Drawing::Icon("icon1.ico");
}
private: System::Void toolStripMenuItem25_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
		 //添加定时事件代码
private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
	static int i = 1; i = (i < 8 ? i + 1 : 1);         // 图像的索引,共有8个图标
	this->notifyIcon1->Icon = gcnew System::Drawing::Icon(L"Rotate" + i + L".ico", 64, 64);
	if (Control::IsKeyLocked(Keys::CapsLock))
		this->toolStripStatusLabel4->Text = "大写";
	else
		this->toolStripStatusLabel4->Text = "";
	if (Control::IsKeyLocked(Keys::NumLock))
		this->toolStripStatusLabel5->Text = "数字";
	else
		this->toolStripStatusLabel5->Text = "";
	if (Control::IsKeyLocked(Keys::Scroll))
		this->toolStripStatusLabel6->Text = "滚动";
	else
		this->toolStripStatusLabel6->Text = "";
}

private: System::Void toolStripButton6_Click(System::Object^  sender, System::EventArgs^  e) {
	SerialDlg ^dlg = gcnew SerialDlg();
	dlg->ShowDialog();
}
private: System::Void On_MenuItem(System::Object^  sender, System::EventArgs^  e) {
	String^ str = "就绪";
	ToolStripMenuItem^ item = safe_cast<ToolStripMenuItem^>(sender);
	if (item == toolStripMenuItem1)  str = "打开一个文件或退出程序...";
	if (item == toolStripMenuItem20) str = "打开一个文本文件...";
	if (item == toolStripMenuItem21)  str = "退出应用程序...";
	if (item == toolStripMenuItem2)  str = "设置通信接口操作...";
	if (item == toolStripMenuItem13)    str = "设置串口操作...";
	if (item == toolStripMenuItem14)   str = "设置网络接口操作...";
	if (item == toolStripMenuItem15)   str = "设置USB接口操作...";
	if (item == toolStripMenuItem16) str = "设置无线通信接口操作...";
	if (item == toolStripMenuItem3)  str = "查看监控参数...";
	if (item == toolStripMenuItem10)   str = "查看温度";
	if (item == toolStripMenuItem11)  str = "查看湿度";
	if (item == toolStripMenuItem12)     str = "查看气压";
	if (item == toolStripMenuItem4)  str = "查看状态设置...";
	if (item == toolStripMenuItem5) str = "帮助";
		if (item == toolStripMenuItem6){
			if (toolStripMenuItem6->Checked)str = "隐藏工具栏...";
			else str = "显示工具栏...";
		}
	if (item == toolStripMenuItem7){
		if (toolStripMenuItem7->Checked)str = "隐藏状态栏...";
		else str = "显示状态栏...";
	}
	if (item == toolStripMenuItem8)  str = "设置显示的字体和颜色...";
	if (item == toolStripMenuItem9){
		if (toolStripMenuItem9->Checked) str = "取消自动换行...";
		else str = "文本自动换行...";
	}
	this->statusStrip1->Items[3]->Text = str; // 在状态栏上显示信息
}
		 //添加菜单menuStrip1的MouseEnter事件和MouseLeave事件处理方法On_MenuItemDefault,
private: System::Void On_MenuItemDefault(System::Object^  sender, System::EventArgs^  e) {
	// 在状态栏上显示信息
	this->statusStrip1->Items[3]->Text = "就绪";
}
//为窗体Form1添加鼠标移动的MouseMove事件处理函数
private: System::Void Form1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	String ^str = "X=" + e->X.ToString() + ",Y=" + e->Y.ToString();
	this->toolStripStatusLabel3->Text = str;
}
};
}

