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
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  �ļ�FToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �½�NToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��OToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �˳�XToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ���ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ˮƽƽ��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��ֱƽ��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����HToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����AToolStripMenuItem;

	private:
		/// <summary>
		/// ����������������
		/// </summary>
		static int FormCount = 1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripButton^  �½�NToolStripButton;
	private: System::Windows::Forms::ToolStripButton^  ��OToolStripButton;
	private: System::Windows::Forms::ToolStripButton^  ����SToolStripButton;
	private: System::Windows::Forms::ToolStripButton^  ��ӡPToolStripButton;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator;
	private: System::Windows::Forms::ToolStripButton^  ����UToolStripButton;
	private: System::Windows::Forms::ToolStripButton^  ����CToolStripButton;
	private: System::Windows::Forms::ToolStripButton^  ճ��PToolStripButton;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripButton^  ����LToolStripButton;
	private: System::Windows::Forms::ToolStripMenuItem^  ϵͳ��ϢBToolStripMenuItem;


			 System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����֧������ķ��� - ��Ҫ
		/// ʹ�ô���༭���޸Ĵ˷��������ݡ�
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->�ļ�FToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�½�NToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��OToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�˳�XToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ˮƽƽ��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��ֱƽ��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����HToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����AToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->�½�NToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->��OToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->����SToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->��ӡPToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->����UToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->����CToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->ճ��PToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->����LToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->ϵͳ��ϢBToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->�ļ�FToolStripMenuItem,
					this->����ToolStripMenuItem, this->����HToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->MdiWindowListItem = this->����ToolStripMenuItem;
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(470, 25);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// �ļ�FToolStripMenuItem
			// 
			this->�ļ�FToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->�ļ�FToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->�½�NToolStripMenuItem,
					this->��OToolStripMenuItem, this->�˳�XToolStripMenuItem
			});
			this->�ļ�FToolStripMenuItem->Name = L"�ļ�FToolStripMenuItem";
			this->�ļ�FToolStripMenuItem->Size = System::Drawing::Size(50, 21);
			this->�ļ�FToolStripMenuItem->Text = L"�ļ�&F";
			// 
			// �½�NToolStripMenuItem
			// 
			this->�½�NToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->�½�NToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"�½�NToolStripMenuItem.Image")));
			this->�½�NToolStripMenuItem->Name = L"�½�NToolStripMenuItem";
			this->�½�NToolStripMenuItem->Size = System::Drawing::Size(110, 22);
			this->�½�NToolStripMenuItem->Text = L"�½�&N";
			this->�½�NToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::�½�NToolStripMenuItem_Click);
			// 
			// ��OToolStripMenuItem
			// 
			this->��OToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->��OToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"��OToolStripMenuItem.Image")));
			this->��OToolStripMenuItem->Name = L"��OToolStripMenuItem";
			this->��OToolStripMenuItem->Size = System::Drawing::Size(110, 22);
			this->��OToolStripMenuItem->Text = L"��&O";
			this->��OToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::��OToolStripMenuItem_Click);
			// 
			// �˳�XToolStripMenuItem
			// 
			this->�˳�XToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->�˳�XToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"�˳�XToolStripMenuItem.Image")));
			this->�˳�XToolStripMenuItem->Name = L"�˳�XToolStripMenuItem";
			this->�˳�XToolStripMenuItem->Size = System::Drawing::Size(110, 22);
			this->�˳�XToolStripMenuItem->Text = L"�˳�&X";
			this->�˳�XToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::OnExit);
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->���ToolStripMenuItem,
					this->ˮƽƽ��ToolStripMenuItem, this->��ֱƽ��ToolStripMenuItem
			});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(44, 21);
			this->����ToolStripMenuItem->Text = L"����";
			this->����ToolStripMenuItem->DropDownItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Form1::����ToolStripMenuItem_DropDownItemClicked);
			// 
			// ���ToolStripMenuItem
			// 
			this->���ToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->���ToolStripMenuItem->Name = L"���ToolStripMenuItem";
			this->���ToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->���ToolStripMenuItem->Text = L"���";
			// 
			// ˮƽƽ��ToolStripMenuItem
			// 
			this->ˮƽƽ��ToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ˮƽƽ��ToolStripMenuItem->Name = L"ˮƽƽ��ToolStripMenuItem";
			this->ˮƽƽ��ToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->ˮƽƽ��ToolStripMenuItem->Text = L"ˮƽƽ��";
			// 
			// ��ֱƽ��ToolStripMenuItem
			// 
			this->��ֱƽ��ToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->��ֱƽ��ToolStripMenuItem->Name = L"��ֱƽ��ToolStripMenuItem";
			this->��ֱƽ��ToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->��ֱƽ��ToolStripMenuItem->Text = L"��ֱƽ��";
			// 
			// ����HToolStripMenuItem
			// 
			this->����HToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->����HToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->����AToolStripMenuItem,
					this->ϵͳ��ϢBToolStripMenuItem
			});
			this->����HToolStripMenuItem->Name = L"����HToolStripMenuItem";
			this->����HToolStripMenuItem->Size = System::Drawing::Size(53, 21);
			this->����HToolStripMenuItem->Text = L"����&H";
			// 
			// ����AToolStripMenuItem
			// 
			this->����AToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->����AToolStripMenuItem->Name = L"����AToolStripMenuItem";
			this->����AToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->����AToolStripMenuItem->Text = L"����&A....";
			this->����AToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::����AToolStripMenuItem_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(10) {
				this->�½�NToolStripButton,
					this->��OToolStripButton, this->����SToolStripButton, this->��ӡPToolStripButton, this->toolStripSeparator, this->����UToolStripButton,
					this->����CToolStripButton, this->ճ��PToolStripButton, this->toolStripSeparator1, this->����LToolStripButton
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 25);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(470, 25);
			this->toolStrip1->TabIndex = 3;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// �½�NToolStripButton
			// 
			this->�½�NToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->�½�NToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"�½�NToolStripButton.Image")));
			this->�½�NToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->�½�NToolStripButton->Name = L"�½�NToolStripButton";
			this->�½�NToolStripButton->Size = System::Drawing::Size(23, 22);
			this->�½�NToolStripButton->Text = L"�½�(&N)";
			// 
			// ��OToolStripButton
			// 
			this->��OToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->��OToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"��OToolStripButton.Image")));
			this->��OToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->��OToolStripButton->Name = L"��OToolStripButton";
			this->��OToolStripButton->Size = System::Drawing::Size(23, 22);
			this->��OToolStripButton->Text = L"��(&O)";
			// 
			// ����SToolStripButton
			// 
			this->����SToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->����SToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"����SToolStripButton.Image")));
			this->����SToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->����SToolStripButton->Name = L"����SToolStripButton";
			this->����SToolStripButton->Size = System::Drawing::Size(23, 22);
			this->����SToolStripButton->Text = L"����(&S)";
			// 
			// ��ӡPToolStripButton
			// 
			this->��ӡPToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->��ӡPToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"��ӡPToolStripButton.Image")));
			this->��ӡPToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->��ӡPToolStripButton->Name = L"��ӡPToolStripButton";
			this->��ӡPToolStripButton->Size = System::Drawing::Size(23, 22);
			this->��ӡPToolStripButton->Text = L"��ӡ(&P)";
			// 
			// toolStripSeparator
			// 
			this->toolStripSeparator->Name = L"toolStripSeparator";
			this->toolStripSeparator->Size = System::Drawing::Size(6, 25);
			// 
			// ����UToolStripButton
			// 
			this->����UToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->����UToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"����UToolStripButton.Image")));
			this->����UToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->����UToolStripButton->Name = L"����UToolStripButton";
			this->����UToolStripButton->Size = System::Drawing::Size(23, 22);
			this->����UToolStripButton->Text = L"����(&U)";
			// 
			// ����CToolStripButton
			// 
			this->����CToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->����CToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"����CToolStripButton.Image")));
			this->����CToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->����CToolStripButton->Name = L"����CToolStripButton";
			this->����CToolStripButton->Size = System::Drawing::Size(23, 22);
			this->����CToolStripButton->Text = L"����(&C)";
			// 
			// ճ��PToolStripButton
			// 
			this->ճ��PToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->ճ��PToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ճ��PToolStripButton.Image")));
			this->ճ��PToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->ճ��PToolStripButton->Name = L"ճ��PToolStripButton";
			this->ճ��PToolStripButton->Size = System::Drawing::Size(23, 22);
			this->ճ��PToolStripButton->Text = L"ճ��(&P)";
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 25);
			// 
			// ����LToolStripButton
			// 
			this->����LToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->����LToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"����LToolStripButton.Image")));
			this->����LToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->����LToolStripButton->Name = L"����LToolStripButton";
			this->����LToolStripButton->Size = System::Drawing::Size(23, 22);
			this->����LToolStripButton->Text = L"����(&L)";
			// 
			// ϵͳ��ϢBToolStripMenuItem
			// 
			this->ϵͳ��ϢBToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ϵͳ��ϢBToolStripMenuItem->Name = L"ϵͳ��ϢBToolStripMenuItem";
			this->ϵͳ��ϢBToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->ϵͳ��ϢBToolStripMenuItem->Text = L"ϵͳ��Ϣ&B";
			this->ϵͳ��ϢBToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::ϵͳ��ϢBToolStripMenuItem_Click);
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
			this->Text = L"���ĵ��༭��";
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

