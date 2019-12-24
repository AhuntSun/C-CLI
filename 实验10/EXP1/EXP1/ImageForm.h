#pragma once

namespace EXP1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ImageForm ժҪ
	/// </summary>
	public ref class ImageForm : public System::Windows::Forms::Form
	{
	public:

		ImageForm(void)
		{
			InitializeComponent();
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}
	public:
		property ToolStrip^ MergeToolStrip {              // ����MergeToolStrip����
			ToolStrip^ get() { return this->toolStrip1; } // ȡ�ù���������
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~ImageForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  ����OToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��תRToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����SToolStripMenuItem;
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton1;
	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ImageForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->����OToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��תRToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����SToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->menuStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->����OToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(284, 25);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ����OToolStripMenuItem
			// 
			this->����OToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->����OToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->��תRToolStripMenuItem,
					this->����SToolStripMenuItem
			});
			this->����OToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->����OToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::MatchOnly;
			this->����OToolStripMenuItem->MergeIndex = 2;
			this->����OToolStripMenuItem->Name = L"����OToolStripMenuItem";
			this->����OToolStripMenuItem->Size = System::Drawing::Size(62, 21);
			this->����OToolStripMenuItem->Text = L"����(&O)";
			// 
			// ��תRToolStripMenuItem
			// 
			this->��תRToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->��תRToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->��תRToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::Insert;
			this->��תRToolStripMenuItem->MergeIndex = 1;
			this->��תRToolStripMenuItem->Name = L"��תRToolStripMenuItem";
			this->��תRToolStripMenuItem->Size = System::Drawing::Size(116, 22);
			this->��תRToolStripMenuItem->Text = L"��ת(&R)";
			// 
			// ����SToolStripMenuItem
			// 
			this->����SToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->����SToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->����SToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::Insert;
			this->����SToolStripMenuItem->MergeIndex = 2;
			this->����SToolStripMenuItem->Name = L"����SToolStripMenuItem";
			this->����SToolStripMenuItem->Size = System::Drawing::Size(116, 22);
			this->����SToolStripMenuItem->Text = L"����(&S)";
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripButton1 });
			this->toolStrip1->Location = System::Drawing::Point(0, 25);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(284, 25);
			this->toolStrip1->TabIndex = 1;
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
			// ImageForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"ImageForm";
			this->Text = L"ImageForm";
			this->Load += gcnew System::EventHandler(this, &ImageForm::On_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void On_Load(System::Object^  sender, System::EventArgs^  e) {
		menuStrip1->Visible = !this->IsMdiChild;  // ��ΪMDI�Ӵ���ʱ���ز˵���
	}
};
}
