#pragma once
#include "Note.h"
#include "AboutDlg.h"
#include "WinMess.h"
using namespace System::IO;
namespace EXP2 {

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
	private: System::Windows::Forms::ToolStripMenuItem^  文件FToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  新建NToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  打开OToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  退出XToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  窗口ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  层叠ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  水平平铺ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  垂直平铺ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  帮助HToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  关于AToolStripMenuItem;

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		static int FormCount = 1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
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
	private: System::Windows::Forms::ToolStripMenuItem^  系统信息BToolStripMenuItem;


			 System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->文件FToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->新建NToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->打开OToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->退出XToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->窗口ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->层叠ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->水平平铺ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->垂直平铺ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->帮助HToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->关于AToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
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
			this->系统信息BToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->文件FToolStripMenuItem,
					this->窗口ToolStripMenuItem, this->帮助HToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->MdiWindowListItem = this->窗口ToolStripMenuItem;
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(470, 25);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// 文件FToolStripMenuItem
			// 
			this->文件FToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->文件FToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->新建NToolStripMenuItem,
					this->打开OToolStripMenuItem, this->退出XToolStripMenuItem
			});
			this->文件FToolStripMenuItem->Name = L"文件FToolStripMenuItem";
			this->文件FToolStripMenuItem->Size = System::Drawing::Size(50, 21);
			this->文件FToolStripMenuItem->Text = L"文件&F";
			// 
			// 新建NToolStripMenuItem
			// 
			this->新建NToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->新建NToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"新建NToolStripMenuItem.Image")));
			this->新建NToolStripMenuItem->Name = L"新建NToolStripMenuItem";
			this->新建NToolStripMenuItem->Size = System::Drawing::Size(110, 22);
			this->新建NToolStripMenuItem->Text = L"新建&N";
			this->新建NToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::新建NToolStripMenuItem_Click);
			// 
			// 打开OToolStripMenuItem
			// 
			this->打开OToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->打开OToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"打开OToolStripMenuItem.Image")));
			this->打开OToolStripMenuItem->Name = L"打开OToolStripMenuItem";
			this->打开OToolStripMenuItem->Size = System::Drawing::Size(110, 22);
			this->打开OToolStripMenuItem->Text = L"打开&O";
			this->打开OToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::打开OToolStripMenuItem_Click);
			// 
			// 退出XToolStripMenuItem
			// 
			this->退出XToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->退出XToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"退出XToolStripMenuItem.Image")));
			this->退出XToolStripMenuItem->Name = L"退出XToolStripMenuItem";
			this->退出XToolStripMenuItem->Size = System::Drawing::Size(110, 22);
			this->退出XToolStripMenuItem->Text = L"退出&X";
			this->退出XToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::OnExit);
			// 
			// 窗口ToolStripMenuItem
			// 
			this->窗口ToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->窗口ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->层叠ToolStripMenuItem,
					this->水平平铺ToolStripMenuItem, this->垂直平铺ToolStripMenuItem
			});
			this->窗口ToolStripMenuItem->Name = L"窗口ToolStripMenuItem";
			this->窗口ToolStripMenuItem->Size = System::Drawing::Size(44, 21);
			this->窗口ToolStripMenuItem->Text = L"窗口";
			this->窗口ToolStripMenuItem->DropDownItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Form1::窗口ToolStripMenuItem_DropDownItemClicked);
			// 
			// 层叠ToolStripMenuItem
			// 
			this->层叠ToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->层叠ToolStripMenuItem->Name = L"层叠ToolStripMenuItem";
			this->层叠ToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->层叠ToolStripMenuItem->Text = L"层叠";
			// 
			// 水平平铺ToolStripMenuItem
			// 
			this->水平平铺ToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->水平平铺ToolStripMenuItem->Name = L"水平平铺ToolStripMenuItem";
			this->水平平铺ToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->水平平铺ToolStripMenuItem->Text = L"水平平铺";
			// 
			// 垂直平铺ToolStripMenuItem
			// 
			this->垂直平铺ToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->垂直平铺ToolStripMenuItem->Name = L"垂直平铺ToolStripMenuItem";
			this->垂直平铺ToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->垂直平铺ToolStripMenuItem->Text = L"垂直平铺";
			// 
			// 帮助HToolStripMenuItem
			// 
			this->帮助HToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->帮助HToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->关于AToolStripMenuItem,
					this->系统信息BToolStripMenuItem
			});
			this->帮助HToolStripMenuItem->Name = L"帮助HToolStripMenuItem";
			this->帮助HToolStripMenuItem->Size = System::Drawing::Size(53, 21);
			this->帮助HToolStripMenuItem->Text = L"帮助&H";
			// 
			// 关于AToolStripMenuItem
			// 
			this->关于AToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->关于AToolStripMenuItem->Name = L"关于AToolStripMenuItem";
			this->关于AToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->关于AToolStripMenuItem->Text = L"关于&A....";
			this->关于AToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::关于AToolStripMenuItem_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
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
			this->toolStrip1->Size = System::Drawing::Size(470, 25);
			this->toolStrip1->TabIndex = 3;
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
			// 系统信息BToolStripMenuItem
			// 
			this->系统信息BToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->系统信息BToolStripMenuItem->Name = L"系统信息BToolStripMenuItem";
			this->系统信息BToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->系统信息BToolStripMenuItem->Text = L"系统信息&B";
			this->系统信息BToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::系统信息BToolStripMenuItem_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(470, 405);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"多文档编辑器";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
	}