private: System::Void �½�NToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Note ^newMDIChild = gcnew Note();
	newMDIChild->MdiParent = this;
	newMDIChild->Text = "�ĵ�" + FormCount.ToString();
	FormCount++;
	newMDIChild->Show();//��ʾ�Ӵ���
}


private: System::Void OnExit(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void ����ToolStripMenuItem_DropDownItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
	ToolStripMenuItem^ item;
	if (e == nullptr)
		item = safe_cast<ToolStripMenuItem^>(sender);
	else
		item = safe_cast<ToolStripMenuItem^>(e->ClickedItem);
	if (item == ���ToolStripMenuItem)
		this->LayoutMdi(MdiLayout::Cascade);    //���
	else if (item == ˮƽƽ��ToolStripMenuItem)
		this->LayoutMdi(MdiLayout::TileHorizontal);//ˮƽƽ��
	else if (item == ��ֱƽ��ToolStripMenuItem)
		this->LayoutMdi(MdiLayout::TileVertical);//��ֱƽ��
}
private: System::Void ��OToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^filename;
	System::Windows::Forms::DialogResult dlg;   //��ȡͨ�öԻ��������
	openFileDialog1->InitialDirectory = "E:\\C++\\VCPP\\";
	openFileDialog1->Filter = "�ҵ��ĵ�(*.mtxt)|*.mtxt|Rtf files(*.rtf)|*.rtf|�ı��ļ�(*.txt)|*.txt";
	openFileDialog1->FilterIndex = 1;
	openFileDialog1->RestoreDirectory = true;
	openFileDialog1->FileName = "";
	dlg = openFileDialog1->ShowDialog();
	try{
		if (dlg == System::Windows::Forms::DialogResult::OK)
		{
			if (Path::GetExtension(openFileDialog1->FileName) == ".rtf"
				|| Path::GetExtension(openFileDialog1->FileName) == ".mtxt"
				|| Path::GetExtension(openFileDialog1->FileName) == ".txt"){  //ʹ��Path������ǰ�����using namespace System::IO;
				filename = openFileDialog1->FileName;
				Note ^newMDIChild = gcnew Note();
				newMDIChild->MdiParent = this;
				//newMDIChild->Filename = filename;
				newMDIChild->Show();
			}
			else MessageBox::Show(L"ѡ��Ĳ���mtxt��RTF��TXT��ʽ���ļ�����Ч", "����", MessageBoxButtons::OK);
		}
	}
	catch (System::ArgumentException ^e){
		MessageBox::Show(L"���ļ�����", "����", MessageBoxButtons::OK);
	}
}
private: System::Void ����AToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	AboutDlg^ dlg = gcnew AboutDlg;
	dlg->ShowDialog();
}
private: System::Void ϵͳ��ϢBToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	WinMess^ dlg = gcnew WinMess;
	dlg->ShowDialog();
}
};
}

