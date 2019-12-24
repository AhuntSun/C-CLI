#pragma once
#include "Form2.h"                    // 包含子窗体的头文件
#include "WordForm.h"
#include "ImageForm.h"
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
	private: System::Windows::Forms::ToolStripMenuItem^  文体ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem1;

	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem2;

	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^  文本窗体ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  图像窗体ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  窗体ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  编辑ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton2;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton3;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton4;



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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->文体ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->文本窗体ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->图像窗体ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->窗体ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->编辑ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton4 = (gcnew System::Windows::Forms::ToolStripButton());
			this->menuStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->文体ToolStripMenuItem,
					this->窗体ToolStripMenuItem, this->编辑ToolStripMenuItem1
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->MdiWindowListItem = this->窗体ToolStripMenuItem;
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(373, 25);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// 文体ToolStripMenuItem
			// 
			this->文体ToolStripMenuItem->BackColor = System::Drawing::SystemColors::Info;
			this->文体ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripMenuItem1,
					this->toolStripMenuItem2, this->toolStripMenuItem3
			});
			this->文体ToolStripMenuItem->Name = L"文体ToolStripMenuItem";
			this->文体ToolStripMenuItem->Size = System::Drawing::Size(44, 21);
			this->文体ToolStripMenuItem->Text = L"文件";
			this->文体ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::文体ToolStripMenuItem_Click);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->BackColor = System::Drawing::SystemColors::Info;
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(100, 22);
			this->toolStripMenuItem1->Text = L"新建";
			this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::newMenuClick);
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->BackColor = System::Drawing::SystemColors::Info;
			this->toolStripMenuItem2->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->文本窗体ToolStripMenuItem,
					this->图像窗体ToolStripMenuItem
			});
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(100, 22);
			this->toolStripMenuItem2->Text = L"导入";
			// 
			// 文本窗体ToolStripMenuItem
			// 
			this->文本窗体ToolStripMenuItem->BackColor = System::Drawing::SystemColors::Highlight;
			this->文本窗体ToolStripMenuItem->Name = L"文本窗体ToolStripMenuItem";
			this->文本窗体ToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->文本窗体ToolStripMenuItem->Text = L"文本窗体";
			this->文本窗体ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::On_WordFile);
			// 
			// 图像窗体ToolStripMenuItem
			// 
			this->图像窗体ToolStripMenuItem->BackColor = System::Drawing::SystemColors::Highlight;
			this->图像窗体ToolStripMenuItem->Name = L"图像窗体ToolStripMenuItem";
			this->图像窗体ToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->图像窗体ToolStripMenuItem->Text = L"图像窗体";
			this->图像窗体ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::On_ImageFile);
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->BackColor = System::Drawing::SystemColors::Info;
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(100, 22);
			this->toolStripMenuItem3->Text = L"退出";
			// 
			// 窗体ToolStripMenuItem
			// 
			this->窗体ToolStripMenuItem->BackColor = System::Drawing::SystemColors::Info;
			this->窗体ToolStripMenuItem->Name = L"窗体ToolStripMenuItem";
			this->窗体ToolStripMenuItem->Size = System::Drawing::Size(44, 21);
			this->窗体ToolStripMenuItem->Text = L"窗体";
			// 
			// 编辑ToolStripMenuItem1
			// 
			this->编辑ToolStripMenuItem1->BackColor = System::Drawing::SystemColors::Info;
			this->编辑ToolStripMenuItem1->Name = L"编辑ToolStripMenuItem1";
			this->编辑ToolStripMenuItem1->Size = System::Drawing::Size(44, 21);
			this->编辑ToolStripMenuItem1->Text = L"编辑";
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->toolStripButton1,
					this->toolStripButton2, this->toolStripButton3, this->toolStripButton4
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 25);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(373, 25);
			this->toolStrip1->TabIndex = 3;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(23, 22);
			this->toolStripButton1->Text = L"toolStripButton1";
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
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(373, 297);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"MDI主窗体";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->MdiChildActivate += gcnew System::EventHandler(this, &Form1::form1MdiChildActive);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void 文体ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void newMenuClick(System::Object^  sender, System::EventArgs^  e) {
		Form2^ childForm = gcnew Form2();   // 创建子窗体对象
		childForm->MdiParent = this;               // 设置子窗体的父窗体
		childForm->Show();                               // 显示子窗体
	}

private: System::Void On_WordFile(System::Object^  sender, System::EventArgs^  e) {
		WordForm^ doc = gcnew WordForm;
	try
	{
	doc->MdiParent = this;
	doc->Show();
	}
	catch (Exception ^e)
	{
		MessageBox::Show(e->Message);
	}
	
}
private: System::Void On_ImageFile(System::Object^  sender, System::EventArgs^  e) {
	ImageForm^ doc = gcnew ImageForm;
	try
	{
		doc->MdiParent = this;
		doc->Show();
	}
	catch (Exception ^e)
	{
		MessageBox::Show(e->Message);
	}
}
	private: System::Void form1MdiChildActive(System::Object^  sender, System::EventArgs^  e) {
		ToolStripManager::RevertMerge(toolStrip1);    // 撤销上次的合并操作
		Form2^fm1 = gcnew Form2();

		if (this->ActiveMdiChild == nullptr)
		{
			return;   // 是否为激活MDI子窗体
		}
		//try
		//{
		//	Form2^childForm = safe_cast<Form2^>(this->ActiveMdiChild); // 子窗体对象
		//}
		//catch (Exception ^e)
		//{
		//	MessageBox::Show(e->Message);
		//}
		//try
		//{
		//	ImageForm^ childForm = safe_cast<ImageForm^>(this->ActiveMdiChild);
		//}
		//catch (Exception ^e)
		//{
		//	MessageBox::Show(e->Message);
		//}
		//try
		//{
		//	WordForm^ childForm = safe_cast<WordForm^>(this->ActiveMdiChild);
		//}
		//catch (Exception ^e)
		//{
		//	MessageBox::Show(e->Message);
		//}
	//else if (this->ActiveMdiChild.GetType().Name == Form2())
	//{
	//	Form2^childForm = safe_cast<Form2^>(this->ActiveMdiChild); // 子窗体对象
	//}
	//else if (this->ActiveMdiChild ==ImageForm)
	//{
	//	ImageForm^ childForm = safe_cast<ImageForm^>(this->ActiveMdiChild);
	//}
	//else if (this->ActiveMdiChild == doc)
	//{
	//	WordForm^ childForm = safe_cast<WordForm^>(this->ActiveMdiChild);
	//}
		WordForm^ childForm = safe_cast<WordForm^>(this->ActiveMdiChild);
	ToolStripManager::Merge(childForm->MergeToolStrip, toolStrip1); // 合并工具条
}
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}

