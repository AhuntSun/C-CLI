#pragma once

namespace EXP1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ImageForm 摘要
	/// </summary>
	public ref class ImageForm : public System::Windows::Forms::Form
	{
	public:

		ImageForm(void)
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
		~ImageForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  操作OToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  旋转RToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  缩放SToolStripMenuItem;
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton1;
	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ImageForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->操作OToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->旋转RToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->缩放SToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->menuStrip1->Size = System::Drawing::Size(284, 25);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// 操作OToolStripMenuItem
			// 
			this->操作OToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->操作OToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->旋转RToolStripMenuItem,
					this->缩放SToolStripMenuItem
			});
			this->操作OToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->操作OToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::MatchOnly;
			this->操作OToolStripMenuItem->MergeIndex = 2;
			this->操作OToolStripMenuItem->Name = L"操作OToolStripMenuItem";
			this->操作OToolStripMenuItem->Size = System::Drawing::Size(62, 21);
			this->操作OToolStripMenuItem->Text = L"操作(&O)";
			// 
			// 旋转RToolStripMenuItem
			// 
			this->旋转RToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->旋转RToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->旋转RToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::Insert;
			this->旋转RToolStripMenuItem->MergeIndex = 1;
			this->旋转RToolStripMenuItem->Name = L"旋转RToolStripMenuItem";
			this->旋转RToolStripMenuItem->Size = System::Drawing::Size(116, 22);
			this->旋转RToolStripMenuItem->Text = L"旋转(&R)";
			// 
			// 缩放SToolStripMenuItem
			// 
			this->缩放SToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->缩放SToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->缩放SToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::Insert;
			this->缩放SToolStripMenuItem->MergeIndex = 2;
			this->缩放SToolStripMenuItem->Name = L"缩放SToolStripMenuItem";
			this->缩放SToolStripMenuItem->Size = System::Drawing::Size(116, 22);
			this->缩放SToolStripMenuItem->Text = L"缩放(&S)";
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
		menuStrip1->Visible = !this->IsMdiChild;  // 作为MDI子窗体时隐藏菜单栏
	}
};
}
