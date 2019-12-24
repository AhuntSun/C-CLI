#pragma once

namespace EXP1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// WordForm 摘要
	/// </summary>
	public ref class WordForm : public System::Windows::Forms::Form
	{
	public:
		WordForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	public:
		property ToolStrip^ MergeToolStrip {              // 定义MergeToolStrip属性
			ToolStrip^ get() { return this->toolStrip1; } // 取得工具条对象
		}
	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~WordForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  操作OToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  查找FToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  插入IToolStripMenuItem;
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(WordForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->操作OToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->查找FToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->插入IToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->menuStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->操作OToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(312, 25);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// 操作OToolStripMenuItem
			// 
			this->操作OToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->操作OToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->查找FToolStripMenuItem,
					this->插入IToolStripMenuItem
			});
			this->操作OToolStripMenuItem->ForeColor = System::Drawing::Color::Black;
			this->操作OToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::MatchOnly;
			this->操作OToolStripMenuItem->MergeIndex = 2;
			this->操作OToolStripMenuItem->Name = L"操作OToolStripMenuItem";
			this->操作OToolStripMenuItem->Size = System::Drawing::Size(62, 21);
			this->操作OToolStripMenuItem->Text = L"操作(&O)";
			// 
			// 查找FToolStripMenuItem
			// 
			this->查找FToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->查找FToolStripMenuItem->ForeColor = System::Drawing::Color::Black;
			this->查找FToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::Insert;
			this->查找FToolStripMenuItem->MergeIndex = 1;
			this->查找FToolStripMenuItem->Name = L"查找FToolStripMenuItem";
			this->查找FToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->查找FToolStripMenuItem->Text = L"查找(&F)";
			// 
			// 插入IToolStripMenuItem
			// 
			this->插入IToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->插入IToolStripMenuItem->ForeColor = System::Drawing::Color::Black;
			this->插入IToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::Insert;
			this->插入IToolStripMenuItem->MergeIndex = 2;
			this->插入IToolStripMenuItem->Name = L"插入IToolStripMenuItem";
			this->插入IToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->插入IToolStripMenuItem->Text = L"插入(&I)";
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripButton1 });
			this->toolStrip1->Location = System::Drawing::Point(0, 25);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(312, 25);
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
			// WordForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(312, 261);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"WordForm";
			this->Text = L"WordForm";
			this->Load += gcnew System::EventHandler(this, &WordForm::On_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void On_Load(System::Object^  sender, System::EventArgs^  e) {
		menuStrip1->Visible = !this->IsMdiChild;  // 作为MDI子窗体时隐藏菜单栏
	}
};
}