private: System::Void 新建NToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Note ^newMDIChild = gcnew Note();
	newMDIChild->MdiParent = this;
	newMDIChild->Text = "文档" + FormCount.ToString();
	FormCount++;
	newMDIChild->Show();//显示子窗口
}


private: System::Void OnExit(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void 窗口ToolStripMenuItem_DropDownItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
	ToolStripMenuItem^ item;
	if (e == nullptr)
		item = safe_cast<ToolStripMenuItem^>(sender);
	else
		item = safe_cast<ToolStripMenuItem^>(e->ClickedItem);
	if (item == 层叠ToolStripMenuItem)
		this->LayoutMdi(MdiLayout::Cascade);    //层叠
	else if (item == 水平平铺ToolStripMenuItem)
		this->LayoutMdi(MdiLayout::TileHorizontal);//水平平铺
	else if (item == 垂直平铺ToolStripMenuItem)
		this->LayoutMdi(MdiLayout::TileVertical);//垂直平铺
}
private: System::Void 打开OToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^filename;
	System::Windows::Forms::DialogResult dlg;   //获取通用对话框的输入
	openFileDialog1->InitialDirectory = "E:\\C++\\VCPP\\";
	openFileDialog1->Filter = "我的文档(*.mtxt)|*.mtxt|Rtf files(*.rtf)|*.rtf|文本文件(*.txt)|*.txt";
	openFileDialog1->FilterIndex = 1;
	openFileDialog1->RestoreDirectory = true;
	openFileDialog1->FileName = "";
	dlg = openFileDialog1->ShowDialog();
	try{
		if (dlg == System::Windows::Forms::DialogResult::OK)
		{
			if (Path::GetExtension(openFileDialog1->FileName) == ".rtf"
				|| Path::GetExtension(openFileDialog1->FileName) == ".mtxt"
				|| Path::GetExtension(openFileDialog1->FileName) == ".txt"){  //使用Path类需在前面添加using namespace System::IO;
				filename = openFileDialog1->FileName;
				Note ^newMDIChild = gcnew Note();
				newMDIChild->MdiParent = this;
				//newMDIChild->Filename = filename;
				newMDIChild->Show();
			}
			else MessageBox::Show(L"选择的不是mtxt、RTF或TXT格式的文件！无效", "错误", MessageBoxButtons::OK);
		}
	}
	catch (System::ArgumentException ^e){
		MessageBox::Show(L"打开文件出错！", "错误", MessageBoxButtons::OK);
	}
}
private: System::Void 关于AToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	AboutDlg^ dlg = gcnew AboutDlg;
	dlg->ShowDialog();
}
private: System::Void 系统信息BToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	WinMess^ dlg = gcnew WinMess;
	dlg->ShowDialog();
}
};
}

