#pragma once
#include "Form2.h"                    // �����Ӵ����ͷ�ļ�
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
	private: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem1;

	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem2;

	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^  �ı�����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ͼ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �༭ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton2;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton3;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton4;



	private:
		/// <summary>
		/// ����������������
		/// </summary>
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
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�ı�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ͼ����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�༭ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
				this->����ToolStripMenuItem,
					this->����ToolStripMenuItem, this->�༭ToolStripMenuItem1
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->MdiWindowListItem = this->����ToolStripMenuItem;
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(373, 25);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->BackColor = System::Drawing::SystemColors::Info;
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripMenuItem1,
					this->toolStripMenuItem2, this->toolStripMenuItem3
			});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(44, 21);
			this->����ToolStripMenuItem->Text = L"�ļ�";
			this->����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::����ToolStripMenuItem_Click);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->BackColor = System::Drawing::SystemColors::Info;
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(100, 22);
			this->toolStripMenuItem1->Text = L"�½�";
			this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::newMenuClick);
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->BackColor = System::Drawing::SystemColors::Info;
			this->toolStripMenuItem2->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->�ı�����ToolStripMenuItem,
					this->ͼ����ToolStripMenuItem
			});
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(100, 22);
			this->toolStripMenuItem2->Text = L"����";
			// 
			// �ı�����ToolStripMenuItem
			// 
			this->�ı�����ToolStripMenuItem->BackColor = System::Drawing::SystemColors::Highlight;
			this->�ı�����ToolStripMenuItem->Name = L"�ı�����ToolStripMenuItem";
			this->�ı�����ToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->�ı�����ToolStripMenuItem->Text = L"�ı�����";
			this->�ı�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::On_WordFile);
			// 
			// ͼ����ToolStripMenuItem
			// 
			this->ͼ����ToolStripMenuItem->BackColor = System::Drawing::SystemColors::Highlight;
			this->ͼ����ToolStripMenuItem->Name = L"ͼ����ToolStripMenuItem";
			this->ͼ����ToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->ͼ����ToolStripMenuItem->Text = L"ͼ����";
			this->ͼ����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::On_ImageFile);
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->BackColor = System::Drawing::SystemColors::Info;
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(100, 22);
			this->toolStripMenuItem3->Text = L"�˳�";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->BackColor = System::Drawing::SystemColors::Info;
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(44, 21);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// �༭ToolStripMenuItem1
			// 
			this->�༭ToolStripMenuItem1->BackColor = System::Drawing::SystemColors::Info;
			this->�༭ToolStripMenuItem1->Name = L"�༭ToolStripMenuItem1";
			this->�༭ToolStripMenuItem1->Size = System::Drawing::Size(44, 21);
			this->�༭ToolStripMenuItem1->Text = L"�༭";
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
			this->Text = L"MDI������";
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
	private: System::Void ����ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void newMenuClick(System::Object^  sender, System::EventArgs^  e) {
		Form2^ childForm = gcnew Form2();   // �����Ӵ������
		childForm->MdiParent = this;               // �����Ӵ���ĸ�����
		childForm->Show();                               // ��ʾ�Ӵ���
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
		ToolStripManager::RevertMerge(toolStrip1);    // �����ϴεĺϲ�����
		Form2^fm1 = gcnew Form2();

		if (this->ActiveMdiChild == nullptr)
		{
			return;   // �Ƿ�Ϊ����MDI�Ӵ���
		}
		//try
		//{
		//	Form2^childForm = safe_cast<Form2^>(this->ActiveMdiChild); // �Ӵ������
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
	//	Form2^childForm = safe_cast<Form2^>(this->ActiveMdiChild); // �Ӵ������
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
	ToolStripManager::Merge(childForm->MergeToolStrip, toolStrip1); // �ϲ�������
}
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}

