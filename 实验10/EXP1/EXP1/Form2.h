#pragma once

namespace EXP1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Form2 摘要
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		property ToolStrip^ MergeToolStrip {    // 定义MergeToolStrip属性
			ToolStrip^ get() { return this->toolStrip1; } // 取得工具条对象
		}
	public:
		Form2(void)
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
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  文件ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  打开ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  保存ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  关闭ToolStripMenuItem;
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton2;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form2::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->文件ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->打开ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->保存ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->关闭ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->menuStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->文件ToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(296, 25);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// 文件ToolStripMenuItem
			// 
			this->文件ToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->文件ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->打开ToolStripMenuItem,
					this->保存ToolStripMenuItem, this->关闭ToolStripMenuItem
			});
			this->文件ToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->文件ToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::MatchOnly;
			this->文件ToolStripMenuItem->MergeIndex = 1;
			this->文件ToolStripMenuItem->Name = L"文件ToolStripMenuItem";
			this->文件ToolStripMenuItem->Size = System::Drawing::Size(44, 21);
			this->文件ToolStripMenuItem->Text = L"文件";
			// 
			// 打开ToolStripMenuItem
			// 
			this->打开ToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->打开ToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->打开ToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::Insert;
			this->打开ToolStripMenuItem->MergeIndex = 3;
			this->打开ToolStripMenuItem->Name = L"打开ToolStripMenuItem";
			this->打开ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->打开ToolStripMenuItem->Text = L"打开";
			// 
			// 保存ToolStripMenuItem
			// 
			this->保存ToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->保存ToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->保存ToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::Insert;
			this->保存ToolStripMenuItem->MergeIndex = 4;
			this->保存ToolStripMenuItem->Name = L"保存ToolStripMenuItem";
			this->保存ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->保存ToolStripMenuItem->Text = L"保存";
			// 
			// 关闭ToolStripMenuItem
			// 
			this->关闭ToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->关闭ToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->关闭ToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::Insert;
			this->关闭ToolStripMenuItem->MergeIndex = 6;
			this->关闭ToolStripMenuItem->Name = L"关闭ToolStripMenuItem";
			this->关闭ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->关闭ToolStripMenuItem->Text = L"关闭";
			this->关闭ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form2::closeMenuClick);
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripButton1,
					this->toolStripButton2
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 25);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(296, 25);
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
			// toolStripButton2
			// 
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(23, 22);
			this->toolStripButton2->Text = L"toolStripButton2";
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(296, 248);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form2";
			this->Text = L"MDI子窗体";
			this->Load += gcnew System::EventHandler(this, &Form2::On_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: String^ strDocFileName;
	private: System::Void On_Load(System::Object^  sender, System::EventArgs^  e) {
		// 如果没有文件名，则表示新建一个文档窗口
		static int nNewFileNum = 1;
		if (strDocFileName == nullptr) {
			// 设置文档窗口标题
			this->Text = String::Concat("无标题", nNewFileNum.ToString());
			nNewFileNum++;       // 计数器加1
			menuStrip1->Visible = !this->IsMdiChild;  // 作为MDI子窗体时隐藏菜单栏
			toolStrip1->Visible = !this->IsMdiChild;           // 作为MDI子窗体时隐藏工具条
		}
	}

private: System::Void closeMenuClick(System::Object^  sender, System::EventArgs^  e) {
	Close();         // 关闭MDI子窗体
}
};
}
